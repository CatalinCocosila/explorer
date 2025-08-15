Avionul cu care am zburat ultima dată are o organizare foarte simplă. Pe fiecare rând sunt $6$ scaune, câte $3$ pe fiecare parte, având la mijloc culoarul pe care intră și ies pasagerii. Rândurile de scaune pentru pasageri sunt numerotate de la $1$ la $NR$, începând dinspre cabina piloților avionului. Pe fiecare rând, scaunele sunt numerotate cu cifre de la $1$ la $6$.

Urcarea în avion se face pe una dintre cele două scări: scara $1$, situată în partea din față a avionului, și scara $2$, situată în partea din spate a acestuia.

De la intrarea în avion fiecare pasager parcurge $3$ metri până la culoarul principal, după care înaintează pe culoar parcurgând câte $1$ metru pentru fiecare rând de scaune. De pe culoar până la scaunele $3$ sau $4$ se parcurge $1$ metru, până la scaunele $2$ sau $5$ se parcurg $2$ metri, iar până la scaunele $1$ sau $6$ se parcurg $3$ metri.

În așteptare sunt $n$ pasageri, care trebuie să urce în avion pe una din cele două scări. Pe biletul fiecărui pasager este scris locul pe care trebuie să îl ocupe în avion, sub forma perechii (rând, scaun) (de exemplu $5 \ 2$ – rândul $5$ scaunul $2$).

~[avion3.png|align=center]

Se cunosc numărul de rânduri de scaune $NR$ din avion, numărul $n$ de pasageri și locul fiecărui pasager.

# Cerință

* Determinați pentru fiecare dintre cei $n$ pasageri, scara pe care trebuie să urce în avion, astfel încât distanța parcursă de el până la locul său să fie minimă.
* Determinați distanța totală minimă parcursă de pasageri în avion. Distanța totală parcursă este egală cu suma distanțelor minime parcurse de cei n pasageri până la locuurile lor.

# Date de intrare

Fișierul de intrare `avion.in` conține pe prima linie trei numere naturale: $c$, reprezentând cerința care trebuie rezolvată ($c \in \{1, 2\}$), $NR$ și $n$, cu semnificațiile din enunț. 
Fiecare dintre următoarele $n$ linii conține câte o pereche de numere naturale, reprezentând locul unui pasager, în ordinea în care aceștia stau în așteptare. Numerele aflate pe aceeași linie a fișierului sunt separate prin câte un spațiu.

# Date de ieșire

Pentru cerința $1$ (dacă $c=1$) fișierul de ieșire `avion.out` conține $n$ linii, pe fiecare linie fiind cifra $1$ sau cifra $2$, reprezentând scara pe care urcă fiecare pasager, în ordinea în care aceștia au stat în așteptare.

Pentru cerința $2$ (dacă $c=2$) fișierul de ieșire `avion.out` conține un număr natural, reprezentând distanța totală minimă determinată la cerința $2$.

# Restricții și precizări

* $c \in \{1, 2\}$
* $6 \leq NR \leq 50$, $NR$ este număr par
* $1 \leq n \leq 6 \cdot NR$
* Există zboruri în care nu sunt ocupate toate locurile;

| # | Scor | Restricții |
|---|------|------------|
| 1 | 50 | Pentru cerința $1$ |
| 2 | 50 | Pentru cerința $2$ |

# Exemplul 1

`avion.in`
```
1 10 7
5 2
9 4
5 1
7 5
1 6
8 3
10 1
```

`avion.out`
```
1
2
1
2
1
2
2
```

## Explicație

Se rezolvă cerința $1$.

Este un avion cu $10$ rânduri de scaune și sunt $7$ pasageri. 

Dacă ar urca pe scara $1$, primul pasager ar parcurge $3+5+2$ metri, iar dacă ar urca pe scara $2$ ar parcurge $3+6+2$ metri. Ca urmare, va alege să urce pe scara $1$.

Analog se procedează și pentru ceilalți pasageri. Astfel, pasagerii cu numerele de ordine $1$, $3$ și $5$ urcă pe scara $1$, iar pasagerii cu numerele de ordine $2$, $4$, $6$ și $7$ urcă pe scara $2$.

# Exemplul 2


`avion.in`
```
2 10 7
5 2
9 4
5 1
7 5
1 6
8 3
10 1
```

`avion.out`
```
57
```

## Explicație

Se rezolvă cerința $2$. 

Este un avion cu $10$ rânduri de scaune și sunt $7$ pasageri. 

Pentru a parcurge distanța minimă până la locul său, pasagerul $1$ urcă pe scara $1$, parcurge $3$ metri până la culoarul central apoi parcurge $5$ metri pe culoar, apoi $2$ metri până la scaunul alocat ($5+2$). El parcurge astfel $10$ metri până la locul său.

~[avion.png|align=center]

Pasagerul $2$ urcă pe scara $2$ și parcurge $6$ metri ($3+2+1$). 
Pasagerul $3$ urcă pe scara $1$ și parcurge $11$ metri ($3+5+3$).
Pasagerul $4$ urcă pe scara $2$ și parcurge $9$ metri ($3+4+2$). 
Pasagerul $5$ urcă pe scara $1$ și parcurge $7$ metri. 
Pasagerul $6$ urcă pe scara $2$ și parcurge $7$ metri. 
Pasagerul $7$ urcă pe scara $2$ și parcurge $7$ metri.

În total au fost parcurși $57$ de metri.

