Cifra de control a unui număr natural se obţine prin adunarea cifrelor numărului; dacă rezultatul obţinut este o cifră, aceea este cifra de control a numărului dat; în caz contrar, se calculează suma cifrelor rezultatului obţinut, aplicând în mod repetat acest procedeu până când se obţine un rezultat de o singură cifră.
De exemplu cifra de control a numărului $998 \ 979$ este $6$, deoarece: $9 + 9 + 8 + 9 + 7 + 9 = 51$, apoi $5 + 1 = 6$

# Cerinţă

Fiind date două numere naturale $a$ şi $b$, precum şi o cifră $c$, să se determine câte numere cuprinse între $a$ şi $b$, inclusiv $a$ şi $b$, au cifra de control egală cu $c$.

# Date de intrare

Fişierul de intrare `control.in` conţine pe prima linie valorile $a \ b \ c$ separate prin câte un spaţiu.

# Date de ieşire

Fişierul de ieşire `control.out` va conţine o singură linie pe care va fi scris un număr natural $k$ care reprezintă numărul de valori cuprinse între $a$ şi $b$ (inclusiv) care au cifra de control egală cu $c$.

# Restricţii şi precizări

* $1 \leq a \leq b \leq 2 \ 000 \ 000 \ 000$
* $1 \leq c \leq 9$

# Exemplu

`control.in`
```
10056 10105 7
```

`control.out`
```
6
```

## Explicaţie

Cele $6$ numere care au cifra de control $7$ cuprinse între $10056$ şi $10111$ sunt:
$10060: 1 + 0 + 0 + 6 + 0 = 7$
$10069: 1 + 0 + 0 + 6 + 9 = 16; 1 + 6 = 7$
$10078: 1 + 0 + 0 + 7 + 8 = 16; 1 + 6 = 7$
$10087: 1 + 0 + 0 + 8 + 7 = 16; 1 + 6 = 7$
$10096: 1 + 0 + 0 + 9 + 6 = 16; 1 + 6 = 7$
$10105: 1 + 0 + 1 + 0 + 5 = 7$
