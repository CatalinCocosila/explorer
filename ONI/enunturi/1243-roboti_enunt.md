Se consideră un caroiaj de forma unui pătrat cu $n \times n$ celule. Avem la dispoziţie cel mult $n \times n$ roboţei ce pot fi plasaţi în oricare din celulele caroiajului, cel mult un roboţel în fiecare celulă. Vom identifica roboţeii plasaţi în caroiaj prin litere mari care să indice în clar sensurile iniţiale de deplasare, după cum urmează: un roboţel de tipul $U$ (up) se va deplasa de jos în sus (din celula în care se află, în celula situată pe linia de deasupra şi aceeaşi coloană), un roboţel de tipul $D$ (down) se va deplasa de sus în jos (din celula în care se află, în celula situată pe linia următoare şi aceeaşi coloană), un roboţel de tipul $L$ (left) se va deplasa de la dreapta la stânga (din celula în care se află, în celula situată pe aceeaşi linie şi coloana din stânga), iar un roboţel de tipul $R$ (right) se va deplasa de la stânga la dreapta (din celula în care se află, în celula situată pe aceeaşi linie şi coloana din dreapta).
Deplasarea are loc pentru un număr cunoscut de paşi $k$. Configuraţia iniţială se consideră pasul $0$. La fiecare pas $i$, fiecare robot se va deplasa într-o celulă vecină celei ocupate la pasul anterior $i - 1$, în conformitate cu sensul lui de deplasare. De exemplu, un roboţel de tip $U$ va avansa în celula plasată deasupra lui, aşa cum un roboţel de tip $L$ va avansa în celula plasată imediat în stânga celei curente. Este posibil ca traseele roboţeilor să se intersecteze sau să se suprapună. Dacă la un anumit pas, doi sau mai mulţi roboţei avansează în aceeaşi celulă, atunci are loc o mică implozie şi, practic, aceşti roboţei se dezintegrează şi dispar de pe caroiaj.
~[roboti1.png|align=right]
În $\text{Figura} \ 1$ este exemplificată o astfel de situaţie: roboţeii de tip $D$ şi $R$, prezenţi în caroiaj la pasul $i - 1$, dispar la pasul următor $i$, pentru că avansează amândoi în celula din mijlocul caroiajului, în timp ce roboţelul de tip $U$ nu are astfel de probleme şi îşi continuă deplasarea.
Să comentăm acum $\text{Figura} \ 2$. Situaţia roboţeilor de tip $D$ şi $U$ de la pasul $i - 1$ poate părea conflictuală, însă ei urmează să avanseze în celule diferite la pasul următor $i$, motiv pentru care nu are loc dezintegrarea lor; practic fac schimb de locuri şi îşi continuă deplasările.
~[roboti2.png|align=center]
În cadrul aceleiaşi $\text{Figuri} \ 2$, paşii $i$ şi $i + 1$ implică o analiză specială care impune noi reguli privind deplasarea roboţeilor. Este vorba de roboţeii de tip $L$ şi $D$ care au atins marginile caroiajului şi nu mai pot executa deplasări la stânga, respectiv în jos, conform tipurilor lor. În astfel de cazuri, sensurile de deplasare pur şi simplu se inversează şi odată cu asta se schimbă şi tipurile roboţeilor. Aşa cum se observă şi în figură, roboţelul de tip $L$, la pasul $i$ nu mai poate efectua deplasări la stânga, motiv pentru care se transformă în roboţel de tip $R$ şi se deplasează cu o celulă mai la dreapta la pasul $i + 1$, conform regulilor de deplasare corespunzătoare noului său tip. La fel se petrec lucrurile şi cu roboţelul de tip $D$ de la pasul $i$ care se transformă în roboţel de tip $U$ la pasul $i  + 1$ şi urcă o poziţie în caroiaj. Evident că această regulă se aplică şi roboţeilor de celelalte două tipuri $R$ şi $U$ care, în situaţia în care ating marginile caroiajului, devin roboţi de tip $L$ şi respectiv $D$, inversându-şi practic sensurile de deplasare. Aşa ar trebui să se întâmple lucrurile şi în cazul roboţelului de tip $U$ situat în colţul din dreapta sus al caroiajului la pasul $i + 1$. El ar trebui să se transforme în roboţel de tip $D$ şi să ocupe o poziţie mai jos în caroiaj la pasul $i + 2$. Numai că această poziţie este “revendicată” şi de roboţelul de tip $R$. Conform celor discutate anterior, dacă doi sau mai mulţi roboţei avansează în aceeaşi celulă, ei se dezintegrează şi dispar din caroiaj, aşa cum este ilustrat şi în figură. Roboţelul de tip $D$ de la pasul $i - 1$ este singurul care “a supravieţuit” până la pasul $i + 2$, chiar dacă s-a transformat pe parcurs într-unul de tip $U$; rămânând singur în caroiaj, mişcarea sa continuă la nesfârşit, având în vedere schimbările corespunzătoare de sens şi de tip, ori de câte ori este cazul

# Cerinţă

Dându-se configuraţia inţială a caroiajului şi un număr specificat de paşi $k$, afişaţi numărul de roboţi care vor mai rămâne în caroiaj şi configuraţia obţinută după $k$ paşi.

# Date de intrare 

Fișierul de intrare `roboti.in` contine pe prima linie numărul natural $n$ (dimensiunea caroiajului). Pe cea de a doua linie se află numărul natural $k$ (numărul de pași). Pe următoarele $n$ linii se află câte $n$ caractere din mulțimnea $\{$`U`, `D`, `L`, `R`, `.`$\}$ (obligatoriu litere mari). Dacă celula nu conține nici un roboțel, atunci $i$ se asociază caracterul `.` (caracterul punct), în caz contrar, celula conține un roboțel și atunci $i$ se asociază unul din caracterele `U`, `D`, `L` sau `R`, în conformitate cu tipul inițial al roboțelului plasat în celulă.

# Date de ieșire

Fișierul de ieșire `roboti.out` va conține pe prima linie numărul de roboței care au rămas în caroiaj după $k$ pași. Pe următoarele $n$ linii se vor afișa cele $n \times n$ valori care reprezintă configurația caroiajului după $k$ pași, sub forma a $n$ linii, fiecare linie conținând $n$ caractere care pot fi: `U`, `D`, `L`, `R` sau `.` (caracterul punct).

# Restricții și precizări

* $2 \leq n \leq 20$
* $1 \leq k \leq 100$
* Fișierele de intrare/ieșire nu conțin spații.

# Exemplu

`roboti.in`
```
3
4
...
.RD
..U
```

`roboti.out`
```
1
...
..D
...
```
