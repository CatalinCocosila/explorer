În grădina lui Macarie există $N^2$ pomi fructiferi de diferite înălțimi, plantați sub forma unui caroiaj de $N$ linii și $N$ coloane, numerotate de la $1$ la $N$. Cum există păsări care mănâncă fructele lor, Macarie s-a gândit să plaseze sisteme de supraveghere care asigură protecție într-o oarecare măsură a pomilor situați pe linia și coloana unde a fost amplasat, în toate cele patru sensuri de deplasare Nord, Sud, Est și Vest, adică la stânga și la dreapta în cadrul liniei și în sus și în jos în cadrul coloanei. În oricare din aceste patru sensuri de deplasare, supravegherea asigurată de un sistem se întrerupe când întâlnește un pom de înălțime strict mai mare decât a pomului în care a fost amplasat.

# Cerinta

Cunoscând înălțimile tuturor celor $N^2$ pomi, scrieți un program care:

1. Presupunând că Macarie are un singur sistem de supraveghere, determinați pentru o linie dată $L$ care este coloana pomului în care trebuie amplasat sistemul de supraveghere astfel încât să fie protejați un număr maxim de pomi. Dacă există mai multe soluții, se va afișa coloana minimă.
2. Presupunând că Macarie a amplasat în fiecare pom al grădinii sale câte un sistem de supraveghere, determinați linia și coloana pomului protejat de cele mai multe sisteme de supraveghere. Dacă există mai multe soluții se va afișa soluția cu linia minimă, iar în cazul în care liniile sunt egale, cea cu coloana minimă.

# Date de intrare

Fișierul de intrare `pasari.in` conține pe prima linie un număr natural $C$ care poate avea valorile $1$ sau $2$ și reprezintă numărul cerinței care trebuie rezolvată. Dacă $C$ = $1$ atunci pe a doua linie se află perechea de numere naturale $N$ și $L$ separate printr-un spațiu, iar dacă $C = 2$, pe cea de-a doua linie se află un număr natural $N$ având semnificația din enunț. Pe următoarele $N$ linii, câte numere $N$ naturale despărțite prin câte un spațiu reprezentând în ordine, înălțimile pomilor de pe fiecare rând, începând cu primul până la ultimul.

# Date de ieșire

Fișierul de ieșire `pasari.out` va conține pe prima linie:

* dacă $C = 1$ un singur număr natural reprezentând coloana minimă determinată conform cerinței
* dacă $C = 2$ două numere naturale reprezentând linia și coloana determinată conform cerinței

# Restricții și precizări

* $5 \leq N \leq 1 \ 000$
* $1 \leq$ înălțimea oricărui pom $\leq 100 \ 000$
* Pentru rezolvarea corectă a primei cerințe se obțin $30$ de puncte, iar pentru rezolvarea corectă a celei de a doua cerințe se obțin $70$ de puncte.

# Exemplul 1

`pasari.in`
```
1
5 2
8 4 3 9 1
5 1 4 2 1
6 7 2 3 1
7 6 4 1 1
1 1 1 1 1
```

`pasari.out`
```
3
```

## Explicație

Pe linia $2$ așezarea optimă este pe coloana $3$, în felul acesta fiind protejați $8$ pomi.

# Exemplul 2


`pasari.in`
```
2
5
1 2 3 2 1
2 2 3 2 2
3 2 3 2 3
2 2 3 2 2
1 2 3 2 1
```

`pasari.out`
```
3 2
```

## Explicație

Pomul situat la pozițiile $(3,2)$, adică pe linia $3$ și coloana $2$, este supravegheat de opt sisteme. Acestea sunt situate la pozițiile $(1,2)$, $(2,2)$, $(3,2)$, $(4,2)$, $(5,2)$, $(3,1)$, $(3,3)$ și $(3,5)$. Pomul situat la pozițiile $(3,4)$ este protejat tot de opt sisteme de supraveghere, dar conform regulii din enunt se va afișa cel situat pe linia mai mică, respectiv $3 \ 2$.

