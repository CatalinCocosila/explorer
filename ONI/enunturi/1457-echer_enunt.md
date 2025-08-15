Oli are un echer de forma unui triunghi dreptunghic, cu catetele de lungimi $L1$ și $L2$ unități, și o foaie de caiet de matematică cu $M$ rânduri și $N$ coloane de pătrățele având latura de o unitate.
~[echer1.png|align=right]
Oli a poziționat echerul în colțul din stânga sus al foii de hârtie, ca în imaginea din dreapta și vrea să îl mute astfel încât să atingă colțul din dreapta jos al foii de hârtie cu oricare din colțurile echerului, utilizând doar mutări de forma:
~[echer2.png|align=center]

# Cerință

Scrieţi un program care citeşte lungimile catetelor echerului, numărul de rânduri, respectiv numărul de coloane ale foii de hârtie și determină:

1. numărul minim de mutări $K$, prin care poate muta echerul din colțul din stânga sus al foii de matematică, astfel încât echerul să atingă colțul din dreapta jos al foii
2. cele $K$ mutări efectuate pentru a deplasa echerul din colțul din stânga sus al foii, până când un colț al echerului atinge colțul din dreapta jos al foii; dacă există mai multe soluții, se va afișa soluția minimă în sens lexicografic. Un șir de mutări $X = (X_1, X_2, ..., X_K)$ este mai mic în sens lexicografic decât alt șir de mutări $Y = (Y_1, Y_2, ..., Y_K)$ dacă $\exists P (1 \leq P \leq K)$ a.î. $X_I = Y_I, \forall I \in \{1, 2, ..., P - 1\}$ și $X_P < Y_P$. De exemplu șirul de mutări $1, 2, 3, 1$ este mai mic în sens lexicografic decât șirul de mutări $1, 2, 4, 1$.

# Date de intrare

Fişierul de intrare `echer.in` conţine pe prima linie una dintre valorile $1$ sau $2$, reprezentând cerinţa $1$ dacă se cere determinarea numărului minim de mutări prin care poate muta echerul din colțul din stânga sus al foii de matematică astfel încât să atingă colțul din dreapta jos al foii, respectiv cerinţa $2$, dacă se cere determinarea mutărilor efectuate pentru a deplasa echerul din colțul din stânga sus al foii până când un colț al echerului atinge colțul din dreapta jos al foii.
A doua linie a fișierului conține patru numere naturale, separate prin câte un spațiu, reprezentând valorile $L1, L2, M$ și $N$, în această ordine.

# Date de ieşire

Fişierul de ieşire `echer.out` va conţine pe prima linie un număr natural $K$ reprezentând numărul minim de mutări dacă cerința a fost $1$, respectiv $K$ numere naturale separate prin câte un spațiu reprezentând mutările efectuate pentru a deplasa echerul din colțul din stânga sus al foii de matematică până când un colț al echerului atinge colțul din dreapta jos al foii, dacă cerința a fost $2$.

# Restricţii şi precizări

* $1 \leq L1, L2 \leq 1 \ 000$.
* $1 \leq M, N \leq 1 \ 000 \ 000$.
* Se garantează că există soluție pentru orice set de date de intrare.
* Pentru rezolvarea corectă a cerinţei $1$ se obţine $30\%$ din punctaj.
* Pentru rezolvarea corectă a cerinţei $2$ se obţine $70\%$ din punctaj.

# Exemplul 1

`echer.in`
```
1
2 3 8 9
```

`echer.out`
```
8
```

## Explicaţie

Sunt necesare $8$ mutări, ca în imaginea de mai jos.
~[echer3.png|align=center]

# Exemplul 2

`echer.in`
```
2
2 3 8 9
```

`echer.out`
```
1 2 3 1 2 3 1 4
```

## Explicaţie

Mutările sunt cele ilustrate în imaginea de mai sus.
