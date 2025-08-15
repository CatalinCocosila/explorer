Fie $a$ şi $b$ două numere naturale. Se reprezintă cele două numere în baza $2$. Celor două valori obţinute prin reprezentarea în baza $2$ li se aplică următoarea transformare: dacă prima cifră (cea mai din stânga) din reprezentarea în baza $2$ a numărului a este egală cu ultima cifră (cea mai din dreapta) din reprezentarea în baza $2$ a numărului $b$, atunci se elimină prima cifră (cea mai din stânga) din reprezentarea în baza $2$ a numărului $a$ şi ultima cifră (cea mai din dreapta) din reprezentarea în baza $2$ a numărului $b$ şi se continuă transformările în acelaşi mod până când prima cifră (cea mai din stânga) din reprezentarea în baza $2$ a numărului a este diferită de ultima cifră (cea mai din dreapta) din reprezentarea în baza $2$ a numărului $b$. Valorile rămase după transformările suferite se reprezintă în baza $10$, obţinându-se două numere: $c$ şi $d$.

1. Dacă asupra celor două reprezentări în baza $2$ nu s-a efectuat nici o transformare, întrucât prima cifră din reprezentarea numărului $a$ este diferită de ultima cifră din reprezentarea în baza $2$ a numărului b, atunci numărul c va fi identic cu numărul $a$, iar $d$ cu numărul $b$.
2. Dacă în urma unei transformări se elimină şi ultima cifră din reprezentarea în baza $2$, numărul rezultat este $0$.

# Cerință

Scrieţi un program care citeşte numerele $a$ şi $b$ şi care afişează valoarea obţinută însumând cele două numere $c$ şi $d$.

# Date de intrare

Pe prima linie a fișierului de intrare `numere.in` se găsesc două numere întregi, $a$ și $b$.

# Date de ieșire

Pe prima linie a fișierului de ieșire `numere.out` se va găsi un singur număr întreg, suma celor două numere conform enuntului.

# Restricții și precizări

* $1 \leq a, b \leq 2^{15}$;

# Exemplul 1

`numere.in`
```
13
27
```

`numere.out`
```
1
```

## Explicație

În baza $2$, numărul $13$ se scrie $1101$ în baza $2$, numărul $27$ se scrie $11011$

După prima transformare se obţin: $101$, respectiv $1101$. Se continuă transformările şi se obţin: $01$, respectiv $110$. Se continuă transformarea şi se obţine $1$, respectiv $11$. Se continuă transformarea şi se obţin: $0$ şi $1$. Se face conversia şi se obţin: $c = 0$ şi $d = 1$. Deci, suma $c + d$ este $1$.

# Exemplul 2


`numere.in`
```
13
25
```

`numere.out`
```
17
```

## Explicație

În baza $2$, numarul $13$ se scrie $1101$, în baza $2$, numarul $25$ se scrie $11001$

După prima transformare se obţin: $101$, respectiv $1100$. Din acest moment nu se mai pot face transformări. Se reprezintă $101$ în baza $10$ şi se obţine $5$, iar $1100$ se reprezintă în baza $10$ şi se obţine $12$. Deci, $c = 5$ şi $d = 12$, iar suma $c + d$ este $17$.

# Exemplul 3


`numere.in`
```
13
20
```

`numere.out`
```
33
```

## Explicație

În baza $2$, numarul $13$ se scrie $1101$, în baza $2$, numarul $20$ se scrie $10100$. 

Se observă că prima cifră din reprezentarea lui $a$ este diferită de ultima cifră din reprezentarea lui $b$. Deci, nu se face nici o transformare. Se obţin după conversia în baza $10$: $c = 13$ şi $d = 20$. Deci, suma $c + d$ este $33$.


