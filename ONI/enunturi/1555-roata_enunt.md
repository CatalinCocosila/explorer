Cei $N$ elevi participanți la olimpiadă au fost invitați să admire panorama orașului din roata cu $N$ locuri instalată în Orășelul Copiilor. Fiecare elev poartă un tricou inscripționat cu un număr natural, numerele de pe tricouri fiind diferite două câte două și având valori cuprinse între $1$ și $N$. Inițial, ei ocupă toate cele $N$ locuri din roată, începând cu cel mai de jos scaun și continuând cu următoarele scaune, în sensul acelor de ceasornic. 

Roata se mișcă circular, în sensul acelor de ceasornic, cu un număr de poziții, se oprește și elevul aflat pe scaunul cel mai de jos coboară. În continuare, ea se rotește în același sens, un număr **mai mare** de poziții, apoi se oprește și coboară elevul aflat pe scaunul cel mai de jos și așa mai departe până când coboară toți elevii.


# Cerință

Cunoscându-se numărul $N$ de elevi, precum și numerele de pe tricouri, în ordinea în care elevii se află inițial în roată, să se determine $N$ numere reprezentând pozițiile cu care roata se mișcă circular pentru a coborî fiecare elev, astfel încât elevii să coboare din roată în ordinea crescătoare a numerelor de pe tricou.

Cele $N$ numere de poziții trebuie să fie în ordine strict crescătoare, iar numărul total de poziții trebuie să
fie minim.


# Date de intrare

Din fișierul `roata.in` se citește de pe prima linie $N$, reprezentând numărul de elevi, și apoi se citesc de pe linia a doua $N$ numere naturale distincte, separate prin câte un spațiu, reprezentând numerele de pe tricouri.

# Date de ieșire

În fișierul `roata.out` se vor scrie $N$ numere, în ordine strict crescătoare, reprezentând numerele de poziții cerute.

# Restricții și precizări

* $2 \leq N \leq 50 \ 000$;
* Pentru $50\%$ din punctaj, $2 \leq N \leq 1 \ 000$;
* Dacă, inițial, elevul cu tricoul inscripționat cu $1$ se află în scaunul cel mai de jos al roții, el va coborî după ce roata se va mișca $N$ poziții și va ajunge din nou pe scaunul cel mai de jos.

# Exemplu

`roata.in`
```
6
6 1 3 4 5 2
```

`roata.out`
```
5 8 9 11 17 22
```

## Explicație

~[roata_0.png]

Inițial, elevii sunt așezați în sensul acelor de ceasornic, începând cu elevul cu tricoul $6$, care ocupă scaunul de jos.

~[roata_1.png]

1) Rotindu-se $5$ poziții în sensul acelor de ceasornic, elevul cu tricoul $1$ ajunge pe scaunul de jos și coboară.

~[roata_2.png]

2) Rotindu-se $8$ poziții în sensul acelor de ceasornic, elevul cu ricoul $2$ ajunge pe scaunul de jos și coboară.

~[roata_3.png]

3) Rotindu-se $9$ poziții în sensul acelor de ceasornic, elevul cu tricoul $3$ ajunge pe scaunul de jos și coboară.

~[roata_4.png]

4) Rotindu-se $11$ poziții în sensul acelor de ceasornic, elevul cu tricoul $4$ ajunge pe scaunul de jos și coboară.

~[roata_5.png]

5) Rotindu-se $17$ poziții în sensul acelor de ceasornic, elevul cu tricoul $5$ ajunge pe scaunul de jos și coboară.

~[roata_6.png]

6) Rotindu-se $22$ de poziții în sensul acelor de ceasornic, ultimul elev, cu tricoul $6$, ajunge pe scaunul de jos și coboară.

