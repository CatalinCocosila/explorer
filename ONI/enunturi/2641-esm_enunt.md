Spunem că o secvență de numere $(a_i, a_{i+1}, \dots, a_j)$ este **esm** dacă:

* are cel puțin $3$ elemente
* există cel puțin două numere $a_x$ și $a_y$ în acea secvență, cu $i \leq x < y < j$, astfel încât $a_x \cdot a_y = a_j$

De exemplu, secvența $(54, 7, 22, 6, 9, 42)$ este **esm** deoarece $7 \cdot 6 = 42$.

# Cerință

Se dă un șir $a_1, a_2, \dots, a_n$ de numere naturale. Să se determine:

1. Numărul de secvențe **esm** din șir de lungime $3$.
2. Numărul de secvențe **esm** din șir care se termină cu $a_n$.
3. Numărul de secvențe **esm** din șir.

# Date de intrare

Fișierul de intrare `esm.in` conține pe prima linie un număr natural $C$, pe a doua linie numărul natural $n$, iar pe a treia linie, separate prin câte un spațiu, elementele șirului $a_1, a_2, \dots, a_n$.

# Date de ieșire

Fișierul de ieșire `esm.out` va conține un singur număr natural $X$:

* Dacă $C = 1$, atunci $X$ va fi numărul de secvențe **esm** din șir de lungime $3$.
* Dacă $C = 2$, atunci $X$ va fi numărul de secvențe **esm** din șir care se termină cu $a_n$.
* Dacă $C = 3$, atunci $X$ va fi numărul de secvențe **esm** din șir.

# Restricții și precizări

* $C \in \{1, 2, 3 \}$
* $3 \leq n \leq 100 \ 000$
* $1 \leq a_i \leq 100 \ 000$, $\forall i \in \{1, 2, \dots, n \}$
* Lungimea unei secvențe este egală cu numărul de elemente din secvență

|#|Punctaj|Restrictii|
|-|-|--------|
|1|30|$C = 1$|
|2|30|$C = 2$|
|3|40|$C = 3$|


# Exemplul 1

`esm.in`
```
1
8
2 3 6 18 1 18 3 5
```

`esm.out`
```
3
```

## Explicație

Secvențele **esm** din șir de lungime $3$ sunt:

* $(2, 3, 6)$;
* $(3, 6, 18)$;
* $(18, 1, 18)$.


# Exemplul 2

`esm.in`
```
2
8
5 8 20 2 4 7 5 40
```

`esm.out`
```
3
```

## Explicație

Secvențele **esm** din șir care se termină cu $40$ sunt:

* $(5, 8, 20, 2, 4, 7, 5, 40)$;
* $(8, 20, 2, 4, 7, 5, 40)$;
* $(20, 2, 4, 7, 5, 40)$.

# Exemplul 3


`esm.in`
```
3
8
2 2 4 8 1 8 16 7
```

`esm.out`
```
9
```

## Explicație

Secvențele **esm** din șir sunt:

* $(2, 2, 4)$;
* $(2, 2, 4, 8)$;
* $(2, 4, 8)$;
* $(2, 2, 4, 8, 1, 8)$;
* $(2, 4, 8, 1, 8)$;
* $(4, 8, 1, 8)$;
* $(8, 1, 8)$;
* $(2, 2, 4, 8, 1, 8, 16)$;
* $(2, 4, 8, 1, 8, 16)$.


