Lui Scortzy îi plac foarte mult bilele și puterile lui $3$, astfel și-a organizat colecția de bile în cutii, după următoarea regulă: în prima cutie a pus o bilă, în a doua cutie $3$ bile, în a treia cutie $9$ bile, apoi $27, 81, 243$ …ș.a.m.d. Privind linia lungă de cutii Scortzy și-a pus întrebarea: *Ce număr de bile poate obține folosind bilele din cutii, fără a le scoate din cutie?* 
Pentru a răspunde întrebării a început să formeze numerele: $0$ (nici o cutie), $1$ (cutia $1$), $3$ (cutia $2$), $4$ (cutiile $1$ și $2$), $9$ (cutia $3$) … ș.a.m.d., obținând șirul lui Scortzy, primii termeni ai acestui șir fiind: $0, 1, 3, 4, 9, 10, 12, 13, 27, 28, 30, 31, 36, 37$.

 Plăcându-i noul șir obținut Scortzy dorește să rezolve următoarele probleme:

# Cerințe

1. Citind un număr natural $n$ determină câte cutii au mai puțin de $n$ bile în ele;
2. Citind un număr natural $n$ urmat de $n$ valori naturale $x_1, x_2, \dots, x_n$ determină câte bile sunt, în fiecare dintre cutiile utilizate, pentru a obține cel de-al $x_i$-lea număr din șirul lui Scortzy.


# Date de intrare

Pe prima linie a fișierului `puteri3.in` se află numerele naturale $c$ și $n$, separate printr-un spațiu. Dacă $c=2$ atunci pe următoarele $n$ linii se vor găsi $n$ valori naturale $x_1, x_2, \dots, x_n$, câte una pe linie, ce reprezintă pozițiile din șirul lui Scortzy.


# Date de ieșire

Dacă $c=1$ atunci fișierul `puteri3.out` va conține un singur număr care reprezintă soluția cerinței $1$, iar dacă $c=2$ atunci fișierul `puteri3.out` va conține pe fiecare din cele $n$ linii ale sale unul sau mai multe numere. Pe linia $i$ a fișierului $puteri3.out$ se vor afla unul sau mai multe numere, separate prin câte un spațiu, în ordine crescătoare, ce reprezintă numărul de bile din fiecare cutie folosită pentru a obține numărul de pe poziția $x_i$ din șirul lui Scortzy.

# Restricții și precizări
* $C \in \{1, 2\}$; 
* $1\leq x_1, x_2, \dots, x_n \leq 10^{18}$;
* Pentru $c = 1, 1 \leq n \leq 10^{18}$;
* Pentru $c = 2, 1\leq n \leq 1 \ 000$, numărul de bile dintr-o cutie nu are mai mult de $80$ cifre.
|#| Punctaj | Restricții|
| - | - | ------------|
| 1 |20 |$ c = 1 $|
| 2 |30 |$ c = 2$, $1 \leq x_1, x_2, \dots, x_n \leq 1 \ 000$ |
| 3 |35 |$ c = 2$, numărul de bile dintr-o cutie nu este mai mare decât $10^{18}$ |
| 4 |15 |$ c = 2$, fără restricții suplimentare |

# Exemplul 1

`puteri3.in`
```
1 100
```

`puteri3.out`
```
5
```

## Explicație

Cutiile cu $1$, $3$, $9$, $27$ și $81$ bile au mai puțin de $100$ de bile în ele.

# Exemplul 2

`puteri3.in`
```
2 3
4
14
9
```

`puteri3.out`
```
1 3
1 9 27
27
```

## Explicație

Primii termeni ai șirului lui Scortzy sunt: $0, 1, 3, 4, 9, 10, 12, 13, 27, 28, 30, 31, 36, 37$.
Termenul de pe poziția $4$ are valoarea $4$ și se obține din suma $1+3$.
Termenul de pe poziția $14$ are valoarea $37$ și se obține din suma $1+9+27$.
Termenul de pe poziția $9$ are valoarea $27$ și se obține folosind cutia ce conține $27$ bile.