~[peste.png|align=right]
Ursul: Bună, cumătră! Da cât peşte ai? Dă-mi şi mie, că tare mi-i poftă!
Vulpea: Ia mai pune-ţi pofta-n cui. Dacă vrei pește, du-te şi-ţi înmoaie coadan baltă şi vei avea ce să mănânci.
Ursul: Învaţă-mă, te rog, cumătră, că eu nu ştiu cum se prinde peştele.
Vulpea: Alei, cumetre! da' nu ştii că nevoia te-nvaţă ce nici nu gândeşti? Dute deseară la baltă și bagă-ţi coada-n apă. Stai pe loc, fără să te mişti, până spre ziuă. Între timp, ia foaia aceasta pe care am scris $N$ numere naturale și până dimineață trebuie să procedezi în felul următor:

* elimini exact două cifre alăturate din fiecare număr scris pe foaie, astfel încât, celelalte cifre rămase după eliminare să formeze, de la stânga la dreapta, cel mai mare număr posibil (de exemplu, din numărul $77196$, elimini cifrele $7$ și $1$ pentru a obține cel mai mare număr posibil $796$).
* toate cele $N$ numere obținute la pasul anterior, le lipești unul după altul, în ce ordine vrei tu. Uitându-te de la stânga la dreapta la cifrele numerelor lipite, observi că s-a format un nou număr $X$. Ai grijă cum procedezi, căci până dimineață, atâta pește se va prinde de coada ta cât vei obține tu valoarea lui $X$.

Ajutați-l pe urs să prindă cât mai mult pește posibil.

# Cerinţă

Scrieți un program care citește $N$ numere naturale și determină:

1. Cel mai mare număr de eliminări efectuate cu aceleași două cifre alăturate.
2. Cel mai mare număr natural $X$ determinat astfel încât ursul să prindă cât mai mult pește.

# Date de intrare

Fişierul de intrare `peste.in` conţine pe prima linie numărul natural $P$ care poate avea valoarea $1$ sau $2$ și reprezintă numărul cerinței. Cea de-a doua linie conține un număr natural $N$ cu semnificaţia din enunţ, iar pe următoarele $N$ linii, cele $N$ numere scrise pe foaia ce i-a dat-o vulpea ursului, câte un număr natural pe fiecare linie a fișierului.

# Date de ieşire

Fişierul de ieşire `peste.out` conţine pe prima linie un singur număr natural determinat conform cerinței problemei.

# Restricţii şi precizări

* $1 \leq N \leq 100$, fiecare dintre cele $N$ numere au cel puțin $3$ și cel mult $18$ cifre;
* pentru rezolvarea corectă a cerinţei $1$ se acordă $40$ de puncte, iar pentru rezolvarea corectă a cerinţei $2$ se acordă $60$ de puncte;
* pentru cazul $P = 2$, vor exista și teste în valoare de $25$ de puncte în care cele $N$ numere naturale au valori mai mici decât ${10}^{9}$ și alte teste în valoare de $10$ puncte în care cele $N$ numere din fișierul de intrare sunt mai mici decât ${10}^{9}$ și au același număr de cifre.

# Exemplul 1

`peste.in`
```
1
4
1791
802
777
77196
```

`peste.out`
```
2
```

## Explicaţie

Se va rezolva cerința $1$ și în fișier sunt patru numere cu care vom proceda astfel:

* din $1791$ eliminăm cifrele $1$ și $7$ iar numărul rezultat este $91$
* din $802$ eliminăm cifrele $0$ și $2$ iar numărul rezultat este $8$
* din $777$ eliminăm cifrele $7$ și $7$ iar numărul rezultat este $7$
* din $77196$ eliminăm $7$ și $1$ iar numărul rezultat este $796$

S-au efectuat două eliminări cu aceleași două cifre alăturate: $1$ și $7$.

# Exemplul 2

`peste.in`
```
2
4
1791
802
777
77196
```

`peste.out`
```
9187967
```

## Explicaţie

Cu aceleași patru numere din exemplul precedent, vom rezolva cerința $2$.
În urma eliminărilor efectuate s-au obținut numerele: $91, 8, 7, 796$
Cel mai mare număr posibil, obținut prin lipirea acestor numere este $9187967$.
