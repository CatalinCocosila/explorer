Se consideră răsturnatul unui număr natural valoarea obținută prin parcurgerea cifrelor acestuia de la dreapta la stânga. De exemplu, răsturnatul numărului $245$ este $542$. Un număr este palindrom dacă este egal cu răsturnatul său. De exemplu $121$ este palindrom, iar numărul $21$ nu este palindrom.

Se consideră **inițial șirul** numerelor naturale $0, 1, 2, 3, 4, \dots$

Din acest șir se elimină numerele divizibile cu $10$ și, după fiecare număr care **NU** este palindrom, se inserează răsturnatul său. **Noul șir** astfel obținut va fi $1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 21, 13, 31, \dots$

# Cerință

Scrieți un program care să citească:

1. un număr natural $n$ și să afișeze al $n$-lea număr eliminat din șirul inițial;
2. un număr natural $x$ și să afișeze următoarele trei numere: $n_1$ – numărul de apariții în noul șir ale numărului obținut din $x$ prin eliminarea ultimei sale cifre; $n_2$ – numărul de apariții în noul șir ale numărului obținut din $x$ prin eliminarea ultimelor sale două cifre; $n_3$ – numărul de apariții în noul șir ale numărului obținut din $x$ prin eliminarea ultimelor sale trei cifre.
3. un număr natural $k$ și să afișeze numărul valorilor de $k$ cifre din noul șir.

# Date de intrare

Fișierul de intrare `numere.in` conține pe prima linie un număr natural $C$, care poate fi $1, 2$ sau $3$.
Pe linia a doua se găsește numărul natural $n$, dacă $C=1$, sau numărul natural $x$, dacă $C=2$ sau numărul natural $k$, dacă $C=3$, numerele având semnificația din enunț.

# Date de ieșire

Dacă valoarea lui $C$ este $1$, se va rezolva numai cerința $1$. În acest caz, în fișierul de ieșire `numere.out` se va scrie al $n$-lea număr eliminat.
Dacă valoarea lui $C$ este $2$, se va rezolva numai cerința $2$. În acest caz, în fișierul de ieșire `numere.out` se vor scrie trei numere, $n_1, n_2, n_3$, cu semnificația din enunț, în această ordine, separate prin câte spațiu.
Dacă valoarea lui $C$ este $3$, se va rezolva numai cerința $3$. În acest caz, fișierul de ieșire `numere.out` va conține numărul valorilor de $k$ cifre din noul șir.

# Restricții și precizări

* $1 \leq n \leq 2 \ 000 \ 000 \ 000$;
* $1 \ 000 \leq x \leq 2 \ 000 \ 000 \ 000$;
* $1 \leq k \leq 50$; ( $1 \leq k \leq 18$ , pentru teste în valoare de $20$ de puncte)
* Pentru rezolvarea corectă a primei cerințe se acordă $10$ puncte, pentru rezolvarea corectă a celei de a doua cerințe se acordă $25$ de puncte, iar pentru rezolvarea corectă a celei de a treia cerințe se acordă $55$ de puncte.

# Exemplul 1

`numere.in`
```
1
2
```

`numere.out`
```
10
```

## Explicație

$n=2$ și al doilea număr eliminat este $10$. ($C$ fiind $1$ se rezolvă numai cerința $1$)

# Exemplul 2


`numere.in`
```
2
1205
```

`numere.out`
```
0 2 1
```

## Explicație

$x=1205$, numărul $120$ nu apare în șir, deci $n_1=0$.

$12$ apare de două ori, deci $n_2=2$.

$1$ apare o singură dată, deci $n_3=1$ ($C$ fiind $2$ se rezolvă numai cerința $2$).

# Exemplul 3


`numere.in`
```
3
2
```

`numere.out`
```
153
```

## Explicație

$k=2$ și în noul șir sunt $153$ de numere de câte $2$ cifre. ($C$ fiind $3$ se rezolvă numai cerința $3$)

