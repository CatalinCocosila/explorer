Un grup de copii îşi cumpără bilete pentru a urca pe vârful Postăvarul. Ei găsesc la telecabină un rând format din $n$ colegi de ai lor şi cer să fie primiţi de aceştia printre ei. Pentru a nu exista supărare, s-a stabilit o regulă după care sunt primiţi unii dintre noii veniţi. Astfel, pentru fiecare bilet (fie $P$ seria acestuia) se calculează suma $S$ a cifrelor numărului $P$. În faţa fiecărui copil din şirul iniţial, pentru care numerele $P$ şi $S$ sunt prime între ele, se aşează acei copii pentru care seriile de pe biletele lor sunt numere prime cuprinse între $S$ şi $P$.

# Cerinţă

Să se refacă rândul de copii, modificat după regula descrisă.

# Date de intrare

Pe prima linie a fișierului de intrare `prieteni.in` se găsește un număr $n$ reprezentând numărul de copii şi apoi $n$ numere despărţite prin câte un spaţiu reprezentând seriile biletelor cumpărate.

# Date de ieșire

Pe prima linie a fișierului de ieșire `prieteni.out` se va găsi numărul de copii din şirul final şi pe a doua linie seriile biletelor acestor copii în ordinea lor din şir.

# Restricții și precizări

* $1 \leq n \leq 100$
* Seriile biletelor sunt numere naturale distincte mai mici decât $65 \ 535$.
* Dacă nu există nici un bilet a cărui serie să îndeplinească condiţiile descrise, şirul rămâne nemodificat.

# Exemplul 1

`prieteni.in`
```
4
64 14 31 17
```

`prieteni.out`
```
11
64 5 7 11 13 14 19 23 29 31 17
```

## Explicație

$P = 14$ şi $S = 1+4 = 5$ sunt prime între ele. În faţa lui $14$ se inserează numerele prime cuprinse între $5$ şi $14$, care nu se găsesc în şir.

$P = 31$ şi $S = 3+1 = 4$ sunt prime între ele. În faţa lui $31$ se inserează numerele prime cuprinse între $4$ şi $31$, care nu se găsesc în şir.

$P = 17$ şi $S = 1+7 = 8$ sunt prime între ele. În faţa lui $17$ nu se mai inserează niciun număr.


