Când Andrei rămâne acasă cu bunicul lui, acesta îi aduce o cutie de jetoane din plastic, de diferite culori. Ultima dată, bunicul i-a cerut lui Andrei să aşeze jetoanele în şir, unul lângă altul, pe culori, în ordine de la culoarea din care avea cele mai multe jetoane până la culoarea din care avea cele mai puţine jetoane.
Pentru că şirul format era prea lung şi nu încăpea pe covor, bunicul l-a rugat pe Andrei să formeze un pătrat de latură maximă, luând jetoanele în ordinea în care erau dispuse şi punându-le unul lângă altul (în număr egal) pe liniile pătratului. Completarea pătratului se va face de sus în jos, în ordinea crescătoare a liniilor, iar pe fiecare linie de la stânga la dreapta, în ordinea crescătoare a coloanelor.

# Cerinţă

Cunoscând culorile jetoanelor din cutie, scrieţi un program care să determine numărul de culori existente în joc, latura maximă a pătratului pe care-l poate construi Andrei, precum şi modalitatea de aranjare a jetoanelor în pătrat.

# Date de intrare

Fişierul de intrare `joc.in` conţine pe prima linie numărul natural $N$, reprezentând numărul de jetoane din joc. Pe următoarele $N$ linii sunt descrise culorile celor $N$ jetoane din joc, câte un jeton pe o linie. Culorile sunt identificate prin cifre cuprinse între $1$ şi $9$.

# Date de ieşire

Fişierul de ieşire `joc.out` va conţine pe prima linie un număr natural $C$, reprezentând numărul de culori folosite pentru jetoanele din joc. Pe cea de-a doua linie se va scrie un număr natural $\text{MAX}$ reprezentând latura maximă a pătratului format. Pe următoarele $\text{MAX}$ linii se vor scrie câte $\text{MAX}$ cifre cuprinse între $1$ şi $9$, reprezentând culorile jetoanele aşezate în pătrat, conform restricţiilor din enunţ.

# Restricţii şi precizări

* $1 \leq N \leq 60 \ 000$
* Nu există două culori pentru care jetoanele să fie în număr egal.
* Se acordă $30\%$ din punctaj pentru determinarea corectă a numărului de culori. Se acordă $50\%$ din punctaj pentru determinarea corectă a numărului de culori, precum şi a dimensiunii maxime a laturii pătratului format. Se acordă punctajul integral pentru rezolvarea tuturor celor $3$ cerinţe.

# Exemplu

`joc.in`
```
13
8
5
8
8
8
5
8
8
5
9
8
4
9
```

`joc.out`
```
4
3
888
888
855
```

## Explicaţie

În joc sunt jetoane de $4$ culori (culorile $4$, $5$, $8$, $9$).
În ordinea specificată în enunţ, jetoanele ar putea fi aranjate în linie astfel: $8888888555994$
Cu aceste jetoane se poate construi un pătrat cu latura maximă $3$, considerând jetoanele în ordinea specificată, în modul următor:
$888$
$888$
$855$
Observaţi că rămân $4$ jetoane neutilizate (un jeton de culoare $5$, două jetoane de culoare $9$ şi un jeton de culoare $4$).
