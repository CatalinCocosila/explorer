Fie un șir de $N$ coloane de ciment (pozițiile lor fiind numerotate de la $1$ la $N$) de aceeași lățime și diverse înălțimi. Ele sunt încadrate la stânga (poziția $0$) și la dreapta (poziția $N+1$) de ziduri foarte înalte. Apa începe să curgă de deasupra primei coloane, câte o pătrățică de apă pe secundă. Apa se acumulează dacă are pereți în stânga și în dreapta, altfel curge mai jos către dreapta. Deasupra fiecărei coloane de ciment se poate forma astfel o coloană de apă, cu înălțimea egală cu numărul de pătrățele de la nivelul apei până la zona de contact cu coloana de ciment.

# Cerință

1. Care este înălțimea $H$ a celei mai înalte coloane de apă după ce apa a ajuns peste tot la înălțimea celei mai înalte coloane de ciment?
2. Care este numărul $T$ de secunde în care apa ajunge să acopere coloana numărul $P$?
3. Care este poziția $D$ a celei mai din dreapta coloane acoperită de apă după $S$ secunde?
4. Care este poziția $R$ a celei mai din stânga coloane pe care o putem reduce cu o unitate astfel încât apa să ajungă cât mai repede la coloana $P$?

# Date de intrare

Fișierul de intrare `inundatie.in` conține pe prima linie un număr natural $C$, reprezentând cerința ce trebuie rezolvată($1, 2, 3$, sau $4$). Pe a doua linie numerele $N, P$ și $S$ despărțite prin câte un spațiu cu semnificația din enunț. Pe a treia linie se găsesc $N$ numere naturale separate prin câte un spațiu ce reprezintă înălțimile coloanelor.

# Date de ieșire

Fișierul de ieșire `inundatie.out` va conține un singur număr, astfel:

Dacă $C=1$: înălțimea $H$ cu semnificația de mai sus.
Dacă $C=2$: timpul $T$ cu semnificația de mai sus.
Dacă $C=3$: poziția $D$ cu semnificația de mai sus.
Dacă $C=4$: poziția $R$ cu semnificația de mai sus.

# Restricții și precizări

* $C \in \{1, 2, 3, 4\}$
* $3 \leq N \leq 100 \ 000$
* $1 \leq $ înălțimea oricărei coloane din șir $\leq 20 \ 000$
* $1 \leq P \leq N$
* $1 \leq S \leq 100 \ 000$;
* O coloană de înălțime $h$ este acoperită de apă dacă apa a ajuns la înălțimea $h$.

|#|Punctaj|Restricții|
|-|-|--------|
|1|11|$C = 1$|
|2|25|$C = 2$|
|3|33|$C = 3$|
|4|31|$C = 4$|

# Exemplul 1

`inundatie.in`
```
1
32 15 45
8 5 5 4 3 3 7 5 4 3 3 5 4 3 4 5 6 5 4 4 3 4 5 4 3 2 1 2 3 4 5 9
```

`inundatie.out`
```
8
```

# Exemplul 2


`inundatie.in`
```
2
32 15 45
8 5 5 4 3 3 7 5 4 3 3 5 4 3 4 5 6 5 4 4 3 4 5 4 3 2 1 2 3 4 5 9
```

`inundatie.out`
```
21
```

# Exemplul 3


`inundatie.in`
```
3
32 15 45
8 5 5 4 3 3 7 5 4 3 3 5 4 3 4 5 6 5 4 4 3 4 5 4 3 2 1 2 3 4 5 9
```

`inundatie.out`
```
29
```

# Exemplul 4


`inundatie.in`
```
4
32 15 45
8 5 5 4 3 3 7 5 4 3 3 5 4 3 4 5 6 5 4 4 3 4 5 4 3 2 1 2 3 4 5 9
```

`inundatie.out`
```
7
```


## Explicații

~[inundatie.png]

Toate exemplele se referă la figura de mai sus, diferă doar numărul cerinței. În toate $N=32, P=15$ și $S=45$.

**Primul exemplu**: Linia portocalie de înălțime $9$ este nivelul apei la momentul când toate coloanele devin acoperite de apă.
Cea mai înaltă coloană de apă este cea cu numărul $27$, având $8$ pătrățele de apă.

**Al doilea exemplu**: În imaginea de mai sus, liniile roșii arată nivelurile apei la momentul când apa acoperă coloana de la poziția $P=15$. Observăm că sunt $21$ de pătrățele de apă sub linie, deci este nevoie de $21$ de secunde pentru a acoperi coloana $15$.

**Al treilea exemplu**: Linia verde arată nivelul apei după $42$ de secunde. Ea acoperă coloana numărul $29$. Lăsând apa să curgă încă $3$ secunde (până la cele $S=45$ secunde) nivelul nu se ridică suficient pentru a ajunge la coloana $30$ deoarece ar mai fi nevoie de $5$ pătrățele de apă, adică încă $5$ secunde.

**Al patrulea exemplu**: Cea mai din stânga coloană pe care o vom reduce cu unu este coloana numărul $7$. Astfel apa va ajunge cu $5$ secunde mai devreme la coloana $P=15$. Linia maro (linia de apă de înălțime $6$ care se întinde de la coloana $2$ la coloana $6$) arată cele $5$ pătrățele cu care reducem timpul. Orice altă coloană am reduce nu va ajunge așa repede.
