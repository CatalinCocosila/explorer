~[praslea1.png|align=right]
A fost odată ca niciodată un împărat puternic care avea o grădină minunată, situată pe un teren de formă dreptunghiulară din jurul palatului. În grădină creştea un măr cu mere de aur, dar împăratul nu a putut să se bucure vreodată de merele din pom deoarece grădina a fost mereu atacată de tâlhari şi merele au fost furate. Cu toate că aceasta a fost păzită zi şi noapte de cei mai viteji ostaşi din împărăţie, ei nu au putut face faţă tâlhăriilor. Deznădăjduit, împăratul şi-a pus în gând să taie pomul cu mere de aur, dar fiul său cel mic, Prâslea, l-a rugat să-l lase şi pe el să-şi încerce norocul. Prâslea a cugetat foarte bine la cele întâmplate şi a procedat astfel:

~[praslea2.png|align=right]
* a delimitat în grădină, de-a lungul acesteia, $N$ parcele alăturate, numerotate de la stânga la dreapta cu valori în ordine, de la $1$ la $N$. Dintre acestea, a dat spre pază fraţilor şi verişorilor săi $M$ parcele, iar restul de $N - M$ parcele oştenilor din împărăţie. Cele $N - M$ parcele date oştenilor sunt identice şi au fiecare lăţimea $L$
* a măsurat distanţa $D$ la care se află pomul cu merele de aur faţă de marginea din stânga a grădinii, pentru a întări chiar el paza parcelei în care e situat acesta

# Cerinţă

a) Cunoscând lăţimea fiecărei parcele, determinaţi cel mai mare număr de parcele alăturate, de lăţime $L$ fiecare, date spre pază oştenilor
b) Determinaţi numărul de ordine al parcelei în care se află pomul cu merele de aur.

# Date de intrare

Fişierul de intrare `praslea.in` conţine
* pe prima linie trei numere naturale $N$, $M$ şi $L$, în această ordine, despărţite prin câte un spaţiu, având semnificaţia din enunţ
* pe următoarele $M$ linii, câte două numere naturale $P_i$ şi $L_i$, despărţite prin câte un spaţiu, reprezentând numărul de ordine, respectiv lăţimea fiecărei parcele dintre cele $M$, dată spre pază fraţilor şi verişorilor
* pe următoarea linie un număr natural $D$, care reprezintă distanţa la care se află pomul cu merele de aur faţă de marginea din stânga a grădinii

# Date de ieşire

Fişierul de ieşire `praslea.out` va conţine pe prima linie un singur număr natural determinat conform cerinţei $a)$, iar pe cea de-a doua linie a fişierului un singur număr natural determinat conform cerinţei $b)$.

# Restricţii şi precizări

* $1 \leq N \leq 500 \ 000$ şi $1 \leq M \leq 10 \ 000$ şi $M < N$
* $1 \leq L, L_i \leq 4 \ 000 \ 000 \ 000$
* Nicio parcelă dintre cele $M$ nu are lăţimea egală cu $L$
* Dacă $D$ este exact pe linia ce desparte două parcele alăturate se consideră că pomul e situat în parcela din stânga
* Pentru rezolvarea corectă a cerinţei $a)$ se acordă $20\%$ din punctajul fiecărui test, iar pentru rezolvarea corectă a cerinţei $b)$ se acordă $80\%$ din punctajul fiecărui test.

# Exemplu

`praslea.in`
```
8 3 2
2 1
5 4
1 1
7
```

`praslea.out`
```
3
5
```

## Explicaţie

Sunt $8$ parcele: $3$ dintre ele au fost împărţite fraţilor şi verişorilor. Parcelele rămase pentru oşteni au toate lăţimea $2$. Dintre cele $3$ parcele: parcela $2$ are lăţimea $1$, parcela $5$ are lăţimea $4$ şi parcela $1$ are lăţimea $1$. Pomul cu mere de aur se află la distanţa $7$ faţă de marginea din stânga a grădinii.
Sunt $3$ parcele alăturate care au lăţimea egală cu $2$ (parcelele numerotate cu $6$, $7$ şi $8$).
Pomul se află în parcela cu numărul de ordine $5$.
