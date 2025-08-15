Se dă un șir $a_1, a_2, \dots, a_n$  de numere naturale nenule.

# Cerință

Să se determine răspunsul pentru una dintre următoarele cerințe:

1. Cel mai mare divizor comun al celor $n$ numere.
2. Cel mai mare divizor comun care se poate obține alegând exact $n - 1$ elemente din șir.
3. Cel mai mare divizor comun care se poate obține alegând exact $n - 2$ elemente din șir.

# Date de intrare

Fișierul de intrare `cmmdc.in` conține pe prima linie un număr natural $T$ reprezentând cerința cerută ($1$, $2$ sau $3$), pe a doua linie se află numărul natural nenul $n$, iar pe următoarele $n$ linii se găsesc, câte un numărul pe fiecare linie, cele $n$ elemente ale șirului.

# Date de ieșire

În fișierul `cmmdc.out` se va afișa răspunsul pentru cerința cerută.

# Restricții și precizări

* $2 \leq a_i \leq 2^{63} - 1$ oricare $1 \leq i \leq n$ (numerele sunt de tip `long long`)

|#|Punctaj|Restricții|
|-|-|--------|
|1|16|$T = 1$, $3 \leq n \leq 100 \ 000$ și $a_i \leq 50 \ 000 \ 000$, pentru $1 \leq i \leq n$|
|2|20|$T = 1$ și $3 \leq n \leq 100 \ 000$|
|3|21|$T = 2$ și $3 \leq n \leq 3 \ 000$|
|4|21|$T = 2$ și $3 \leq n \leq 100 \ 000$|
|5|12|$T = 3$ și $3 \leq n \leq 300$|
|6|10|$T = 3$ și $3 \leq n \leq 2 \ 000$|

# Exemplul 1

`cmmdc.in`
```
1
5
48
40
20
16
80
```

`cmmdc.out`
```
4
```

## Explicație

$T = 1$, deci se cere determinarea celui mai mare divizor comun al celor cinci numere: $48$, $40$, $20$, $16$ și $80$.

Răspunul este $4$.

# Exemplul 2

`cmmdc.in`
```
2
5
48
40
20
16
80
```

`cmmdc.out`
```
8
```

## Explicație

$T = 2$, deci se rezolvă cerința $2$.

Eliminând numărul $20$, rămân $n - 1 = 4$ numere, iar $\text{cmmdc}(16, 48, 40, 80) = 8$, care este și maximul posibil.

# Exemplul 3

`cmmdc.in`
```
3
5
48
40
20
16
80
```

`cmmdc.out`
```
20
```

## Explicație

$T = 3$, deci se rezolvă cerința $3$.

Eliminând numerele $16$ și $48$ rămân $n - 2 = 3$ numere, iar $\text{cmmdc}(40, 20, 80) = 20$, care este și maximul posibil.
