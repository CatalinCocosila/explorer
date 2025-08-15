Lizuca are $n$ flori ornamentale de înălțimi $h_1, h_2, \dots, h_n$, exprimate în centimetri. Pentru a uda plantele, Lizuca stabilește următorul program: în prima zi va alege o plantă pe care o va uda, în a doua zi va alege două plante pe care le va uda, în ziua a treia va alege trei plante pe care le va uda și așa mai departe. Dacă o plantă este udată într-o anumită zi, atunci crește $1$ centimetru până la sfârșitul acelei zile, iar dacă nu este udată, rămâne la înălțimea pe care o avea la sfârșitul zilei precedente.

# Cerință

Scrieți un program care determină:
1. un număr natural $S$, exprimat în centimetri, reprezentând suma înălțimilor finale ale tuturor plantelor, dacă Lizuca le-ar uda după procedeul descris, timp de n zile;
2. un număr natural $K$, reprezentând numărul maxim de zile în care Lizuca poate uda florile după procedeul descris anterior, astfel ca la sfârșitul celei de a $K$-a zi, nici o plantă ornamentală să nu atingă înălțimea $H$.

# Date de intrare

Prima linie a fișierului `flori.in` conține două numere naturale $n$ și $H$, separate printr-un spațiu, având semnificația din enunț.
Linia a doua conține $n$ numere naturale: $h_1, h_2, \dots, h_n$ separate prin câte un singur spațiu, reprezentând înălțimile inițiale ale plantelor.

# Date de ieșire

Fișierul `flori.out` va conține pe prima linie un număr natural $S$ având semnificația descrisă în cerința $1$. A doua linie va conține un număr natural $K$, având semnificația descrisă în cerința $2$.

# Restricții și precizări

* $1 \leq N, H \leq 100$;
* $1 \leq h_1, h_2, \dots, h_n < H$;
* O plantă poate fi udată o singură dată pe zi.
* Pentru rezolvarea corectă a cerinței $1$ se acordă $30\%$ din punctajul total pentru fiecare test.
* Pentru rezolvarea corectă a cerinței $2$ se acordă $70\%$ din punctajul total pentru fiecare test.

# Exemplul 1

`flori.in`
```
3 4
2 1 1
```

`flori.out`
```
10
2
```

## Explicație

Dacă în prima zi se udă planta $3$, atunci înălțimile devin: $2 \ 1 \ 2$;
Dacă în a doua zi se udă plantele $1$ și $2$, atunci înălțimile devin: $3 \ 2 \ 2$;
Procedeul se oprește aici, deoarece în ziua a treia, ar trebui să se ude toate plantele, iar planta $1$ ar ajunge să aibă înălțimea $4$

# Exemplul 2


`flori.in`
```
4 5
1 3 2 1
```

`flori.out`
```
17
3
```

## Explicație

Dacă în prima zi se udă planta $1$, atunci înălțimile devin: $2 \ 3 \ 2 \ 1$.
Dacă în a doua zi se udă plantele $1$ și $4$, atunci înălțimile devin: $3 \ 3 \ 2 \ 2$.
Dacă în a treia zi se udă plantele $1, 3$ și $4$, atunci înălțimile devin: $4 \ 3 \ 3 \ 3$.

