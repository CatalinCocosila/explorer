const CSV_FILES = { OJI: 'probleme_OJI.csv', ONI: 'probleme_ONI.csv' };
const ROOTS = {
  OJI: { enunturi: './OJI/enunturi', rezolvari: './OJI/rezolvari' },
  ONI: { enunturi: './ONI/enunturi', rezolvari: './ONI/rezolvari' }
};

const tabOJI = document.getElementById('tabOJI');
const tabONI = document.getElementById('tabONI');
const searchInput = document.getElementById('search');
const clearBtn = document.getElementById('clearFilters');
const tbody = document.getElementById('problemsTbody');
const emptyState = document.getElementById('emptyState');
const downloadIndexBtn = document.getElementById('downloadIndexBtn');

const modal = document.getElementById('modal');
const modalClose = document.getElementById('modalClose');
const modalBody = document.getElementById('modalBody');
const modalTitle = document.getElementById('modalTitle');

let activeTab = 'OJI';
let dataByTab = { OJI: [], ONI: [] };

const stripDiacritics = (s) => s.normalize('NFD').replace(/[\u0300-\u036f]/g, '');
const toSlug = (name) =>
  stripDiacritics(name).trim().toLowerCase()
    .replace(/[^a-z0-9\s_-]/g, '')
    .replace(/\s+/g, '_')
    .replace(/_+/g, '_');
marked.setOptions({
  gfm: true,
  breaks: true, // Enter = <br>
  smartypants: false
});

function normalizeKeys(obj) {
  const out = {};
  for (const k in obj) out[stripDiacritics(k).trim().toLowerCase()] = obj[k];
  return out;
}

function parseCSV(url) {
  return new Promise((resolve, reject) => {
    Papa.parse(url, {
      header: true,
      download: true,
      skipEmptyLines: true,
      complete: (res) => resolve(res.data),
      error: reject
    });
  });
}

async function loadData() {
  for (const tab of ['OJI', 'ONI']) {
    try {
      const rows = await parseCSV(CSV_FILES[tab]);
      const norm = rows.map((raw, idx) => {
        const r = normalizeKeys(raw);
        const name = r['problema'] || r['problemă'] || r['name'] || `Problema ${idx + 1}`;
        const descriere = r['descriere'] || r['notiuni'] || r['noțiuni'] || '';

        // extragem un numar de la inceput (ex: 922 din "922-furnica")
        const match = name.match(/^(\d+)/);
        const id = match ? match[1] : '';

        const fileSol = r['fisier_rezolvare'] || r['rezolvare'] || '';
        const fileEn = r['fisier_enunt'] || r['enunt'] || r['enunț'] || '';
        const slug = toSlug(name);

        return { name, descriere, slug, id, fileSol, fileEn };
      });
      dataByTab[tab] = norm;
    } catch {
      dataByTab[tab] = [];
    }
  }
  renderTable();
}


function matchesFilters(item) {
  const q = searchInput.value.trim().toLowerCase();
  const txt = (item.name + ' ' + (item.descriere || '')).toLowerCase();
  return !q || txt.includes(q);
}

function renderTable() {
  if (activeTab === 'OJI') {
    tabOJI.classList.add('bg-black', 'text-white');
    tabONI.classList.remove('bg-black', 'text-white');
  } else {
    tabONI.classList.add('bg-black', 'text-white');
    tabOJI.classList.remove('bg-black', 'text-white');
  }

  const rows = dataByTab[activeTab].filter(matchesFilters);
  tbody.innerHTML = '';

  rows.forEach((item, i) => {
    const tr = document.createElement('tr');
    tr.innerHTML = `
      <td class="px-4 py-3 text-sm text-gray-500">${i + 1}</td>
      <td class="px-4 py-3"><div class="font-medium">${item.name}</div></td>
      <td class="px-4 py-3"><p class="text-sm text-gray-700">${item.descriere}</p></td>
      <td class="px-4 py-3 text-right">
        <button class="px-3 py-1.5 rounded-lg border mr-2" data-action="enunt">Enunț</button>
        <button class="px-3 py-1.5 rounded-lg border" data-action="rezolvare">Rezolvare</button>
      </td>
    `;
    tr.querySelector('[data-action="enunt"]').onclick = () => openEnunt(item);
    tr.querySelector('[data-action="rezolvare"]').onclick = () => openRezolvare(item);
    tbody.appendChild(tr);
  });

  emptyState.classList.toggle('hidden', rows.length !== 0);
}

