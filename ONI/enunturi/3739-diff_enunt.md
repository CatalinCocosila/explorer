
Se consideră șirul de $N$ cifre nenule $a$ = ($a_1$, $a_2$, $\dots$, $a_N$). Prin frecvență de apariție a unei cifre în șir înțelegem numărul de apariții ale  cifrei în acest șir. 

Pentru o secvență $a_i$, $a_{i+1}$, $\dots$, $a_j$ din acest șir ($1 \leq i < j \leq N$) calculăm frecvența fiecărei cifre distincte prezente în secvență și definim **diff**-ul secvenței ca fiind diferența dintre cea mai mare frecvență și cea mai mică frecvență dintre cele calculate.

Exemplul $1$: în secvența $2,7,3,2,2,3,8,8,2$ **diff**-ul secvenței este $4-1=3$ (cifra $2$ apare de patru ori, iar cifra $7$ o singură dată).

Exemplul $2$: pentru secvența $9,9,9,9$ **diff**-ul secvenței este $0$.

# Cerință

1. Determinați frecvența maximă de apariție a unei cifre din șirul $a$.
2. Determinați **diff**-ul maxim posibil al unei secvențe care începe de la prima poziție din șirul $a$.
3. Determinați **diff**-ul maxim al unei secvențe din șirul $a$.

# Date de intrare

Fișierul de intrare `diff.in` conține pe prima linie numerele naturale $C$ și $N$, unde $C$ este cerința care trebuie rezolvată ($1$, $2$ sau $3$) și $N$ are semnificația din enunț, iar pe următoarea linie $N$ cifre nenule, separate prin câte un spațiu, reprezentând termenii șirului $a$.

# Date de ieșire

Fișierul de ieșire `diff.out` conține numărul determinat pentru cerința $C$.

# Restricții și precizări

* $C \in \{1, 2, 3\}$
* $3 \leq N \leq 100 \ 000$
* Se garantează că, pentru toate testele, în șir există cel puțin două cifre distincte.

| # | Scor | Restricții |
|---|------|------------|
| 1 | 30 | $C = 1$ |
| 2 | 30 | $C = 2$ |
| 3 | 40 | $C = 3$ |

# Exemplul 1

`diff.in`
```
1 9 
1 7 7 9 7 7 1 9 1
```

`diff.out`
```
4
```

## Explicație

$C=1$, $N=9$. Se rezolvă cerința $1$.
Șirul $a=(1,7,7,9,7,7,1,9,1)$ conține cifra $1$ de $3$ ori, cifra $7$ de $4$ ori, cifra $9$ de $2$ ori. 
Frecvența maximă de apariție este $4$, corespunzătoare cifrei $7$.

# Exemplul 2


`diff.in`
```
2 9 
1 7 7 9 7 7 1 9 1
```

`diff.out`
```
3
```

## Explicație

$C=2$, $N=9$. Se rezolvă cerința $2$.
**diff**-ul maxim al unei secvențe care începe de la poziția $1$ este $3$ și aparține secvenței `1 7 7 9 7 7`


# Exemplul 3


`diff.in`
```
3 10 
9 7 7 9 7 7 9 7 7 9
```

`diff.out`
```
4
```

## Explicație

$C=3$, $N=10$. Se rezolvă cerința $3$.
**diff**-ul maxim este $4$, corespunzător secvenței `7 7 9 7 7 9 7 7`
