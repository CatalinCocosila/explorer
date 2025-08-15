Un număr puternic este un număr natural mai mare decât $1$ care are proprietatea că dacă este divizibil cu numărul prim $p$ atunci este divizibil și cu $p^2$. De exemplu, $36$ și $27$ sunt numere puternice, în timp ce $12$ nu este număr puternic deoarece este divizibil cu $3$ și nu este divizibil cu $3^2$. La ora de matematică elevii au aflat ce înseamnă un număr puternic. Pentru a verifica dacă elevii au înțeles, domnul profesor a scris pe tablă un șir de $N$ numere naturale $X_1, X_2, \dots, X_N$ și l-a rugat pe Mihai să ștergă din șir numerele puternice.

Analizând numerele rămase, Mihai a observat că se poate obține un număr puternic prin concatenarea a două numere din șirul rămas, numere egal depărtate de capetele acestui nou șir. Concatenarea presupune lipirea numărului din a doua jumătate a șirului la finalul celui aflat în prima jumătate. Dacă noul șir are număr impar de elemente, elementul din mijloc se ignoră. De exemplu, dacă șirul obținut după ștergerea numerelor puternice este: $12$, $1$, $19$, $13$, $3$, $21$, $5$ atunci numerele obținute prin concatenare sunt $125$, $121$, $193$.

# Cerinta

Scrieți un program care citește un număr natural $N$ și apoi un șir de $N$ numere naturale și determină:
1. Câte numere puternice sunt în șirul dat;
2. Care sunt perechile de numere din șirul rămas după ștergerea numerelor puternice, numere egal departate de capetele șirului, prin concatenarea cărora se obține un număr puternic.

# Date de intrare

Fișierul de intrare `puternic.in` conține pe prima linie un număr natural $C$. Pentru toate testele de intrare, numărul $C$ poate avea doar valoarea $1$ sau $2$. Pe a doua linie a fișierului se găsește numărul natural $N$. Pe a treia linie se găsesc $N$ numere naturale separate prin câte un spațiu.

# Date de ieșire

Dacă $C = 1$, se va rezolva cerința $1$. În acest caz, fișierul de ieșire `puternic.out` va conține pe prima linie un număr natural reprezentând numărul de numere puternice din șirul dat.

Dacă $C = 2$, se va rezolva cerința $2$. În acest caz, fișierul de ieșire `puternic.out` va conține perechile de numere egal depărtate de capetele șirului obținut după ștergere, prin concatenarea cărora de obține un număr puternic. Fiecare pereche se scrie pe câte un rând, iar numerele din pereche se scriu separate printr-un spațiu, primul număr fiind cel din stânga. Dacă sunt mai multe astfel de perechi se vor afișa, în ordine, începând cu cea apropiată de capetele noului șir. Dacă nu există nicio astfel de pereche, în fișierul `puternic.out` se va afișa $-1$.

# Restricții și precizări

* $1 \leq N \leq 100 \ 000$;
* $1 \leq X_1, X_2, \dots, X_N \leq 1 \ 000 \ 000 \ 000$;
* Pentru rezolvarea corectă a primei cerințe se obțin $30$ de puncte, iar pentru rezolvarea corectă a celei de a doua cerințe se obțin $70$ de puncte.

# Exemplul 1

`puternic.in`
```
1
8
100 28 16 11 484 25 162 27
```

`puternic.out`
```
5
```

## Explicație

Se rezolva prima cerință. Numerele puternice sunt $100 \ 16 \ 484 \ 25 \ 27$.

# Exemplul 2


`puternic.in`
```
2
11
12 9 1 8 19 6 3 4 49 21 5
```

`puternic.out`
```
12 5
1 21
```

## Explicație

Se rezolvă a doua cerință și se va folosi doar valoarea $N$. După ștergerea numerelor puternice, șirul rămas este: $12 \ 1 \ 19 \ 6 \ 3 \ 21 \ 5$.