// tries paths in order and returns first successful response text
async function fetchFirst(paths, asText = true) {
  for (const p of paths) {
    try {
      const res = await fetch(p);
      if (res.ok) return asText ? await res.text() : await res.arrayBuffer();
    } catch {}
  }
  throw new Error('not found');
}

async function openEnunt(item) {
  modalTitle.textContent = `Enunț – ${item.name}`;
  modalBody.innerHTML = '<div>Se încarcă…</div>';
  showModal();

  const base = ROOTS[activeTab].enunturi;
  const candidates = [
    item.fileEn && `${base}/${item.fileEn}`,
    item.id && `${base}/${item.id}-${item.slug}_enunt.md`,
    `${base}/${item.slug}_enunt.md`,
    item.id && `${base}/${item.id}.md`
  ].filter(Boolean);

  try {
    let md = await fetchFirst(candidates, true);

    // Normalizează CRLF și \n
    md = md.replace(/\r\n/g, '\n').replace(/\\n/g, '\n');

    // ~[imgX.png] -> ![ ](https://kilonova.ro/assets/problem/{id}/attachment/imgX.png)
    if (item.id) {
      md = md.replace(/~\[([^\]]+)\]/g, (m, filename) => {
        return `![](${`https://kilonova.ro/assets/problem/${item.id}/attachment/${filename}`})`;
      });
    }

    const html = marked.parse(md);
    modalBody.innerHTML = DOMPurify.sanitize(html);

    // Randare formule LaTeX
    if (window.renderMathInElement) {
      renderMathInElement(modalBody, {
        delimiters: [
          { left: '$$', right: '$$', display: true },
          { left: '$',  right: '$',  display: false },
          { left: '\\(', right: '\\)', display: false },
          { left: '\\[', right: '\\]', display: true }
        ],
        throwOnError: false
      });
    }

    // Syntax highlight pentru cod
    modalBody.querySelectorAll('pre code').forEach(el => hljs.highlightElement(el));

  } catch {
    modalBody.innerHTML = `<div class="text-red-600">Enunțul nu a putut fi încărcat.<br><small>${candidates.join('<br>')}</small></div>`;
  }
}


async function openRezolvare(item) {
  modalTitle.textContent = `Rezolvare – ${item.name}`;
  modalBody.innerHTML = '<div>Se încarcă…</div>';
  showModal();

  const base = ROOTS[activeTab].rezolvari;

  const candidates = [
    item.fileSol && `${base}/${item.fileSol}`,                
    item.id && `${base}/${item.id}-${item.slug}_rezolvare.cpp`,
    `${base}/${item.slug}_rezolvare.cpp`,
    item.id && `${base}/${item.id}_rezolvare.cpp`,
    item.id && `${base}/${item.id}-${item.slug}.cpp`,
    `${base}/${item.slug}.cpp`,
    item.id && `${base}/${item.id}.cpp`
  ].filter(Boolean);

  try {
    const code = await fetchFirst(candidates, true);

    const pre = document.createElement('pre');
    const codeEl = document.createElement('code');
    codeEl.className = 'language-cpp';
    codeEl.textContent = code; // escape automat

    pre.appendChild(codeEl);
    modalBody.innerHTML = '';
    modalBody.appendChild(pre);

    hljs.highlightElement(codeEl);
  } catch {
    modalBody.innerHTML = `<div class="text-red-600">Rezolvarea nu a putut fi încărcată.<br><small>${candidates.join('<br>')}</small></div>`;
  }
}


function showModal() {
  modal.classList.remove('hidden');
  modal.classList.add('flex');
}
function hideModal() {
  modal.classList.add('hidden');
  modal.classList.remove('flex');
}

tabOJI.onclick = () => { activeTab = 'OJI'; renderTable(); };
tabONI.onclick = () => { activeTab = 'ONI'; renderTable(); };
modalClose.onclick = hideModal;
modal.addEventListener('click', (e) => { if (e.target === modal) hideModal(); });
searchInput.addEventListener('input', renderTable);
clearBtn.onclick = () => { searchInput.value = ''; renderTable(); };

downloadIndexBtn.onclick = () => {
  const blob = new Blob(
    [JSON.stringify({ generatedAt: new Date().toISOString(), tabs: dataByTab }, null, 2)],
    { type: 'application/json' }
  );
  const a = document.createElement('a');
  a.href = URL.createObjectURL(blob);
  a.download = 'index_probleme.json';
  a.click();
};

loadData();
