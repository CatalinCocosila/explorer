Richard a pregătit un truc magic pentru a o impresiona pe Dara. Pentru a pune acest truc magic în practică Richard a cumpărat un pachet de $N$ cărți pe spatele cărora este scris câte un număr natural nenul. 

Totuși Richard consideră că pachetul de cărți nu este suficient de bun pentru trucul lui magic. El se decide să aleagă un set, de cel puțin două cărți, din pachetul cumpărat astfel încât acesta să aibă *coeficientul magic* cât mai mare. 

*Coeficientul magic* al unui set de cărți reprezintă produsul dintre suma numerelor scrise pe cărțile respective și cel mai mare divizor comun al acestor numere. De exemplu, pentru setul de cărți care au inscripționate numerele $\{2, \ 3, \ 6, \ 7,\ 8\}$ *coeficientul magic* maxim este $32$ și se obține pentru setul de cărți având numerele $\{2, 6, 8\}$ (Vezi exemplul $2$).

# Cerințe

Fiind date numerele scrise pe cele $N$ cărți din pachet, să se determine:
1. *coeficientul magic* al întregului pachet de cărți;
2. *coeficientul magic* maxim, alegând din pachet un set de cel puțin două cărți.

# Date de intrare
Fișierul de intrare `magictrick.in`, va conține pe prima linie numerele naturale $C$ și $N$, unde $C$ reprezintă cerința care trebuie rezolvată ($1$ sau $2$), iar $N$ reprezintă numărul de cărți cumpărate de Richard. Pe următoarea linie fișierul conține $N$ valori, reprezentând numerele ce sunt scrise pe spatele fiecărei cărți. Numerele care se găsesc pe aceeași linie a fișierului sunt separate prin câte un spațiu.

# Date de ieșire
Fișierul de ieșire `magictrick.out` conține fie doar răspunsul pentru cerința $1$ (dacă $C=1$), fie doar răspunsul pentru cerința $2$ (dacă $C=2$).

# Restricții și precizări
* $C \in \{1, 2\}$;
* $2 \leq N \leq 100 \ 000$;
* numerele scrise pe cele $N$ cărți au valori cuprinse între $[1, 500 \ 000]$.

|# | Punctaj | Restricții|
| - | - | ------------|
| 1 | 20| $C = 1$ |
| 2 | 9 |$C=2$, $N \leq 1 \ 000$, iar fiecare număr scris pe cele $N$ cărți este cuprins între [$1$, $6$]|
| 3 | 11|$C=2$, $N \leq 1 \ 000$, iar fiecare număr scris pe cele $N$ cărți este cuprins între [$1, 1 \ 000$]|
| 4 | 13|$C=2$, iar numerele scrise pe cele $N$ cărți sunt puteri ale aceluiași număr din intervalul $[2, 6]$|
| 5 | 47|fără restricții suplimentare.|

# Exemplul 1

`magictrick.in`
```
1 5
1 2 3 4 5
```

`magictrick.out`
```
15
```

## Explicație

*Coeficientul magic* al pachetului este: $(1 + 2 + 3 + 4 + 5) \cdot {cmmdc}(1, 2, 3, 4, 5) = 15 \cdot 1 = 15$

# Exemplul 2

`magictrick.in`
```
2 5
2 3 6 7 8
```

`magictrick.out`
```
32
```

## Explicație

*Coeficientul magic maxim* este: ${cmmdc}(2, 6, 8) \cdot (2 + 6 + 8) = 2 \cdot 16 = 32$
