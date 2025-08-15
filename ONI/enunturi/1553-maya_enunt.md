~[albina_1.jpg|align=right]
Regina stupului este plecată, iar cele $N$ albinuțe nou născute trebuie hrănite. Maya este albina care trebuie să îndeplinească această sarcină. Maya își face un plan pentru a putea acționa. Pentru fiecare albinuță, Maya pornește dintr-o celulă inițială ce conține cantitatea de miere necesară și se deplasează din celulă în celulă, până la albinuța pe care o va hrăni.

Un fagure este format din coloane numerotate cu litere mari ale alfabetului englez de la $A$ la $Z$, iar poziția fiecărei celule de pe o coloană este identificată prin valori $1$, $2$, $3$, $4$, $5$, $\dots$ de jos în sus, ca în figură. Fiecare celulă a fagurelui are formă hexagonală. Dintr-o celulă se poate ajunge în cele $6$ celule vecine, prin deplasarea în direcțiile: 1 - sus, 2 - dreapta sus, 3 - dreapta jos, etc. (ca în figura alăturată).

~[albina_2.jpg|align=right]
Fagurele este circular, astfel după coloana $Z$ urmează, spre dreapta, coloana $A$, iar înainte de coloana $A$ se află, la stânga, coloana $Z$.

# Cerință

Știind care sunt adresele celulelor din care va pleca Maya, se cere:
1. Să se afișeze coloanele care conțin cele mai multe celule inițiale.
2. Cunoscând, în plus, secvențele de mutări pe care le va executa Maya, pentru a ajunge la fiecare albinuță, se cer adresele celor $N$ celule destinație.


# Date de intrare

Fișierul de intrare `maya.in` conține pe prima linie numărul natural $C$ ($1$ sau $2$) reprezentând cerința problemei. Pe linia următoare va fi numărul natural $N$ reprezentând numărul de celule inițiale. Pe următoarea linie vor fi $N$ adrese separate prin câte un spațiu, o adresă fiind de forma `ColoanăNumăr`. 

Pentru cerința $2$, vor mai exista, în continuare, $N$ linii conținând fiecare: un număr natural reprezentând numărul de mișcări, urmat, după un spațiu, de o secvență de cifre $1$, $2$, $3$, $4$, $5$ sau $6$ (fără spații între ele) reprezentând direcțiile în care se va deplasa Maya pentru a ajunge la celula destinație.


# Date de ieșire

Fişierul de ieşire `maya.out`:
- dacă cerința este $1$, va conţine o secvență de litere mari, în ordine alfabetică, separate prin câte un spațiu, reprezentând coloanele care conțin un număr maxim de celule inițiale;
- dacă cerința este $2$, va conţine $N$ linii formate din adrese de forma ColoanăNumăr reprezentând celulele destinație.

# Restricții și precizări

* $1 \leq N \leq 1 \ 000$;
* Fiecare secvență de mutări este formată din cel mult $200$ de cifre;
* În teste nu vor exista deplasări în direcția $4$ pentru celulele aflate pe primele poziții din fiecare coloană ($\text{A1}$, $\text{B1}$, $\text{C1}$, $\dots$, $\text{Z1}$) și nici în direcțiile $3$ și $5$ pentru fiecare dintre coloanele: $\text{B1}$, $\text{D1}$, $\text{F1}$, $\text{H1}$, $\dots$
* Pe fiecare verticală, coloanele pot conține cel mult $5 \ 000$ de celule.

# Exemplul 1

`maya.in`
```
1
5
D2 A3 A7 E2 D101
```

`maya.out`
```
A D
```

## Explicație

Coloana $A$ conține două celule inițiale, coloana $D$ tot două, iar coloana $E$ una singură. Coloanele cu cele mai multe celule inițiale sunt $A$ și $D$.

# Exemplul 2


`maya.in`
```
2
5
D2 A3 A7 E2 D101
3 123
7 1111111
6 121212
4 1156
7 4444441
```

`maya.out`
```
F3
A10
D12
C4
D96
```

## Explicație

Pentru celula inițială $\text{D2}$, drumul albinei este: `D2 D3 E3 F3`.

~[albina_3.jpg]

