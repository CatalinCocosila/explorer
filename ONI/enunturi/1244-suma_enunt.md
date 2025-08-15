Unele numere naturale au proprietatea că se pot scrie ca sumă de numere naturale consecutive (de exemplu $7 = 3 + 4$, $10 = 1 + 2 + 3 + 4$, $18 = 3 + 4 + 5 + 6$). Mai mult decât atât, unele numere naturale se pot scrie în mai multe moduri ca sumă de numere naturale consecutive (de exemplu $15 = 1 + 2 + 3 + 4 + 5 = 4 + 5 + 6 = 7 + 8$). Definim lungimea unei astfel de scrieri ca fiind egală cu numărul de termeni ai sumei respective (de exemplu scrierea $15 = 4 + 5 + 6$ are lungimea $3$). Dacă un număr natural nu are această proprietate (de exemplu numărul $4$), atunci lungimea scrierii sale se consideră egală cu $1$. Pentru un număr natural definim valoarea $\text{lmax}$ ca fiind maximul lungimilor tuturor scrierilor sale ca sumă de numere naturale consecutive (de exemplu, pentru numărul $15$ valoarea lui $\text{lmax}$ corespunzătoare este egală cu $5$, deoarece toate scrierile posibile ale numărului $15$ sunt: $1 + 2 + 3 + 4 + 5$, $4 + 5 + 6$ şi $7 + 8$ şi suma $1 + 2 + 3 + 4 + 5$ are cel mai mare număr de termeni, respectiv $5$).

# Cerinţă

Considerând două numere naturale nenule $a$ şi $b$, $(a \leq b)$, să se calculeze:
1. numărul $\text{nr}$ reprezentând numărul numerelor naturale mai mari sau egale decât $a$ şi mai mici sau egale decât $b$ care au astfel de scrieri cu lungimea cel puţin egală cu $2$
2. numărul $\text{max}$ reprezentând maximul valorilor $\text{lmax}$ corespunzătoare scrierilor de acest tip a tuturor numerelor naturale mai mari sau egale decât $a$ şi mai mici sau egale decât $b$
3. numărul $\text{nrmax}$ reprezentând numărul numerelor naturale mai mari sau egale decât $a$ şi mai mici sau egale decât $b$ care au scrieri de lungime egală cu $\text{max}$.

# Date de intrare

Fișierul de intrare `suma.in` va conţine cele două numere naturale nenule $a$ şi $b$, despărţite printr-un spaţiu.

# Date de ieşire

Fișierul de ieşire `suma.out` va conţine
* pe prima linie valorea numărului $\text{nr}$
* pe a doua linie valoarea numărului $\text{max}$
* pe a treia linie valoarea numărului $\text{nrmax}$

# Restricţii şi precizări
* $1 \leq a \leq b \leq 65 \ 000$
* $0 \leq b - a \leq 100$
* Pentru fiecare test se vor acorda punctaje parţiale astfel:
	* pentru calculul corect al numărului $\text{nr}$ se va acorda $40\%$ din punctajul testului respectiv
	* pentru calculul corect al numărului $\text{max}$ se va acorda $30\%$ din punctajul testului respectiv
	* pentru calculul corect al numărului $\text{nrmax}$ se va acorda $30\%$ din punctajul testului respectiv
	
# Exemplu

`suma.in`
```
10 20
```

`suma.out`
```
10
5
2
```

## Explicaţie

Între $10$ şi $20$ sunt $11$ numere naturale, iar singurul număr care nu are o astfel de scriere este $16$. Lungimea maximă a unei scrieri este $5$ şi se obţine pentru $2$ numere: $15 = 1 + 2 + 3 + 4 + 5$ şi $20 = 2 + 3 + 4 + 5 + 6$.
