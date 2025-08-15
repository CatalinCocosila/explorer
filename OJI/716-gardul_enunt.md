Doi copii vopsesc un gard alcătuit din $n$ scânduri pe care le vom numerota de la $1$ la $n$ astfel: primul ia o cutie de vopsea roșie cu care vopsește scândurile cu numărul $p$, $2 \cdot p$, $3 \cdot p$, etc. Al doilea procedează la fel, începe de la același capăt al gardului, dar ia o cutie de vopsea albastră și vopsește din $q$ în $q$ scânduri. Astfel, când vor termina de vopsit, gardul va avea multe scânduri nevopsite, unele scânduri vopsite în roșu, altele în albastru, iar altele în violet (cele care au fost vopsite și cu roșu și cu albastru).

# Cerință

Cunoscând numerele $n, p$ și $q$ afișați:

1. câte scânduri rămân nevopsite
2. câte scânduri sunt vopsite în roșu
3. câte scânduri sunt vopsite în albastru
4. câte scânduri sunt vopsite în violet

# Date de intrare

De pe prima linie a fișierului de intrare `gardul.in` se citește valoarea $n$, reprezentând numărul de scânduri din gard. De pe cea de a doua linie a fișierului de intrare se citesc valorile $p$ și $q$ separate de un spațiu.

# Date de ieșire

În fișierul de ieșire `gardul.out` se vor afișa, în ordine, cele patru numere naturale cerute, câte unul pe un rând, ca în exemplu.

# Restricții și precizări

* $1 \leq n \leq 100 \ 000$;
* $1 \leq p, q \leq 40 \ 000$;

# Exemplu

`gardul.in`
```
25
4 6
```

`gardul.out`
```
17
4
2
2
```

## Explicație

Exemplul corespunde situației următoare:

|.|.|.|R|.|A|.|R|.|.|.|v|.|.|.|R|.|A|.|R|.|.|.|V|.|
|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|

`A` – albastru
`R` – roșu
`V` – violet
