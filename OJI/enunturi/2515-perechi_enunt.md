*Oglinditul* unui număr natural $x$ este numărul obținut prin parcurgerea cifrelor lui $x$ de la dreapta la stânga, ignorându-se cifrele nule de pe ultimele poziții ale lui $x$. De exemplu, oglinditul lui $103$ este $301$, în timp ce oglinditul lui $2500$ este $52$. O pereche de numere naturale distincte $x$ și $y$ se numește pereche *oglindită* dacă atât $x$ este oglinditul lui $y$, cât și $y$ este oglinditul lui $x$. De exemplu, numerele $x = 42$ și $y = 24$ formează o pereche oglindită, însă numerele $x = 1$ și $y = 100$ nu formează o pereche oglindită.

Un număr natural $x$ este considerat *palindrom* dacă $x$ este egal cu oglinditul său. De exemplu, numărul $42124$ este palindrom. Din două numere distincte se poate forma un număr nou prin alipirea unuia la dreapta celuilalt. De exemplu, din numerele $124$ și $42$ se pot obține numerele $12442$ (din alipirea lui $42$ la dreapta lui $124$) și $42124$ (din alipirea lui $124$ la dreapta lui $42$).

# Cerință

Fie un șir de numere naturale $a_1, a_2, ... , a_n$. Determinați:

1. Numărul perechilor de indici $(i, j)$, cu $1 \le i \lt j \le n$, având proprietatea că $a_i$ și $a_j$ formează o pereche oglindită.
2. Cel mai mare număr palindrom care se poate forma prin alipirea a două numere distincte din șir.

# Date de intrare

Fișierul `perechi.in` conține pe prima linie un număr natural $C$, având valoarea $1$ sau $2$, reprezentând numărul cerinței. Pe a doua linie se află numărul natural $n$. A treia linie din fișier conține șirul de numere naturale $a_1, a_2, ... , a_n$, separate prin câte un spațiu.

# Date de ieșire

Fișierul `perechi.out` va conține un singur număr, reprezentând rezultatul corespunzător pentru cerința dată.

# Restricții
* $1 \le C \le 2$
* $1 \le n \le 100 \ 000$
* $1 \le a_i \lt 10 \ 000$
* Se garantează că pentru cerința $1$ există în șirul dat cel puțin o pereche oglindită, iar la cerința $2$ există în șirul dat cel puțin un număr palindrom.

| # | Punctaj | Restricții|
| - | - | ------------|
|1|27|$C = 1$, $n \le 10 \ 000$|
|2|23|$C = 1$, $10 \ 000 \lt n \le 100 \ 000$|
|3|27|$C = 2$, $n \le 10 \ 000$|
|4|23|$C = 2$, $10 \ 000 \lt n \le 100 \ 000$|

# Exemplul 1

`perechi.in`
```
1
5
21 12 21 12 21
```

`perechi.out`
```
6
```

## Explicație

Există $6$ perechi de indici cu proprietatea că valorile corespunzătoare lor formează perechi oglindite: $(1, 2), (1, 4), (2,3),(2,5), (3,4)$ și $(4,5)$. Fiecare dintre aceste perechi oglindite este compusă din valorile $12$ și $21$.

# Exemplul 2

`perechi.in`
```
1
6
13 97 76 67 76 31
```

`perechi.out`
```
3
```

## Explicație

Există $3$ perechi de indici cu proprietatea că valorile corespunzătoare lor formează perechi oglindite: $(1, 6), (3, 4) și (4, 5)$. Aceste perechi oglindite formate sunt: ($13, 31), (76, 67),$ respectiv, $(67, 76)$.

# Exemplul 3

`perechi.in`
```
2
6
24 79 42 97 123 124
```

`perechi.out`
```
42124
```

## Explicație

Se pot forma următoarele numere palindrom: $2442, 4224, 7997, 9779$ și $42124$. Cel mai mare dintre acestea este $42124$.