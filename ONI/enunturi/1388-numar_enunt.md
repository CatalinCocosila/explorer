Pentru un număr dat cu $k$ cifre $\overline{c_1 \ c_2 ... \ c_k}$, se numeşte algoritm de deplasare circulară spre dreapta de la o cifră iniţială $c_i$, la o cifră finală $c_j$, deplasarea din cifră în cifră spre dreapta de $c_i$ ori $(1 \leq i, j \leq k)$. Dacă pe parcursul deplasării s-a ajuns la cifra $c_k$, se continuă deplasarea circulară spre dreapta cu cifra $c_1$.
Un număr cu $k$ cifre se numeşte număr „circular” dacă îndeplineşte următoarele două cerinţe:

* toate cifrele sunt nenule
* pornind de la cifra $c_1$, aplicând algoritmul de deplasare circulară spre dreapta de exact $k$ ori, se ajunge din nou la $c_1$, fiecare dintre cifrele numărului fiind exact o singură dată cifră iniţială

De exemplu, numărul $2 \ 396$ este un număr “circular”, pentru că are doar cifre nenule şi algoritmul de deplasare circulară spre dreapta se aplică astfel:

1. Se porneşte de la cifra iniţială $2 (2 \ 3 \ 9 \ 6)$ şi se numără două cifre spre dreapta, ajungând la cifra finală $9$: $2 \ 3 \ 9 \ 6$.
2. Se porneşte de la cifra iniţială $9$ şi se numără nouă cifre spre dreapta, ajungând la cifra finală $6$: $2 \ 3 \ 9 \ 6$.
3. Se porneşte de la cifra iniţială $6$ şi se numără şase cifre spre dreapta, ajungând la cifra finală $3$: $2 \ 3 \ 9 \  6$.
4. Se porneşte de la cifra iniţială $3$ şi se numără trei cifre spre dreapta, ajungând la cifra finală $2$: $2 \ 3 \ 9 \ 6$.

Astfel, se ajunge la prima cifră din număr, adică la cifra $2$, după exact $4$ aplicări ale algoritmului, iar fiecare dintre cifrele numărului este exact o dată cifră iniţială.

# Cerinţă

Scrieţi un program care citeşte numărul natural nenul $n$, apoi numerele naturale $x_1, x_2, ..., x_n$, şi determină:
1. cel mai mare număr din şir în care există cel puţin o cifră care apare de minimum două ori, iar în cazul în care în şir nu există un astfel de număr, se va afişa cel mai mare număr din şir;
2. un şir $a_1, a_2, ..., a_n$ de $n$ numere naturale pentru care un element $a_i (1 \leq i \leq n)$ se calculează astfel:
* este egal cu $x_i$, dacă $x_i$ este număr circular
* este numărul cel mai apropiat de $x_i$ (număr mai mare sau mai mic decât $x_i$), cu proprietatea că este număr circular dacă pentru un număr din şir se identifică un număr circular $y$, $y > x_i$ şi un număr circular $z$, $z < x_i$, pentru care $y - x_i = x_i-z$, atunci se va alege numărul $y$.

# Date de intrare

Fişierul de intrare `numar.in` conţine pe prima linie numărul $n$, iar pe următoarele n linii numerele naturale $x_1, x_2, ..., x_n$.

# Date de ieşire

Fişierul de ieşire `numar.out` va conţine pe prima linie un număr natural determinat conform cerinţei $a)$, iar pe următoarele $n$ linii şirul de numere determinat conform cerinţei de la punctul $b)$, fiecare număr pe câte un rând.

# Restricţii şi precizări

* $0 \lt n \lt 100$
* $9 \lt x_i \lt 999 \ 589$, $1 \leq i \leq n$
* pentru rezolvarea corectă a cerinţei $1$ se obţine $30\%$ din punctaj, iar pentru rezolvarea corectă a cerinţei $2$ se obţine $70\%$ din punctaj.

# Exemplu

`numar.in`
```
5
15
123
1972
222
515
```

`numar.out`
```
515
15
117
1959
222
522
```

## Explicaţie

$1. \ 515$ este cel mai mare număr dintre cele cinci numere citite, număr ce conţine o cifră care apare de minimum două ori

$2.$ Pentru $15$: de la cifra iniţială $1$, se numără o cifră şi se ajunge la cifra finală $5$, apoi începând de la cifra $5$ ca cifră iniţială, se numără cinci cifre şi se ajunge la cifra finală $1$. Astfel cifrele $1$, $5$ sunt o singură dată cifre iniţiale şi după două aplicări ale algoritmului de deplasare se ajunge la prima cifră, deci 15 este număr circular.

Pentru $123$: de la cifra iniţială $1$, se numără o cifră şi se ajunge la cifra finală $2$, apoi începând de la cifra $2$ ca cifră iniţială, se numără două cifre şi se ajunge la cifra finală $1$. Astfel, se ajunge din nou la prima cifră, însă algoritmul de deplasare s-a aplicat doar de două ori şi nu trei ori, iar cifra $3$ nu a fost cifră iniţială. Ca urmare, $123$ nu este număr circular. Se determină cele două numere circulare, $y = 141$ şi $z = 117$, cel mai apropiat de $123$ dintre ele fiind $117$.
Cu celelalte numere se procedează în acelaşi mod.
