Pe fiecare din porţile celor $n$ case dintr-un sat se scrie câte un număr, prin aplicarea unor ştampile cu numere. Exemplu: pentru a scrie numărul $3404$ se vor aplica ştampilele cu $3$ şi cu $0$, câte o dată şi cea cu $4$ de două ori.

# Cerință

Se citesc $n$ numere naturale (cele ce se scriu pe porţi) şi se cer următoarele:

1. Care este ştampila cea mai puţin folosită?
2. Care este ordinea celor $10$ ştampile (cu cele $10$ cifre), începând cu cea mai uzată şi terminând cu cea mai puţin folosită?
3. Care numere au folosit exact două ştampile?

# Date de intrare

Pe prima linie a fișierului de intrare `stampile.in` se găsește $n$, numărul de case din sat. Pe cea de-a doua linie se găsesc $n$ numere întregi, $x_i$ reprezentând numărul scris pe casa $i$.

# Date de ieșire

Pe prima linie a fișierului de ieșire `stampile.out` se va găsi un singur număr întreg, cifra cea mai puțin folosită în număr. Dacă sunt mai multe asemenea cifre, se va afișa cea mai mică cifră.
Pe cea de-a doua linie se va găsi ordinea cerută în enunț. Dacă sunt mai multe ștampile folosite de la fel de multe ori, se vor afișa mai întâi ștampilele cu cifra mai mică.
Pe cea de-a treia linie se vor afișa numerele cu exact două ștampile, în ordinea în care au apărut la intrare.

# Restricții și precizări

* $1 \leq n \leq 100 \ 000$;
* $1 \leq x_i < 10^9$;
* Testele și restricțiile au fost refăcute.

# Exemplul 1

`stampile.in`
```
7
1011 2924 3925 6748 2222 3434 9988
```

`stampile.out`
```
0
2 4 9 1 3 8 0 5 6 7 
1011 3434 9988 
```

## Explicație

Cifrele $0$, $5$, $6$, $7$ apar o singură dată, $0$ fiind cea mai mică dintre ele. Se poate observa faptul că $1011$, $3434$, $9988$ au doar două cifre diferite. 
