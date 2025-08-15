~[lightbot.png|align=right]
În acest an evenimentul ”Hour of Code” a înregistrat un număr record de participanți din țara noastră. În cadrul acestui eveniment una dintre cele mai accesate aplicații a fost **Lightbot**, care a permis elevilor să-și testeze abilitățile de programare.
Aplicația Lightbot are $N$ nivele, numerotate consecutiv de la $1$ la $N$, în ordinea strict crescătoare a complexității lor. Lightbot a permis fiecărui participant să înceapă cu orice nivel strict mai mic decât $N - 1$ și să sară peste **un singur nivel**, fără a finaliza codul, trecând la nivelul următor celui sărit. La finalizarea cu succes a codului corespunzător nivelului curent, participantul este promovat la nivelul imediat următor. Fiecare participant a început scrierea codurilor la un nivel $P$ și a sărit peste un nivel $L$ ($P \lt L \lt P + K$), finalizând $K$ nivele memorate ca o succesiune de numere naturale de forma $P, P + 1, ..., L - 1, L + 1, ..., P + K$. Succesiunile de nivele finalizate de participanți au fost memorate în fișierul `lightbot.in`. Succesiunile corespunzătoare participanților nu se intercalează în fișier.

# Cerință

Scrieţi un program care citeşte succesiunile corespunzătoare nivelelor finalizate de participanții care au jucat Lightbot și determină:

1. numărul total de participanți
2. numărul celui mai dificil nivel care a fost rezolvat de un număr maxim de participanți
3. pentru fiecare participant, numărul nivelului sărit de acesta

# Date de intrare

Fişierul de intrare `lightbot.in` conţine pe prima linie una dintre valorile $1$, $2$ sau $3$, reprezentând cerinţa $1$ dacă se cere determinarea numărului total de participanți, cerinţa $2$ dacă se cere determinarea numărului celui mai dificil nivel care a fost rezolvat de un număr maxim de participanți, respectiv cerinţa $3$, dacă se cere determinarea, pentru fiecare participant, a numărului nivelului sărit de acesta.
A doua linie a fișierului conține numărul natural $N$ de nivele corespunzător aplicației Lightbot, iar pe a treia linie, succesiunile de numere naturale nenule corespunzătoare nivelelor finalizate de participanți, separate două câte două prin câte un spaţiu.

# Date de ieşire

Fişierul de ieşire `lightbot.out` va conţine pe prima linie un număr natural M, reprezentând numărul total de participanți dacă cerința a fost $1$, un număr natural reprezentând numărul celui mai dificil nivel care a fost rezolvat de un număr maxim de participanți, dacă cerința a fost $2$, respectiv, o secvență de $M$ numere naturale separate prin câte un spațiu ce reprezintă nivele sărite de participanți în ordinea succesiunilor memorate în fișier, dacă cerința a fost $3$.

# Restricţii şi precizări

* $3 \leq N \leq 200 \ 000$.
* $1 \leq X \leq N$, pentru orice număr $X$ memorat pe a treia linie a fișierului `lightbot.in`.
* $1 \leq P \lt L \lt P + K \leq N$, pentru orice succesiune de $K$ nivele finalizate, corespunzătoare unui participant, care a început scrierea codurilor la nivelul $P$ și a sărit peste nivelul $L$.
* O secvență de valori consecutive aparține unui singur participant.
* A treia linie a fișierului de intrare conține cel mult $400 \ 000$ de numere.
* Pentru rezolvarea corectă a cerinţei $1$ se obţine $20\%$ din punctaj.
* Pentru rezolvarea corectă a cerinţei $2$ se obţine $40\%$ din punctaj.
* Pentru rezolvarea corectă a cerinţei $3$ se obţine $40\%$ din punctaj.

# Exemplul 1

`lightbot.in`
```
1
10
1 2 4 2 4 6 7 9
```

`lightbot.out`
```
3
```

## Explicaţie

Sunt trei participanți, care au finalizat nivelele: $1, 2, 4$ (primul), $2, 4$ (al doilea) şi $6, 7, 9$ (al treilea).

# Exemplul 2

`lightbot.in`
```
2
10
1 2 4 2 4 6 7 9
```

`lightbot.out`
```
4
```

## Explicaţie

Nivele $2$ și $4$ au fost finalizate de câte doi participanți, cel mai greu fiind nivelul $4$.

# Exemplul 3

`lightbot.in`
```
3
10
1 2 4 2 4 6 7 9
```

`lightbot.out`
```
3 3 8
```

## Explicaţie

Primul participant a sărit nivelul $3$, al doilea nivelul $3$, iar al treilea nivelul $8$.
