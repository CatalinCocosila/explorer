**Românii au talent!** Atraşi de marele premiu oferit de organizatorii concursului „Românii au talent”, la preselecţia organizată la Piatra Neamţ au venit foarte mulţi români să demonstreze că au talent.
La înscriere, fiecare participant a primit câte un număr de concurs, reprezentat de un număr natural nenul. Unii dintre participanţi pot avea statut special, fiind admişi direct în semifinale, ca urmare a rezultatelor deosebite obţinute la ediţiile anterioare, numărul de concurs primit de aceştia având proprietatea că toate cifrele lui pot fi aranjate astfel încăt să formeze un număr palindrom.
Printre numerele de concurs primite de participanţii cu statut special, există numere care au în scrierea lor zecimală un număr maxim de cifre distincte. Cel mai mic dintre aceste numere reprezintă numărul de concurs al participantului VIP.

# Cerinţă

Scrieţi un program care citeşte numărul natural $n$ (reprezentând numărul de participanţi înscrişi la concurs), $n$ numere naturale (reprezentând numerele de concurs ale celor $n$ participanţi) şi determină:
1. numărul $x$ de participanţi admişi direct în semifinale
2. numărul $y$ de concurs al participantului VIP, dacă există un astfel de participant printre cei înscrişi

# Date de intrare

Fişierul de intrare `talent.in` conţine pe prima linie numărul $n$ de participanţi, iar pe fiecare dintre următoarele $n$ linii câte un număr natural reprezentând numărul de concurs al unui participant.

# Date de ieşire

Fişierul de ieşire `talent.out` va conţine pe prima linie cele două valori $x$ şi $y$, separate printr-un singur spaţiu, în această ordine. Dacă nu există participanţi admişi direct în semifinală, atunci prima linie a fişierului va conţine două valori nule, separate printr-un singur spaţiu: $0 \ 0$.

# Restricţii şi precizări

* $0 \lt n \leq 15 \ 000$
* numerele de concurs sunt distincte două câte două şi sunt mai mici sau egale cu $2 \ 000 \ 000 \ 000$
* un număr palindrom este un număr natural care este egal cu numărul natural obţinut prin scrierea în ordine inversă a cifrelor lui (de exemplu, numărul $12021$ este un număr palindrom)
* pentru rezolvarea corectă a primei cerinţe se acordă $50\%$ din punctaj, iar pentru rezolvarea corectă a celei de a doua cerinţe se acordă $50\%$ din punctaj.

# Exemplu

`talent.in`
```
8
17864
9900
90321
4704
351
83181
46476
7432
```

`talent.out`
```
3 46476
```

## Explicaţie

Sunt $3$ participanţi calificaţi direct în semifinală. Numerele lor de concurs sunt numere ale căror cifre pot fi aranjate astfel încât să formeze un palindrom: $9900$ (format din $2$ cifre distincte), $83181$ (format din $3$ cifre distincte) şi $46476$ (format din $3$ cifre distincte). Dintre acestea, cel mai mic număr format dintr-un număr maxim de cifre distincte este $46476$ reprezentând numărul de concurs al participantului VIP.
