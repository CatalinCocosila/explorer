Rareș a primit în dar o carte în care paginile sunt amestecate. Se hotărăște totuși să o citească, **răsfoind cartea într-un singur sens, de la prima pagină către ultima**, în ordinea așezării lor în carte, respectând următorul algoritm:

> Caută la început pagina numerotată cu $x=1$.
> După ce a citit o pagină cu numărul $x$ caută printre paginile următoare acestei pagini, răsfoind cartea, pagina cu numărul $x+1$, fără a căuta printre paginile așezate înaintea paginii cu numărul $x$. Dacă o găsește atunci va continua lectura în același mod, iar dacă nu o găsește atunci va închide cartea și, în ziua următoare, va relua lectura de la pagina cu numărul $x+1$, pe care mai întâi o va căută răsfoind cartea de la început.
> Rareș va proceda la fel și în zilele următoare până când va citi întreaga carte.

# Cerință

Scrieți un program care citește un număr natural $n$, reprezentând numărul paginilor din carte și $n$ numere naturale distincte $x_1$, $x_2$, $\dots$, $x_n$, reprezentând ordinea în care sunt așezate cele $n$ pagini în carte, și care determină:
1. numărul zilelor în care Rareș citește cartea;
2. prima zi în care Rareș a citit cele mai multe pagini și numărul paginilor citite în acea zi.

# Date de intrare

Fișierul de intrare `carte.in` conține pe prima linie numărul $n$ al paginilor din carte iar pe linia următoare $n$ numere întregi distincte $x_1$, $x_2$, $\dots$, $x_n$, separate prin câte un spațiu, reprezentând ordinea în care sunt așezate paginile în carte.

# Date de ieșire

Fișierul de ieșire `carte.out` va conține pe prima linie, separate prin câte un spațiu, trei numere, reprezentând, în ordine:

* numărul zilelor în care Rareș citește cartea;
* numărul primei zile în care Rareș a citit cele mai multe pagini;
* numărul maxim de pagini citite într-o zi.

# Restricții și precizări

* $1 \leq n \leq 10 \ 000$;
* paginile cărții sunt numerotate cu numere naturale distincte de la $1$ la $n$;
* citirea cărții presupune citirea fiecărei pagini din carte, o singură dată;
* zilele în care Rareș citește cartea sunt numerotate consecutiv, începând cu numărul $1$;
* pentru rezolvarea corectă a subpunctului 1 se acordă $40\%$ din punctaj și pentru fiecare cerință a subpunctului 2 câte $30\%$ din punctaj.

# Exemplu

`carte.in`
```
9
7 1 3 6 8 2 4 9 5
```

`carte.out`
```
4 2 3
```

## Explicație

- în prima zi citește paginile $1,2$;
- în a doua zi citește paginile $3,4,5$;
- în a treia zi citește pagina $6$;
- în a patra zi citește paginile $7,8,9$.

A terminat de citit cartea în $4$ zile iar ziua $2$ este prima zi în care a citit cele mai multe pagini ($3$).