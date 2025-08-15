
Se consideră șirul $A=(A_1,A_2,...,A_n)$ cu $n$ numere naturale nenule. Pe baza șirului $A$ se construiește șirul $B$, unde fiecare element $B_i$ este cel mai mic număr natural care are aceiași factori primi cu $A_i$, cu $1 \leq i \leq n$. 

Exemplu: Dacă $A_1=24$, acesta se descompune în $2^3 \cdot 3^1$ și are factorii primi $2$ și $3$. Ca urmare, $B_1=6$ ($6=2^1 \cdot 3^1$) este cel mai mic număr natural care are aceiași factori primi cu $24$. 

O secvență de cel puțin două numere aflate pe poziții consecutive în șirul $B$ este **mandatorie** dacă există un număr $x$ ( $2 \leq x \leq 9$ ) în această secvență care divide fiecare dintre elementele secvenței. Numim acest număr $x$ - **mandatar** al secvenței. Lungimea secvenței este egală cu numărul de elemente ale acesteia.

Exemplu: secvența $6$, $14$, $2$, $22$, $2$, $70$ este o secvență mandatorie pentru că toate numerele care o compun sunt divizibile cu $x=2$, număr cuprins între $2$ și $9$, ce aparține secvenței. Lungimea secvenței este $6$.

# Cerință

* Determinați cel mai mare număr prim din șirul $A$.
* Determinați cel mai mare număr al șirului $B$ ce are un număr maxim de factori primi.
* Determinați lungimea maximă a unei secvențe mandatorii din șirul $B$.

# Date de intrare

Fișierul de intrare `mandatar.in` conține pe prima linie numărul natural $c$, reprezentând cerința care trebuie rezolvată (1, 2 sau 3), pe linia a doua numărul natural $n$, cu semnificația din enunț, iar pe următoarea linie $n$ numere naturale, separate prin câte un spațiu, reprezentând elementele șirului $A$.

# Date de ieșire

Fișierul de ieșire `mandatar.out` conține numărul determinat pentru cerința $c$.

# Restricții și precizări

* $c \in \{1, 2, 3\}$
* $1 \leq n \leq 100 \ 000$
* $2 \leq A_i \leq 10^7$, $1 \leq i \leq n$
* $2 \leq x \leq 9$

| # | Scor | Restricții |
|---|------|------------|
| 1 | 50 | $c = 1$. Șirul $A$ conține cel puțin un număr prim. |
| 2 | 30 | $c = 2$. |
| 3 | 20 | $c = 3$. Șirul $B$ conține cel puțin o secvență mandatorie. |

# Exemplul 1

`mandatar.in`
```
1
10
17 45 9 90 66 24 2 40 29 4
```

`mandatar.out`
```
29
```

## Explicație

$c=1$, $n=10$. Se rezolvă cerința $1$.
Dintre cele $10$ elemente ale șirului $A$, numerele $17$, $2$, $29$ sunt numere prime, iar numărul $29$ este cel mai mare dintre acestea.

# Exemplul 2


`mandatar.in`
```
2
10
17 45 9 90 66 24 2 40 29 4
```

`mandatar.out`
```
66
```

## Explicație

$c=2$, $n=10$. Se rezolvă cerința $2$.
Se construiește șirul $B$ pe baza șirului $A$, după cum urmează: $17$, $15$, $3$, $30$, $66$, $6$, $2$, $10$, $29$, $2$.
Sunt două elemente care au număr maxim de factori primi (câte $3$ factori primi): $30$ și $66$, iar $66$ este cel mai mare.


# Exemplul 3


`mandatar.in`
```
3
10
17 45 9 90 66 24 2 40 29 4
```

`mandatar.out`
```
5
```

## Explicație

$c=3$, $n=10$. Se rezolvă cerința $3$.
Se construiește șirul $B$ pe baza șirului $A$, după cum urmează: $17$, $15$, $3$, $30$, $66$, $6$, $2$, $10$, $29$, $2$.
Sunt două secvențe mandatorii de lungime maximă, care este egală cu $5$:
- $15$, $3$, $30$, $66$, $6$;
- $30$, $66$, $6$, $2$, $10$.
