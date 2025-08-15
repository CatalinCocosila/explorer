Ionică are la dispoziție $n$ creioane identice, numerotate cu $1$, $2$, $...$, $n$. Într-un moment de relaxare începe să așeze pe masă creioanele, unele peste altele astfel încât poate așeza un creion direct pe masă sau pe minim două creioane aflate la aceeași înălțime. Toate creioanele care nu sunt așezate direct pe masă, sunt paralele cu suprafața mesei. În felul acesta se creează pe masă mai multe grămezi, fiecare cu o anumită înălțime (numărul de niveluri de creioane).

# Cerință

Să se determine înălțimea celei mai înalte grămezi.

# Date de intrare

Fișierul de intrare `creioane.in` conține
* pe prima linie un număr natural $n$ reprezentând numărul de creioane.
* pe fiecare dintre următoarele $n$ linii se află câte două numere separate printr-un spațiu; astfel pe linia $i + 1$ se află numerele $a_i$ și $b_i \ (0 \lt i \lt n + 1)$ cu semnificația că $a_i$ și $b_i$ reprezintă două dintre creioanele pe care se află creionul $i$. În cazul în care creionul $i$ este așezat direct pe masă, $a_i$ și $b_i$ sunt amândouă egale cu $0$.

# Date de ieșire

Fișierul de ieșire `creioane.out` va conține pe prima linie numărul cerut.

# Restricții și precizări

* $1 \lt n \leq 9 \ 000$
* Orice creion care se află așezat direct pe masă și peste care nu se află așezat nici un alt creion, formează o grămadă de înălțime $1$.

# Exemplu

`creioane.in`
```
7
2 7
0 0
0 0
2 7
4 6
2 7
0 0
```

`creioane.out`
```
3
```

## Explicație

Pe masă se așază creioanele $2$, $3$ și $7$. Peste creioanele $2$ și $7$ se așează creioanele $1$, $4$ și $6$, iar peste creioanele $4$ și $6$ se așază creionul $5$. Cea mai înaltă grămadă are înălțimea $3$, pentru că:
pe nivelul $1$ se află creioanele $2$, $3$ și $7$
pe nivelul $2$ se află creioanele $1$, $4$ și $6$
pe nivelul $3$ se află creionul $5$
