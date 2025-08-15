Primarul orașului $X$ dorește să aibă un iluminat public modern. Pentru aceasta, realizează o schiță sub forma unui pătrat cu $n$ linii și $n$ coloane în care fiecare element situat la intersecția unei linii cu o coloană reprezintă un cartier.

Primarul a calculat pentru fiecare cartier care este numărul de stâlpi de iluminat public din acel cartier. Fiecare stâlp are un singur bec care inițial este aprins. Acesta a observat un lucru interesant: toate cartierele au un număr diferit de stâlpi de iluminare, iar valoarea maximă a numărului de stâlpi dintr-un cartier este $n^2$.

Pentru a fi realizată într-un mod cât mai eficient, stingerea becurilor se realizează în următorul mod:

* în prima etapă se sting becurile din cartierul cu număr maxim de stâlpi de iluminat, ceea ce duce la stingerea becurilor din cartierele de pe aceeași linie precum și din cele pe aceeași coloană cu cartierul cu număr maxim de stâlpi.
* procedeul se reia la fiecare etapă pentru toate cartierele în care nu au fost stinse becurile, până când rămâne un singur cartier iluminat.

# Cerinta

Cunoscând numerele naturale nenule $n$ și $k$, precum și numărul de stâlpi de iluminat din fiecare cartier, să se determine:

1. Câți stâlpi de iluminat se află în cartierul cu număr maxim de stâlpi de iluminat la etapa cu numărul $k$ din procedeul de stingere a becurilor?
2. Câte becuri se sting, în total, la etapa cu numărul $k$?
3. Care este numărul maxim de becuri aprinse într-o zonă pătratică a orașului de dimensiune $k \cdot k$, înainte de a începe stingerea becurilor?

# Date de intrare

Fișierul de intrare `iluminat.in` conține pe prima linie o cifră $c$ ($1, 2$ sau $3$), reprezentând cerința cerută. Pe linia următoare se găsesc două numere naturale nenule $n$ și $k$, separate printr-un spațiu. Pe următoarele $n$ linii se află $n^2$ numere naturale distincte, câte $n$ pe fiecare linie, separate prin câte un spațiu, cu semnificația din enunț.

# Date de ieșire

În fișierul de ieșire `iluminat.out` se va afișa răspunsul în funcție de cerință:

* dacă $c = 1$ se va afișa pe prima linie un singur număr reprezentând numărul de stâlpi de iluminat din cartierul cu număr maxim de stâlpi de iluminat la etapa $k$
* dacă $c = 2$ se va afișa pe prima linie un singur număr reprezentând câte becuri se sting, în total, la etapa cu numărul $k$
* dacă $c = 3$ se va afișa numărul maxim de becuri aprinse într-o zonă pătratică de dimensiune $k \cdot k$ înainte de stingerea becurilor

# Restricții și precizări

* $c \in \{1, 2, 3\}$
* $1 \leq k < n \leq 1 \ 000$
* Numărul de becuri din fiecare cartier este mai mic sau egal cu $n^2$

|#|Punctaj|Restricții|
|-|-|--------|
|1|28|$c = 1$|
|2|28|$c = 2$|
|3|36|$c = 3$|

# Exemplul 1

`iluminat.in`
```
1
4 2
1 2 3 4
16 13 5 6
12 9 7 14
10 11 8 15
```

`iluminat.out`
```
15
```

## Explicație

Cerința este $1$. Se sting becurile din cartierul având $16$ stâlpi de iluminat, ceea ce duce la stingerea becurilor de pe stâlpii din linia $2$ și din coloana $1$. Tabloul devine:

```
0  2  3  4
0  0  0  0
0  9  7 14
0 11  8 15
```

La etapa a doua, primul cartier în care se sting becurile are $15$ stâlpi de iluminat.

# Exemplul 2


`iluminat.in`
```
2
4 2
1 2 3 4
16 13 5 6
12 9 7 14
10 11 8 15
```

`iluminat.out`
```
52
```

## Explicație

Cerința este $2$. Se sting becurile din cartierul având $16$ stâlpi de iluminat, ceea ce duce la stingerea becurilor de pe stâlpii din linia $2$ și din coloana $1$. Tabloul devine:

```
0  2  3  4
0  0  0  0
0  9  7 14
0 11  8 15
```

La etapa a doua, primul cartier în care se sting becurile are $15$ stâlpi de iluminat, ceea ce duce la stingerea becurilor din linia $4$ și din coloana $4$ din noul tablou. Acesta devine:

```
0 2 3 0
0 0 0 0
0 9 7 0
0 0 0 0
```

Numărul total de becuri stinse la etapa cu numărul $k=2$ este: $15+11+8+14+4=52$.

# Exemplul 3

`iluminat.in`
```
3
4 2
1 2 3 4
16 13 5 6
12 9 7 14
10 11 8 15
```

`iluminat.out`
```
50
```

## Explicație

Cerința este $3$. Numărul maxim de becuri aprinse într-o zonă pătratică a orașului de dimensiune $2 \cdot 2$ este $50$, în zona cu colțul stânga-sus pe linia $2$ și coloana $2$

```
16 13
12  9
```