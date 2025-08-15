const CSV_FILES = { OJI: 'probleme_OJI.csv', ONI: 'probleme_ONI.csv' };
const ROOTS = { OJI: { enunturi: 'OJI/enunturi', rezolvari: 'OJI/rezolvari' }, ONI: { enunturi: 'ONI/enunturi', rezolvari: 'ONI/rezolvari' } };
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
const toSlug = (name) => stripDiacritics(name).trim().toLowerCase().replace(/[^a-z0-9\s_-]/g, '').replace(/[\s]+/g, '_').replace(/_+/g, '_');

function normalizeKeys(obj) {
  const newObj = {};
  for (let k in obj) {
    const cleanKey = stripDiacritics(k).trim().toLowerCase();
    newObj[cleanKey] = obj[k];
  }
  return newObj;
}

function parseCSV(url) {
  return new Promise((resolve, reject) => {
    Papa.parse(url, { header: true, download: true, skipEmptyLines: true, complete: (results) => resolve(results.data), error: reject });
  });
}

async function loadData() {
  for (const tab of ['OJI','ONI']) {
    try {
      const rows = await parseCSV(CSV_FILES[tab]);
      const normalized = rows.map((raw, idx) => {
        const r = normalizeKeys(raw);
        const name = r['problema'] || r['problemă'] || r['name'] || `Problema ${idx+1}`;
        const descriere = r['descriere'] || r['notiuni'] || r['noțiuni'] || '';
        const slug = toSlug(name);
        return { name, descriere, slug };
      });
      dataByTab[tab] = normalized;
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
  if (activeTab === 'OJI') { tabOJI.classList.add('bg-black','text-white'); tabONI.classList.remove('bg-black','text-white'); }
  else { tabONI.classList.add('bg-black','text-white'); tabOJI.classList.remove('bg-black','text-white'); }

  const rows = dataByTab[activeTab].filter(matchesFilters);
  tbody.innerHTML = '';

  rows.forEach((item, i) => {
    const tr = document.createElement('tr');
    tr.innerHTML = `
      <td class="px-4 py-3 text-sm text-gray-500">${i+1}</td>
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

async function openEnunt(item) {
  modalTitle.textContent = `Enunț – ${item.name}`;
  modalBody.innerHTML = '<div>Se încarcă…</div>';
  showModal();
  const path = `${ROOTS[activeTab].enunturi}/${item.slug}_enunt.md`;
  try {
    const txt = await (await fetch(path)).text();
    modalBody.innerHTML = marked.parse(txt);
  } catch {
    modalBody.innerHTML = `<div class="text-red-600">Enunțul nu a putut fi încărcat (${path}).</div>`;
  }
}

async function openRezolvare(item) {
  modalTitle.textContent = `Rezolvare – ${item.name}`;
  modalBody.innerHTML = '<div>Se încarcă…</div>';
  showModal();
  const path = `${ROOTS[activeTab].rezolvari}/${item.slug}.cpp`;
  try {
    const txt = await (await fetch(path)).text();
    modalBody.innerHTML = `<pre><code class="language-cpp">${txt}</code></pre>`;
    hljs.highlightAll();
  } catch {
    modalBody.innerHTML = `<div class="text-red-600">Rezolvarea nu a putut fi încărcată (${path}).</div>`;
  }
}

function showModal() { modal.classList.remove('hidden'); modal.classList.add('flex'); }
function hideModal() { modal.classList.add('hidden'); modal.classList.remove('flex'); }

tabOJI.onclick = () => { activeTab = 'OJI'; renderTable(); };
tabONI.onclick = () => { activeTab = 'ONI'; renderTable(); };
modalClose.onclick = hideModal;
modal.addEventListener('click', (e)=>{ if(e.target===modal) hideModal(); });
searchInput.addEventListener('input', renderTable);
clearBtn.onclick = () => { searchInput.value=''; renderTable(); };
downloadIndexBtn.onclick = () => {
  const blob = new Blob([JSON.stringify({ generatedAt: new Date().toISOString(), tabs: dataByTab }, null, 2)], {type:'application/json'});
  const a = document.createElement('a'); a.href = URL.createObjectURL(blob); a.download = 'index_probleme.json'; a.click();
};

loadData();
