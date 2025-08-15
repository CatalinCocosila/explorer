
Mihai și Ioana au creat o reprezentare a matricii $A$ cu $N$ linii  (numerotate de la $0$ la $N-1$) şi $M$ coloane (numerotate de la $0$ la $M-1$) în care fiecare element $A[i][j]$ este determinat pe baza următoarei formule:
$A[i][j] = (15 \cdot i+4 \cdot j+2025)$$\%K$,   unde $i$ și $j$ sunt indicii liniei și coloanei, iar $K$ este un număr natural nenul, ales de ei. 

Se definesc următoarele categorii de numere:
* **număr special**: un număr natural de două cifre, al cărui pătrat este un număr de trei cifre, iar cifra zecilor din acest pătrat este egală cu suma dintre cifra sutelor și cifra unităților. Exemplu: $11$ este un număr special.
* **număr aproape special**: un număr care poate deveni special prin eliminarea a cel puțin unei cifre. Exemplu: $12310$ este număr aproape special pentru că prin eliminarea cifrelor $0$, $2$ și $3$ se obține numărul special $11$.

Mihai și Ioana încep, în același timp și cu aceeași viteză, explorarea matricii începând cu $A[0][0]$, folosind strategii diferite:
* Ioana se deplasează pe linii, de sus în jos, și pe fiecare linie de la stânga la dreapta.
* Mihai se deplasează pe coloane, de la stânga la dreapta, și pe fiecare coloană de sus în jos.

În anumite momente de timp, cei doi ajung simultan la același element.

# Cerință

1. Determinați numărul de numere speciale care există în matricea $A$.
2. Determinați numărul elementelor din matricea $A$ care sunt numere aproape speciale, la care Mihai și Ioana ajung în același timp.

# Date de intrare

Fișierul de intrare `special.in` conține pe prima linie numărul natural $C$, unde $C$ este cerința care trebuie rezolvată ($1$ sau $2$). Pe a doua linie se află trei numere $N$ $M$ $K$, separate prin câte un spațiu, cu semnificația din enunț.

# Date de ieșire

Fișierul de ieșire `special.out` conține numărul determinat pentru cerința $C$.

# Restricții și precizări

* $C \in \{1, 2\}$
* $1 \leq N, M \leq 1 \ 000 \ 000$
* $10 \leq K \leq 1 \ 000 \ 000$

| # | Scor | Restricții |
|---|------|------------|
| 1 | 35 | $C = 1$, $1 \leq N, M \leq 1 \ 000$ |
| 2 | 15 | $C = 1$, $1 \ 000 < N, M \leq 1 \ 000 \ 000$ |
| 3 | 30 | $C = 2$, $1 \leq N, M \leq 1 \ 000$ |
| 4 | 20 | $C = 2$, $1 \ 000 < N, M \leq 1 \ 000 \ 000$ | 

# Exemplul 1

`special.in`
```
1
4 5 13
```

`special.out`
```
2
```

## Explicație

$C=1$. Se rezolvă cerința $1$.
Matricea este 

|   |   |   |   |   |
|---|---|---|---|---|
|10 | 1 | 5 | 9 | 0 |
|12 | 3 | 7 |11 | 2 |
| 1 | 5 | 9 | 0 | 4 |
| 3 | 7 |11 | 2 | 6 |

Numărul $11$ este special și apare de $2$ ori. 

# Exemplul 2


`special.in`
```
2
7 5 1000
```

`special.out`
```
1
```

## Explicație

$C=2$. Se rezolvă cerința $2$.
Matricea este 

|      |    |     |     |     |
|------|----|-----|-----|-----|
|  25  | 29 |  33 |  37 |  41 |
|  40  | 44 |  48 |  52 |  56 |
|  55  | 59 |  63 |  67 |  71 |
|  70  | 74 |  78 |  82 |  86 |
|  85  | 89 |  93 |  97 | 101 |
|  100 |104 | 108 | 112 | 116 |
|  115 |119 | 123 | 127 | 131 |

Cei doi copii se întâlnesc la plecare în $A[0][0]$, apoi în $A[3][2]$ și la sosire în $A[6][4]$.  

În $A[6][4]$ se află numărul $131$ care este aproape special.

~[special.png|align=center]


# Exemplul 3


`special.in`
```
2
11 21 3000
```

`special.out`
```
5
```

## Explicație

$C=2$. Se rezolvă cerința $2$.

Sunt $11$ elemente ale matricii în care cei doi copii se întâlnesc, dintre care doar $5$ au ca valori numere aproape speciale. 
