Dintr-un șir format din $N$ cifre, numerotate de la $1$ la $N$, Ionel ia exact $M$ cifre aflate pe poziții consecutive. El lipește cifrele luate sau le amestecă și apoi le lipește pentru a obține cu ele un număr cât mai mare.

# Cerință

Cunoscând $N, M$ și cele $N$ cifre din șir, să se determine:

1. cel mai mare număr care se poate obține din primele $M$ dintre cele $N$ cifre date;
2. de unde va lua Ionel $M$ cifre aflate pe poziții consecutive pentru a obține un număr maxim; dacă sunt mai multe poziții corespunzătoare unui număr maxim, alegerea se va face astfel încât numărul format din cifrele rămase, în ordinea în care erau, să fie cât mai mare posibil; dacă și în acest caz există mai multe soluții, se alege poziția maximă.

# Date de intrare

Din fișierul `maxim.in` se citesc: $P$ de pe prima linie, reprezentând cerința problemei ($1$ sau $2$), $N$ și $M$ de pe a doua linie, despărțite printr-un spațiu, cu semnificația din enunț, iar de pe linia a treia, se citesc cele $N$ cifre, despărțite prin câte un spațiu.

# Date de ieșire

În fișierul `maxim.out` se scrie:

* pentru $P = 1$: numărul maxim care se poate obține cu ajutorul primelor $M$ cifre dintre cele $N$ date, fără spații între cifrele numărului;
* pentru $P = 2$: un număr reprezentând poziția cerută.

# Restricții și precizări

* $M, N$ numere naturale, $1 \leq N \leq 500 \ 000$, $1 \leq M \leq 1 \ 000$, $M < N$
* Cele $N$ valori de pe linia a treia sunt numere naturale între $0$ și $9$
* Secvența de $N$ cifre poate să înceapă cu cel mult $M-1$ cifre nule.
* $30$ de puncte se vor obține cu rezolvarea cerinței $1$, iar $60$ de puncte se vor obține cu rezolvarea cerinței $2$.
* Se acordă $10$p din oficiu, cu condiția ca programul să compileze și execuția lui să se termine normal, în timpul alocat.
* Pentru $50$% dintre teste, $N < 1000$ și $M < 10$.

# Exemplul 1

`maxim.in`
```
1
10 3
7 2 8 1 0 0 4 7 8 1
```

`maxim.out`
```
872
```

## Explicație

Se rezolvă cerința $1$. Cu primele $3$ cifre dintre cele $10$ cifre date se pot forma numerele: $728, 782, 287, 278, 827, 872$, cel mai mare fiind $872$

# Exemplul 2


`maxim.in`
```
2
10 3
7 2 8 1 0 0 4 7 8 1
```

`maxim.out`
```
7
```

## Explicație

Se rezolvă cerința $2$. Alegând cifrele începând de la poziția a $7$-a (cifrele $4, 7$ și $8$), se va forma numărul $874$, care este cel mai mare posibil.

# Exemplul 3

`maxim.in`
```
2
10 2
0 7 2 8 4 8 7 1 7 8
```

`maxim.out`
```
9
```

## Explicație

Se rezolvă cerința $2$. Alegând cifrele începând de la poziția a $6$-a (cifrele $8$ și $7$) sau cifrele începând cu poziția a $9$-a ($7$ și $8$) va forma numărul $87$ care este cel mai mare număr de două cifre consecutive. Dar, eliminând cifrele de pe pozițiile $6$ și $7$, secvența rămasă este $07284178$ (cu valoarea $7284178$), pe când eliminând cifrele de pe pozițiile $9$ și $10$ numărul rămas este $7284871$ care este mai mare.

# Exemplul 4


`maxim.in`
```
2
10 2
5 9 6 9 6 8 2 6 6 8
```

`maxim.out`
```
4
```

## Explicație

Se rezolvă cerința $2$. Alegând cifrele de pe pozițiile $2,3$ sau $3,4$ sau $4,5$ se va forma numărul $96$ care este cel mai mare număr de două cifre consecutive posibil. Dar, eliminând cifrele de pe pozițiile $2$ și $3$, numărul rămas este $59682668$, eliminând cifrele de pe pozițiile $3$ și $4$ numărul rămas este $59682668$, eliminând cifrele de pe pozițiile $4$ și $5$ numărul rămas este $59682668$. Se poate afișa poziția $2$ sau $3$ sau $4$, dar se va alege poziția maximă, $4$.
