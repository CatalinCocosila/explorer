Gigel are instalat pe calculator un joc numit Tetris, în care pe o zonă dreptunghiulară cade pe rând câte o piesă dintr-un şir de piese. Zona de joc este codificată sub forma unei table cu $N$ linii şi $M$ coloane. Liniile le considerăm numerotate de la $1$ la $N$ de jos în sus, iar coloanele de la $1$ la $M$ şi de la stânga la dreapta. Toate piesele sunt de forma unor pătrate. Ele intră în zona de joc începând cu linia $N$ şi cad către linia $1$, deplasarea făcându-se pe verticală în cadrul aceloraşi coloane. Dacă în cădere întâlneşte o piesă introdusă anterior în joc atunci ea se va opri exact deasupra ei, deci începând cu linia imediat următoare.
~[tetris.png|align=right]
O piesa intră în joc doar dacă poate fi introdusă complet pe zona delimitată de cele $N$ linii şi $M$ coloane.
În desenul alăturat zona de joc are $7$ linii şi $8$ coloane şi în joc au intrat pe rând zece piese, numerotate de la $1$ la $10$, în ordinea introducerii lor pe tablă.
Un joc *Tetris* **se termină** când toate piesele din șir s-au aşezat pe tablă sau când piesa care urmează nu poate fi introdusă în joc.

# Cerinţă

Realizaţi un program care identifică:
1. Numărul maxim de ordine al unei linii ocupată de o piesă
2. Determinați numărul maxim de coloane alăturate ocupate de piese, în cadrul liniei determinate la punctul a)

# Date de intrare

Fişierul de intrare `tetris.in` conţine pe prima linie două numere naturale $N$ şi $M$ reprezentând numărul de linii, respectiv numărul de coloane ale zonei de joc. Următoarele linii conţin perechi de numere naturale, fiecare descriind câte o piesă în ordinea intrării ei în joc. Primul număr din pereche reprezintă lungimea laturii piesei, iar cel de al doilea reprezintă numărul de ordine al coloanei pe care se încearcă plasarea laturii stângi a piesei. Numerele de pe fiecare linie sunt separate printr-un singur spaţiu.

# Date de ieşire

În fişierul `tetris.out` se va scrie pe prima linie numărul maxim al liniei ocupate de o piesă, iar pe a doua linie numărul maxim de coloane alăturate ocupate de piese, din cadrul acestei linii.

# Restricţii şi precizări

* $1 \leq$ toate numerele din fişierul de intrare $\leq 1 \ 000$
* Se asigură că pentru toate testele cel puţin prima piesă poate fi aşezată pe tablă
* Se asigură că numărul de ordine al coloanei pe care se încearcă plasarea laturii stângi a piesei este $\leq M$
* Se acordă $60\%$ din punctajul unui test, dacă pe prima linie a fișierului de ieșire se află un singur număr și el reprezintă răspunsul corect la prima cerință. Dacă fişierul de ieşire conţine două linii şi pe a doua linie se află un singur număr ce reprezintă răspunsul corect la a doua cerință se obţine $40\%$ din punctajul testului.

# Exemplu

`tetris.in`
```
7 8
1 1
2 2
2 7
1 6
3 6
3 3
1 8
2 5
1 8
2 3
3 3
```

`tetris.out`
```
7
4
```


## Explicaţie

Exemplu din desen descrie ordinea în care au intrat piesele în joc. Linia $7$ este linia cu număr de ordine maxim ce este acoperită cu piese. Piesele $8$ şi $10$ acoperă această linie, pe o secvenţă de $4$ coloane alăturate, iar piesa $9$ acoperă doar o coloană, deci secvența maximă este de lungime $4$. Piesa $11$ nu a mai putut fi introdusă în joc.
