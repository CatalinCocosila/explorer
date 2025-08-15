Se presupune că unele dintre primele instrumente de calcul au fost beţişoarele de socotit. În problema noastră vom considera un număr ca fiind o succesiune de unul sau mai multe beţişoare, un beţişor fiind reprezentat de litera `I`. Într-o expresie, între oricare două numere există semnul `+` (adunare) sau semnul `*` (înmulţire).
Exemple:
~[betisoare.png|align=center]

# Cerinţă

Scrieţi un program care evaluează astfel de expresii.

# Date de intrare

Fişierul de intrare `betisoare.in` conţine pe prima linie o valoare naturală $n$, care indică numărul de expresii care trebuie evaluate. Fiecare dintre următoarele $n$ linii conţine un şir de maximum $1 \ 000 \ 000$ caractere care reprezintă expresia ce trebuie evaluată.

# Date de ieşire

Fişierul de ieşire `betisoare.out` va conţine pe fiecare linie $i$ dintre primele $n$ linii câte un număr întreg care reprezintă rezultatul evaluării expresiei de pe linia $i + 1$ din fişierul de intrare.

# Restricţii şi precizări

* $1 \leq n \leq 10$
* O expresie poate avea cel puţin $1$ caracter şi cel mult $1 \ 000 \ 000$ de caractere.
* Valorile calculate pe parcurs şi valoarea finală au maximum $18$ cifre.
* Dintre teste, $26\%$ conţin numai operaţii de adunare, $22\%$ numai operaţii de înmulţire, iar restul de $52\%$ conţin ambele operaţii.

# Exemplul 1

`betisoare.in`
```
1
I+I*III+IIIIIII
```

`betisoare.out`
```
11
```

## Explicaţie

$1 + 1 \cdot 3 + 7 = 11$

# Exemplul 2

`betisoare.in`
```
2
IIII
I+I
```

`betisoare.out`
```
4
2
```

## Explicaţie

$4 = 4$
$1 + 1 = 2$

# Exemplul 3

`betisoare.in`
```
3
I+I+I+I+I+I+I+I+I
I*I*I*I*I*I*I
IIII*IIII+I
```

`betisoare.out`
```
9
1
17
```

## Explicaţie

$1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 = 9$
$1 \cdot 1 \cdot 1 \cdot 1 \cdot 1 \cdot 1 \cdot 1 = 7$
$4 \cdot 4 + 1 = 17$
