Pentru temă, Alina trebuia să-și verifice cunoștințele legate de numere prime. Alina va citi o valoare $N$ care semnifică numărul numerelor naturale ce vor fi prelucrate și o valoare $C$ care poate fi $1$ sau $2$. În continuare va citi cele $N$ numere naturale. Fiecare număr natural $A$, citit, va fi prelucrat astfel:

* dacă $A$ este număr prim, el va fi afișat nemodificat;
* dacă $A$ nu este prim, se va determina cel mai apropiat număr prim care va fi afișat. Considerăm cel mai apropiat număr de valoarea $A$, cel pentru care modulul diferenței dintre număr și valoarea $A$ este cel mai mic. Fie $X$ cel mai mare număr prim mai mic decât $A$, și $Y$ cel mai mic număr prim mai mare decât $A$. Dacă cele două numere sunt la fel de "apropiate" de $A$ atunci se va afișa $X$ dacă $C=1$ și $Y$, dacă $C=2$.

# Cerință

Afișați valorile prelucrărilor fiecărui număr $A$.

# Date de intrare

Fișierul de intrare `prime.in` conține pe prima linie două numere, $N$ reprezentând numărul de numere ce se vor citi și $C$, valoarea ce va decide dacă se afișează valoarea primă cea mai apropiată mai mică, respectiv mai mare decât valoarea corespunzătoare. Pe linia a doua sunt $N$ numere separate prin spațiu, fiecare notat cu $A$; numerele naturale ce vor fi prelucrate.

# Date de ieșire

În fișierul de ieșire `prime.out` se vor scrie pe o singură linie cele $N$ numere naturale, separate prin spațiu reprezentând numerele prime "apropiate" de cele inițiale.

# Restricții și precizări

* $0 \leq N \leq 100 \ 000$;
* $1 < A \leq 4 \ 000 \ 000$;
* $1 \leq C \leq 2$.

# Exemplul 1

`prime.in`
```
15 1
3 6 8 2 3 5 7 9 2 5 3 7 11 22 21
```

`prime.out`
```
3 5 7 2 3 5 7 7 2 5 3 7 11 23 19
```

# Exemplul 2


`prime.in`
```
13 2
3 6 7 11 21 9 5 7 14 29 24 25 16
```

`prime.out`
```
3 7 7 11 23 11 5 7 13 29 23 23 17
```

