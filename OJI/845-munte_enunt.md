Se consideră un șir $x_1, x_2, \dots, x_n$ format din $n$ numere naturale distincte. O secvență de număr maxim de elemente vecine în șir, de forma $x_i, x_{i+1}, \dots, x_{k-1}, x_k, x_{k+1}, \dots, x_j$ ($1 \leq i < k < j \leq n$) cu proprietatea că $x_i < x_{i+1} < \dots < x_{k-1} < x_k > x_{k+1} > \dots > x_j$, se numește *munte* cu vârful $x_k$. Două secvențe munte au maxim un element comun în șir. O secvență munte are cel puțin $3$ elemente. Un exemplu de șir format cu valorile $3 \ 4 \ 6 \ 8$ nu conține nicio secvență munte, iar unul format cu valorile $3 \ 4 \ 8 \ 1 \ 2 \ 5 \ 0$ conține $2$ secvențe munte: $3 \ 4 \ 8 \ 1$ și $1 \ 2 \ 5 \ 0$.

După determinarea tuturor secvențelor munte și a vârfurilor acestora, se elimină din șir vârfurile secvențelor munte și procedura continuă repetat cu determinarea noilor secvențe munte și a vârfurilor lor din șirul nou obținut. Procedura se oprește în momentul în care în șir nu mai există nicio secvență munte.

# Cerință

Scrieți un program care citește numerele $n, x_1, x_2, \dots, x_n$ și apoi determină:

1. numărul de secvențe munte din șirul inițial;
2. numărul total de secvențe munte obținute pornind de la șirul inițial până la cel care nu mai conține nicio secvență munte;
3. numărul de elemente din șirul final care nu mai conține secvențe munte.

# Date de intrare

Fișierul de intrare `munte.in` conține pe prima linie numărul $n$, iar pe următoarea linie numerele naturale $x_1, x_2, \dots, x_n$ separate două câte două prin câte un spațiu.

# Date de ieșire

Fișierul de ieșire `munte.out` va conține pe prima linie un număr natural conform cerinței $1$, pe a doua linie un număr natural conform cerinței $2$, pe a treia linie un număr natural conform cerinței $3$.

# Restricții și precizări

* $3 \leq n \leq 100$;
* $0 \leq x_i \leq 100 \ 000$;
* Pentru rezolvarea corectă a cerinței $1$ se obține $20$% din punctaj.
* Pentru rezolvarea corectă a cerinței $2$ se obține $40$% din punctaj.
* Pentru rezolvarea corectă a cerinței $3$ se obține $40$% din punctaj.
* Pentru testele date se asigură că șirul de numere dat inițial conține cel puțin o secvență munte.

# Exemplu

`munte.in`
```
8
1 2 5 0 6 9 3 4
```

`munte.out`
```
2
4
4
```

## Explicație

1. Sunt două secvențe munte: $1 \ 2 \ 5 \ 0$ și $0 \ 6 \ 9 \ 3$
2. După eliminarea vârfurilor secvențelor munte, șirul nou este $1 \ 2 \ 0 \ 6 \ 3 \ 4$. Acest șir conține $2$ secvențe munte: $1 \ 2 \ 0$ și $0 \ 6 \ 3$. După eliminarea vârfurilor secvențelor munte, șirul nou este $1 \ 0 \ 3 \ 4$. Noul șir nu mai conține nicio secvență munte. În total sunt deci $4$ secvențe.
3. Șirul final care nu mai conține secvențe munte $1 \ 0 \ 3 \ 4$ are $4$ elemente