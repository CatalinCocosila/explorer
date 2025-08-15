Spider este un păianjen care trăieşte în casa unui programator. De la acesta Spider a preluat pasiunea pentru numere şi pentru programe. Aşa stând lucrurile, Spider a hotărât să nu-şi mai ţeasă pânza în mod tradiţional, ci să folosească informaţiile aflate de la programator, abordând şi un stil de lucru metodic. Prin urmare,

Spider procedează astfel:
- alege $n$ puncte aşezate în cerc şi le numerotează de la $1$ la $n$ (în sensul acelor de ceasornic);
- calculează distanţele dintre oricare două puncte obţinând doar numere naturale distincte;
- alege un punct de plecare $k$.
- stabileşte următoarea regulă pe care să o respecte când ţese pânza: în fiecare zi va ţese câte un fir: dacă numărul zilei este impar, atunci ţese firul de la punctul în care se află la punctul următor (de asemenea în sensul acelor de ceasornic, iar după punctul numerotat cu $n$ urmează punctul numerotat cu $1$), iar dacă numărul zilei este par Spider ţese un fir între punctul în care se află şi punctul în care ajunge sărind un punct;
- se opreşte atunci când ar trebui să ţeasă un fir între două puncte între care există deja un fir ţesut.

# Cerinţă
Să se scrie un program care să rezolve următoarele cerințe:
1. Să se afle numărul de zile necesar pentru a-şi ţese pânza şi punctul în care s-a oprit.
2. Să se afle lungimile firelor ţesute împreună cu capetele lor, în ordinea descrescătoare a lungimilor firelor. Capetele firelor vor fi afişate în ordine crescătoare.

# Date de intrare

Pe primele două linii a fișierului de intrare `spider.in` se găsesc două numere întregi, $n$ și $k$, reprezentând numărul de puncte alese și punctul de plecare. Pe următoarele $n$ linii se află câte $n$ distanțe $d_{ij}$, separate prin spațiu, reprezentând distanța dintre punctele $i$ și $j$.

# Date de ieșire

Pe prima linie a fișierului de ieșire `spider.out` se vor găsi două numere întregi $x$ și $p$, numărul de zile şi punctul în care s-a oprit Spider. Pe următoarele $p$ linii se vor afla câte trei valori, reprezentând lungimile firelor şi capetele lor, în ordinea descrescătoare a lungimilor firelor. Capetele firelor vor fi afişate în ordine crescătoare.

# Restricții și precizări

* $1 \leq n \leq 100$; 
* $1 \leq k \leq n$;
* $0 \leq d_{ij} \leq 50 \ 000$.

# Exemplu

`spider.in`
```
4
2
0 5 8 7
5 0 3 10
8 3 0 4
7 10 4 0
```

`spider.out`
```
5 1
10 2 4
8 1 3
7 1 4
5 1 2
3 2 3
```

## Explicație

~[spider.png|width=20em]

În ziua $1$ Spider pleacă din punctul $2$ şi ţese un fir până la punctul $3$. În ziua $2$, din punctul $3$ ţese un fir până la punctul $1$ (sare punctul $4$). În ziua $3$ din punctul $1$ ţese un fir până la punctul $2$. În ziua $4$ din punctul $2$ ţese un fir până la punctul $4$ (sare punctul $3$). În ziua $5$ din punctul $4$ ţese un fir până la punctul $1$ şi se opreşte.
