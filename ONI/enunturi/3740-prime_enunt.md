Pentru un număr natural $N$ considerăm șirul:  $0$, $1$, $2$, $\dots$, $N$.

# Cerință

1. Se dau $Q$ perechi de numere naturale de forma $(a,b)$. Pentru fiecare pereche se cere să se determine numărul de numere prime care află în secvența de numere consecutive: $a$, $a+1$, $a+2$, $\dots$, $b$.
2. Se dau $Q$ numere naturale $p_1$, $p_2$, $\dots$, $p_Q$. Pentru fiecare număr $p_i$ se cere să se determine numărul secvențelor $a$, $a+1$, $a+2$, $\dots$, $b$ din șirul $0$, $1$, $\dots$, $N$ care conțin câte $p_i$ numere prime ($1 \leq i \leq Q$).

# Date de intrare

Fișierul de intrare `prime.in` conține pe prima linie trei numere naturale $C$ $N$ $Q$, separate prin câte un spațiu, unde $C$ este cerința care trebuie rezolvată ($1$ sau $2$), $N$ și $Q$ au semnificația de mai sus.

Dacă $C=1$, atunci pe fiecare dintre următoarele $Q$ linii se află câte două numere naturale $a$ $b$, separate 
prin spațiu, reprezentând extremitățile unei secvențe de numere naturale consecutive.

Dacă $C=2$, atunci pe următoarele $Q$ linii se află câte un număr natural $p_i$ ($1 \leq i \leq Q$), cu semnificația din enunț. 

# Date de ieșire

Fișierul de ieșire `prime.out` conține $Q$ numere, fiecare pe câte un rând, în conformitate cu cerința $C$.

# Restricții și precizări

* $C \in \{1, 2\}$;
* $1 \leq N,Q \leq 50 \ 000$;
* $0 \leq a \leq b \leq N$;
* $0 \leq p_i \leq N$, $1 \leq i \leq Q$.

| # | Scor | Restricții |
|---|------|------------|
| 1 | 40 | $C = 1$, $1 \leq N,Q \leq 10 \ 000$ |
| 2 | 10 | $C = 1$, $10 \ 000 < N,Q \leq 50 \ 000$ |
| 3 | 30 | $C = 2$, $1 \leq N,Q \leq 10 \ 000$ |
| 4 | 20 | $C = 2$,  $10 \ 000 < N,Q \leq 50 \ 000$ |

# Exemplul 1

`prime.in`
```
1 10 3 
0 10 
3 3 
8 10
```

`prime.out`
```
4 
1 
0
```

## Explicație

$C=1$, $N=10$, $Q=3$. 
Se rezolvă cerința $1$.

În secvența $0 \dots 10$ există $4$ numere prime: $2$, $3$, $5$, $7$. 
În secvența $3 \dots 3$ există un singur număr prim, numărul $3$.
În secvența $8 \dots 10$ nu există numere prime. 

# Exemplul 2


`prime.in`
```
2 10 2 
4 
1 
```

`prime.out`
```
12 
17 
```

## Explicație

$C=2$, $N=10$, $Q=2$. 

Se rezolvă cerința $2$.

Există câte $4$ numere prime în fiecare dintre următoarele $12$ secvențe: $0 \dots 10$, $1 \dots 10$, $2 \dots 10$, $0 \dots 9$, $1 \dots 9$, $2 \dots 9$, $0 \dots 8$, $1 \dots 8$, $2 \dots 8$, $0 \dots 7$, $1 \dots 7$, $2 \dots 7$. 

Există câte un singur număr prim în fiecare dintre următoarele $17$ secvențe: $0 \dots 2$, $1 \dots 2$, $2 \dots 2$, $3 \dots 3$, $3 \dots 4$, $4 \dots 5$, $5 \dots 5$, $4 \dots 6$, $5 \dots 6$, $6 \dots 7$, $6 \dots 8$, $6 \dots 9$, $6 \dots 10$, $7 \dots 7$, $7 \dots 8$, $7 \dots 9$, $7 \dots 10$.

