Se consideră două șiruri $D = (D_1, D_2, ..., D_n)$ și $E = (E_1, E_2, ..., E_n)$ ce reprezintă descompunerea în factori primi pentru un număr natural nenul $X$, după cum urmează: $D_i$ – factorul prim, $E_i$ – puterea la care apare factorul prim $D_i$ în descompunerea numărului $X$ ($1 \leq i \leq n$), unde $n$ reprezintă numărul factorilor primi.

# Cerinţă

Să se determine:

1. numărul total de divizori naturali ai lui $X$
2. divizorii lui $X$ care aparțin intervalului $[A, B]$, unde $A$ şi $B$ sunt două numere naturale date.

# Date de intrare

Fișierul de intrare `descmult.in` conține pe prima linie un număr natural $C$ care reprezintă cerința ce trebuie rezolvată ($C = 1$ sau $C = 2$).
A doua linie conține, despărțite prin câte un spațiu, trei numere naturale $n \ A \ B$, cu semnificația din enunț.
Pe linie a treia se află $n$ numere naturale, separate prin câte un spațiu, ce reprezintă factorii primi $D_1 \ D_2 \ ... \ D_n$ din descompunerea lui $X$.
Pe linia a patra se află $n$ numere naturale, separate prin câte un spațiu, ce reprezintă puterile la care apar
aceşti factori $E_1 \ E_2 \ ... \ E_n$.

# Date de ieşire

Pentru $C = 1$ se va rezolva doar prima cerință. În acest caz, fișierul de ieșire `descmult.out` va conține pe prima linie un singur număr natural nenul ce reprezintă numărul total de divizori naturali ai lui $X$.
Pentru $C = 2$ se va rezolva cea de-a doua cerință. În acest caz, fișierul de ieșire `descmult.out` va conține, separați prin câte un spațiu, divizorii lui $X$ ce aparţin intervalului $[A, B]$.

# Restricţii și precizări

* $2 \leq n \leq 20$
* $1 \leq A \leq B \leq {10}^{7}$
* $2 \leq D_i \lt 1 \ 000$ (numere prime distincte), $1 \leq i \leq n$
* $1 \leq E_i \leq 10$, $1 \leq i \leq n$
* Factorii primi $D_1, D_2, ..., D_n$ nu sunt obligatoriu în ordine crescătoare
* Se garantează că numărul maxim de divizori naturali ai lui $X \leq {10}^{19}$
* Intervalul $[A, B]$ conține cel puțin un divizor
* Numărul maxim de divizori aflați în intervalul $[A, B]$ este $\leq {10}^{6}$
* **Ordinea de afișare a divizorilor nu este importantă**
* Pentru rezolvarea corectă a cerinței $1$ se acordă $20$ de puncte, iar pentru cea de-a doua cerință se acordă $80$ de puncte.

# Exemplul 1

`descmult.in`
```
1
4 30 50
3 2 5 11
1 3 2 1
```

`descmult.out`
```
48
```

## Explicație

Pentru acest test se rezolvă cerința $1$.
$X = {3}^{1} \cdot {2}^{3} \cdot {5}^{2} \cdot {11}^{1} = 6600$ și are $48$ de divizori: $1$, $2$, $3$, $4$, $5$, $6$, $8$, $10$, $11$, $12$, $15$, $20$, $22$, $24$, $25$, $30$, $33$, $40$, $44$, $50$, $55$, $60$, $66$, $75$, $88$, $100$, $110$, $120$, $132$, $150$, $165$, $200$, $220$, $264$, $275$, $300$, $330$, $440$, $550$, $600$, $660$, $825$, $1100$, $1320$, $1650$, $2200$, $3300$, $6600$.

# Exemplul 2

`descmult.in`
```
2
4 30 50
3 2 5 11
1 3 2 1
```

`descmult.out`
```
30 44 50 40 33
```

## Explicație

Pentru acest test se rezolvă cerința $2$.
$X = {3}^{1} \cdot {2}^{3} \cdot {5}^{2} \cdot {11}^{1} = 6600$.
Divizorii ce aparțin intervalului $[30, 50]$ sunt: $30, 33, 40, 44, 50$. Ordinea de afișare a divizorilor nu este importantă.
