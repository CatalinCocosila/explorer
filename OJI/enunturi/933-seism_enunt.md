Cercetătorii de la NASA au instalat pe Marte un seismograf cu ajutorul căruia s-au înregistrat mișcările la nivelul solului planetei. Seismograful a trimis în fiecare din cele $N$ secunde ce definesc perioada de timp analizată, câte un semnal pe Pământ ce a fost codificat de cercetători cu valoarea $1$, dacă seismograful a detectat mișcare și $0$, în cazul în care nu s-a înregistrat mișcare la nivelul solului planetei. Astfel, un seism de pe Marte a fost definit de cercetători ca fiind o perioadă continuă de timp în care seismograful a trimis, din secundă în secundă, câte un semnal codificat cu $1$ și care începe după cel puțin două semnale codificate cu $0$, iar la sfârșitul ei sunt înregistrate cel puțin două semnale codificate cu $0$.

# Cerință

Cunoscând șirul celor $N$ valori transmise în ordine de seismograf, scrieți un program care să determine:

1. Care a fost durata maximă, exprimată în secunde a unui seism;
2. Câte seisme au avut loc în perioada de timp analizată;
3. Din cauza unei erori tehnice, o perioadă continuă de timp seismograful a transmis eronat. Astfel, în șirul inițial format din cele $N$ semnale, trebuie să înlocuim valoarea $0$ cu valoarea $1$, într-o singură secvență, de lungime nevidă, de elemente nule alăturate. Analizând toate posibilitățile de a face această modificare, determinați durata maximă a unui seism care se obține după modificarea șirului inițial de semnale.

# Date de intrare

Fișierul de intrare `seism.in` conține pe prima linie un număr natural $C$ care poate avea valorile $1, 2$ sau $3$ și reprezintă numărul cerinței.

Pe cea de-a doua linie, un număr natural $N$ având semnificația din enunț.

Pe următoarea linie, $N$ numere naturale despărțite prin câte un spațiu, reprezentând codificarea semnalului transmis de seismograf, din secundă în secundă, începând cu secunda $1$ și până la secunda $N$.

# Date de ieșire

Fișierul de ieșire `seism.out` va conține pe prima linie un singur număr natural reprezentând rezultatul determinat conform cerinței.

# Restricții și precizări

* $5 \leq N \leq 100 \ 000$;
* Un seism durează între $1$ și $N - 4$ secunde
* Pentru cerințele $1$ și $2$ se garantează că seismograful a detectat cel puțin un seism.
* La cerința $3$ se garantează că există cel puțin o secvență nevidă de elemente egale cu $0$ ce pot fi schimbate în $1$ pentru a avea cel puțin un seism în tot șirul.
* Pentru rezolvarea corectă a primei cerințe se obțin $40$ de puncte, pentru rezolvarea corectă a celei de a doua cerințe se obțin $40$ de puncte, iar pentru rezolvarea corectă a celei de a treia cerințe se obțin $20$ de puncte.

# Exemplul 1

`seism.in`
```
1
21
0 0 1 1 1 1 0 0 0 0 0 1 0 1 0 0 1 1 0 0 1
```

`seism.out`
```
4
```

## Explicație

Durata maximă a unui seism este de $4$ secunde.

# Exemplul 2


`seism.in`
```
2
21
0 0 1 1 1 1 0 0 1 0 0 1 0 1 0 0 1 1 0 0 1
```

`seism.out`
```
3
```

## Explicație

Seismograful a înregistrat $3$ seisme. Primul seism are durata de $4$ secunde, al doilea are durata de $1$ secundă și ultimul are durata de $2$ secunde.

# Exemplul 3


`seism.in`
```
3
8
0 0 1 1 0 1 0 0
```

`seism.out`
```
4
```

## Explicație

Elementul din șir de pe poziția $5$ se schimbă în $1$ și se obține un seism de durată $4$ secunde.

# Exemplul 4


`seism.in`
```
3
14
0 1 1 0 0 0 0 0 0 0 0 0 1 0
```

`seism.out`
```
5
```

## Explicație

Se schimbă în $1$ semnalele asociate secundelor $6, 7, 8, 9$ și $10$ și se obține un seism de durată $5$ secunde.

