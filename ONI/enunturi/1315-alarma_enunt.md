Părinţii lui Gigel i-au făcut cadou de ziua lui un mobil mai ciudat. Fericit, Gigel vrea să nu întârzie mâine la prima oră de la şcoală ca să le arate cât mai repede mobilul colegilor. El are însă probleme cu trezitul de dimineaţă. Din fericire, mobilul are şi alarmă. Pentru a seta momentul de timp la care se declanşează alarma, datele trebuie introdus  în formatul "ora şi minutul" $\text{HHMM}$ (exact $4$ cifre). Primele $2$ cifre reprezintă ora, iar ultimele două cifre exprimă minutele. Gigel a observat că dacă introduce ora $74$, pe ecran este afişată ora $02$, adică restul împărţirii la $24$. În mod asemănător, dacă tastează minutul $84$ pe ecran, se va afişa minutul $24$ (restul împărţirii la $60$). Dacă Gigel vrea să se trezească la $0826$ (ora $8$ şi $26$ de minute), el poate tasta $0826$ sau $5686$.
~[alarma.png|align=right]
Dispunerea celor $10$ taste corespunzătoare cifrelor $0, 1, ..., 9$ este una specială, în sensul că pe mobil există şi multe alte taste, iar cifrele au o dispunere aleatoare. De exemplu, dacă tastele mobilului lui Gigel sunt dispuse pe $5$ linii şi $6$ coloane, numerotate de la $1$ la $5$ şi respectiv de la $1$ la $6$, atunci el ar putea avea dispuse tastele numerice ca în figura alăturată
Pentru a seta alarma, Gigel vrea să consume cât mai puţine calorii. Numărul de calorii consumate ca să deplaseze degetul de la tasta $A$, situată pe linia $x_A$ şi coloana $y_A$, la tasta $B$, situată pe linia $x_B$ şi coloana $y_B$, se calculează dupa formula:
$\text{Calorii}(A, B) = |x_A \ – \ x_B| + |y_A \ – \ y_B|$
Dacă tastele sunt dispuse ca în figura de mai sus şi considerând că tasta $1$ se afla pe linia $1$ şi coloana $1$, pentru a tasta $5686$, Gigel consuma $11$ calorii, astfel:
$\text{Calorii}(5, 6) + \text{Calorii}(6, 8) + \text{Calorii}(8,6) = (|5 - 2| + |1 - 3|) + (|2 - 1| + |3 - 5|) + (|1 - 2| + |5 - 3|) =$
$= (3 + 2) + (1 + 2) + (1 + 2) = 11$

# Cerinţă

Fiind date coordonatele tastelor corespunzătoare cifrelor de la $0$ la $9$ şi momentul de timp la care vrea să se trezească Gigel, scrieţi un program care determină cele $4$ cifre care trebuie tastate, astfel încât numărul de calorii consumate să fie minim. Dacă există mai multe soluţii, atunci se va afişa cea pentru care numărul tastat este minim.

# Date de intrare

Primele $10$ linii din fişierul de intrare `alarma.in` conţin perechi de numere naturale nenule, $x_i \ y_i$, separate printr-un spaţiu, reprezentând coordonatele tastei numerice corespunzătoare cifrei $i, 0 \leq i \leq 9$, în ordinea crescătoare a valorilor cifrelor de pe taste. Pe a unsprezecea linie se află $4$ cifre care reprezintă momentul de timp la care Gigel doreşte să se trezească, în formatul $\text{HHMM}$.

# Date de ieşire

În fişierul de ieşire `alarma.out` se afişează pe prima linie un număr natural reprezentând numărul minim de calorii consumat, iar pe cea de-a doua linie, cele patru cifre pe care le tastează pentru setarea alarmei.

# Restricţii şi precizări

* Coordonatele $x_i$ şi $y_i$ ale unei taste reprezintă linia şi respectiv coloana unde este situată tasta numerică $i$
* $1 \leq x_i \leq 99; 1 \leq y_i \leq 99$ pentru orice valoare a lui $i$ de la $0$ la $9$.
* $0 \leq \text{numărul reprezentat de primele două cifre HH este natural} \leq 23$
* $0 \leq \text{numărul reprezentat de ultimele două cifre MM este natural} \leq 59$
* Pentru determinarea corectă a numărului minim de calorii consumat se acordă $40\%$ din punctaj, iar pentru determinarea corectă a celor $4$ cifre tastate se acordă $60\%$ din punctaj

# Exemplu

`alarma.in`
```
1 2
71 1
18 25
12 2
82 73
3 1
52 3
3 35
2 54
1 93
0124
```

`alarma.out`
```
179
9784
```

## Explicatie

$\text{Calorii}(9, 7) + \text{Calorii}(7, 8) + \text{Calorii}(8, 4) = (|3 - 1| + |93 - 35|) + (|3 - 2| + |54 - 35|) + (|82 - 2| + |73 - 54|) = 2 + 58 + 1 + 19 + 80 + 19 = 179$
