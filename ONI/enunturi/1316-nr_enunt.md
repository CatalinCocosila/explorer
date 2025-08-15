Se generează un şir de numere naturale ai cărui primi termeni sunt, în această ordine:
$1$, $20$, $21$, $300$, $301$, $320$, $321$, $4000$, $4001$, $4020$, $4021$, $4300$, $401$, $4320$, $4321$, $50000$, $\dots$

# Cerinţă

Deduceţi regula după care sunt generaţi termenii şirului şi scrieţi un program care să citească numerele naturale $k$, $n$ şi $x$ şi care să determine:
1. numărul de termeni ai şirului care au prima cifră (cea mai semnificativă) egală cu $k$;
2. cel de-al $n$-lea termen al şirului din enunţ;
3. cel mai mare termen al şirului, mai mic sau egal decât $x$.

# Date de intrare

Fişierul de intrare `nr.in` conţine o singură linie pe care sunt scrise trei numere naturale $k$, $n$ şi $x$, separate prin câte un spaţiu.

# Date de ieşire

Fişierul de ieşire `nr.out` va conţine $3$ linii:

* pe prima linie se va scrie un număr natural reprezentând numărul de termeni ai şirului care au prima cifră (cea mai semnificativă) egală cu $k$;
* pe a doua linie se va scrie un număr natural reprezentând cel de-al $n$-lea termen al şirului din enunţ;
* pe a treia linie se va scrie un număr natural reprezentând cel mai mare termen al şirului, mai mic sau egal cu $x$.

# Restricţii şi precizări

* $1 \leq k \leq 9$
* $3 \leq n \leq 511$
* $1 \leq x \leq 2 \ 000 \ 000 \ 000$
* Pentru rezolvarea cerinţei 1 se acordă $30\%$ din punctaj, pentru cerinţa 2, $30\%$ din punctaj şi pentru cerinţa 3, $40\%$ din punctaj.

# Exemplu

`nr.in`
```
4 19 57890
```

`nr.out`
```
8
50021
54321
```

## Explicaţie

Pe prima linie a fişierului `nr.out` se scrie numărul $8$, deoarece sunt $8$ termeni în şir care au prima cifră egală cu $k = 4$.

Pe a doua linie a fişierului se scrie numărul $50021$, deoarece cel de-al $n$-lea ($n = 19$) termen al şirului este $50 \ 021$.

Numerele $54 \ 321$ şi $600 \ 000$ sunt doi termeni situaţi pe poziţii consecutive în şirul din enunţ, iar $54 \ 321 \leq 57 \ 890 \lt 600 \ 000$. Astfel, numărul $54 \ 321$ se scrie pe ultima linie a fişierului `nr.out`.
