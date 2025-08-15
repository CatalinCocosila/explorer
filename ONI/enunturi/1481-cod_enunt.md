Ionel și Georgel sunt colegi de clasă și doresc să facă schimb de fișiere prin email. Fiecare dintre ei își arhivează fișierele cu câte o parolă. Fiecare copil își construiește parola pe baza unui șir format din $N$ numere naturale.
Numerele din șir care se folosesc efectiv pentru construirea parolelor sunt **doar** cele divizibile cu numerele din mulțimea $\{2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15\}$. Copiii numără câte din valorile din șir sunt divizibile cu fiecare din aceste numere.
Parola folosită de Ionel se obține prin însumarea numărului de valori din șir care sunt divizibile cu numerele din mulțimea $\{2, 3, 4, 5, 6, 7, 8, 9\}$. Parola folosită de Georgel se obține prin însumarea numărului de valori din șir care sunt divizibile cu numerele din mulțimea $\{10, 11, 12, 13, 14, 15\}$.

# Cerinţă

Scrieţi un program care citește șirul celor $N$ numere și determină:

1. câte numere din șir nu se vor folosi în construirea parolelor celor doi copii;
2. parola construită de Ionel;
3. parola construită de Georgel.

# Date de intrare

Fișierul de intrare `cod.in` conţine pe prima linie un număr natural $P$. Pentru toate testele de intrare, numărul $P$ poate avea doar valoarea $1$, $2$ sau $3$. Pe a doua linie numărul natural $N$, iar pe a treia linie, $N$ numere naturale separate prin câte un caracter `#`.

# Date de ieşire

Dacă valoarea lui $P$ este $1$, se va rezolva numai punctul $1$ din cerințe. În acest caz, fişierul de ieşire `cod.out` va conţine pe prima linie un număr natural nenul reprezentând câte numere din șir nu s-au folosit la construirea parolelor sau $0$ dacă nu există astfel de numere.
Dacă valoarea lui $P$ este $2$, se va rezolva numai punctul $2$ din cerințe. În acest caz, fişierul de ieşire `cod.out` va conţine pe prima linie un număr natural reprezentând parola construită de Ionel.
Dacă valoarea lui $P$ este $3$, se va rezolva numai punctul $3$ din cerințe. În acest caz, fişierul de ieşire `cod.out` va conţine pe prima linie un număr natural reprezentând parola construită de Georgel.

# Restricţii şi precizări

* $0 \lt N \leq 100 \ 000$
* $2 \leq$ numărul de cifre ale unui număr $\leq 100$
* Se garantează că toate parolele pe care copiii le vor obține sunt nenule
* În fișierul de intrare ultimul număr nu este urmat de caracterul `#`
* $16\%$ din teste conțin doar numere formate din cel mult $9$ cifre
* Pentru rezolvarea corectă a cerinţei $1$ se obțin $20$ de puncte, pentru rezolvarea corectă a cerinţei $2$ se obțin $40$ de puncte iar pentru rezolvarea corectă a cerinţei $3$ se obțin $40$ de puncte

# Exemplul 1

`cod.in`
```
1
6
10#20#12#34#15#23
```

`cod.out`
```
1
```

## Explicaţie

Doar numărul $23$ nu este divizibil cu niciun număr din mulțimea $\{2, 3, ..., 15\}$

# Exemplul 2

`cod.in`
```
2
5
16#61#12#385#31
```

`cod.out`
```
9
```

## Explicaţie

Pentru parola lui Ionel trebuie sa verificăm divizibilitatea cu numerele $2, 3, 4, 5, 6, 7, 8, 9$. Două numere sunt divizibile cu $2$ ($16$ și $12$), un număr este divizibil cu $3$ ($12$), două numere sunt divizibile cu $4$ ($16$ și $12$), un număr este divizibil cu $5$ ($385$), un număr este divizibil cu $6$ ($12$), un număr este divizibil $7$ ($385$), un număr este divizibil cu $8$ ($16$). Parola este $2 + 1 + 2 + 1 + 1 + 1 + 1 = 9$

# Exemplul 3

`cod.in`
```
3
5
30#1100#11#85#121
```

`cod.out`
```
6
```

## Explicaţie

Pentru parola lui Georgel trebuie sa verificăm divizibilitatea cu numerele $10, 11, 12, 13, 14, 15$.
Două numere sunt divizibile cu $10$ ($30$ și $1100$), trei numere sunt divizibile cu $11$ ($1100$, $11$ și $121$), și un număr este divizibil cu $15$ ($30$). Parola este $2 + 3 + 1 = 6$
