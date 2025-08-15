Tudor a primit un joc educaţional numit “Roboţel” cu ajutorul căruia va învăţa punctele cardinale Nord, Est, Sud, Vest. Jocul constă dintr-un roboţel care se deplasează pe o tablă de forma unei matrici pătratice, împărţită în $R$ linii şi $R$ coloane. Fiecare căsuţă, aflată la intersecţia dintre o linie şi o coloană, este fie căsuță „liberă”, fie căsuță *semnalizator*, caz în care este etichetată cu una din literele `N`, `E`, `S`, `V`, reprezentând $4$ sensuri posibile de deplasare. Când roboțelul ajunge într-o „căsuţă semnalizator”, el îşi schimbă sensul de deplasare astfel:

* Dacă căsuţa este etichetată cu `N` atunci roboţelul se va deplasa în continuare de jos în sus
* Dacă căsuţa este etichetată cu `E` atunci roboţelul se va deplasa în continuare de la stânga la dreapta
* Dacă căsuţa este etichetată cu `S` atunci roboţelul se va deplasa în continuare de sus în jos
* Dacă căsuţa este etichetată cu `V` atunci roboţelul se va deplasa în continuare de la dreapta la stânga

Două căsuțe semnalizator formează o pereche *blocantă* dacă:

* Se află pe aceeași linie și conțin literele `E` și `V`, căsuța cu `E` are coloana mai mică decât a celei etichetate cu `V` și între ele, pe aceeași linie nu există alte căsuțe semnalizatoare.
* Se află pe aceeași coloană și conțin literele `S` și `N`, căsuța cu `S` are linia mai mică decât a celei etichetate cu `N` și între ele, pe aceeași coloană nu există alte căsuțe semnalizatoare.

~[figura1.png|align=right]
În $Figura \ 1$, de exemplu, sunt $2$ perechi blocante: Perechea $(1, 2)$, $(5, 2)$ și perechea $(2,3)$, $(2, 5)$. Roboţelul porneşte din căsuţa $(1, 1)$, aflată pe prima linie și prima coloană şi dacă aceasta este liberă, se deplasează, în cadrul primei linii, de la stânga la dreapta. În cazul în care căsuța de pornire $(1, 1)$ este semnalizator, atunci roboțelul se va deplasa pe direcția indicată de litera cu care este etichetată.
Considerând că roboțelul se deplasează pe tablă, el se oprește **doar** în următoarele situații:

* Roboţelul intră într-o căsuţă liberă aflată pe prima sau ultima linie, respectiv prima sau ultima coloană, caz în care dacă s-ar menține sensul deplasării actuale roboțelul ar părăsi tabla
* Roboțelul intră într-o „căsuţă semnalizator” a unei perechi blocantă și se va opri în cealaltă căsuță a perechii

~[figura23.png|align=right]
De exemplu, în $Figura \ 2$, roboțelul ajunge în căsuța liberă $(3, 5)$ unde se oprește. În $Figura \ 3$, roboțelul se va opri în căsuța $(4, 1)$ deoarece dacă ar schimba sensul spre Est, ar reveni în ultima căsuță semnalizator vizitată, $(4, 3)$.
Roboțelul înaintează o căsuță într-un pas, în sensul de deplasare.

# Cerinţe

Scrieţi un program care, cunoscând numărul $R$ de linii şi coloane și cele $K$ căsuţe semnalizator, determină:

1. Toate perechile blocante de pe tablă
2. Numărul de pași efectuați pe fiecare sens în parte: Nord, Est, Sud și Vest

# Date de intrare

Fişierul de intrare `robotel.in` conţine pe prima linie numărul natural $P$ reprezentând cerința din problemă care trebuie rezolvată, pe a doua linie, separate printr-un spaţiu numărul natural $R$ şi numărul natural $K$, iar pe următoarele $K$ linii, două numere naturale și un caracter, separate prin câte un spațiu reprezentând, în ordine, linia, coloana şi litera unei căsuţe semnalizator.

# Date de ieşire

Dacă valoarea lui $P$ este $1$, se va rezolva doar cerința $1$. Fişierul de ieşire `robotel.out` va conține perechile blocante, pentru fiecare pereche de căsuțe afișându-se $4$ numere naturale separate printr-un spaţiu, reprezentând, în ordine, linia, coloana primei căsuțe semnalizator, respectiv linia și coloana celei de-a doua căsuțe semnalizator. Perechile de căsuțe vor fi afișate pe linii ordonat după regula: o pereche $L_1 \ C_1 \ L_2 \ C_2$ va fi afișată înaintea perechii $L_3 \ C_3 \ L_4 \ C_4$ dacă $L_1 < L_3$ sau $L_1 = L_3$ și $C_1 < C_3$, adică se va afișa mai întâi perechea cu prima căsuță având linia mai mică decât a primei căsuțe din cealaltă pereche sau la linii egale, va fi afișată perechea cu coloana mai mică. Dacă nu există astfel de perechi de căsuțe, în fișierul de ieșire se va afișa valoarea $0$.
Dacă valoarea lui $P$ este $2$, se va rezolva doar cerința $2$. Fişierul de ieşire robotel.out va conţine $4$ numere naturale separate printr-un spaţiu, reprezentând, în ordine, numărul de pași parcurși de roboţel în sensurile Nord, Est, Sud, și Vest.

# Restricţii şi precizări

* $2 \leq R \leq 200$
* $1 \leq K \leq R \cdot R$
* Pentru rezolvarea corectă a fiecărei cerinţe se obțin câte $50$ de puncte
* O căsuță semnalizator conține o singură literă
* Pentru cerința $2$ se garantează că în toate testele deplasarea roboțelului se oprește!

# Exemplul 1

`robotel.in`
```
1
5 4
1 3 S
3 1 E
5 1 N
5 3 V
```

`robotel.out`
```
0 
```

## Explicaţie

Nu există perechi blocante pe tablă care ar putea opri roboţelul.

# Exemplul 2

`robotel.in`
```
1
5 3
1 3 S
4 1 E
4 3 V
```

`robotel.out`
```
4 1 4 3 
```

## Explicaţie

Perechea blocantă este alcătuită din căsuțele $(4, 1)$ cu eticheta `E` și $(4, 3)$ cu eticheta `V`. Dacă roboțelul ajunge în una dintre aceste căsuțe, atunci acesta se va opri în cealaltă căsuță.

# Exemplul 2

`robotel.in`
```
1
5 5
1 3 S
2 5 S
4 1 E
4 3 V
5 5 N
```

`robotel.out`
```
2 5 5 5
4 1 4 3
```

## Explicaţie

Căsuţa semnalizator de pe linia $2$, coloana $5$ are eticheta `S`, iar căsuţa semnalizator de pe linia $5$, coloana $5$ are eticheta `N`. Dacă roboțelul ajunge în una dintre aceste căsuțe, atunci acesta se va opri în cealaltă căsuță. Acelaşi lucru se întâmplă pentru căsuţa cu litera `E` de pe linia $4$, coloana $1$ şi căsuţa cu litera `V` de pe linia $4$, coloana $3$.

# Exemplul 3

`robotel.in`
```
1
5 5
1 2 S
2 1 E
2 3 E
2 5 V
5 2 N
```

`robotel.out`
```
1 2 5 2
2 3 2 5
```

## Explicaţie

Prima pereche blocantă este $(1, 2)$, $(5, 2)$.
A doua pereche blocantă este $(2, 3)$, $(2, 5)$. Perechea $(2, 1)$, $(2, 5)$ nu este validă deoarece conține un alt semnalizator între ele (vezi $Figura \ 1$).

# Exemplul 4

`robotel.in`
```
2
5 3
1 3 S
4 1 E
4 3 V
```

`robotel.out`
```
0 2 3 2
```

## Explicaţie

Numărul de pași efectuați pe sensul:
Nord: $0$ pași
Est: $2$ pași în căsuțele $(1, 2)$, $(1, 3)$
Sud: $3$ pași în căsuțele $(2, 3)$, $(3, 3)$, $(4, 3)$
Vest: $2$ pași în căsuțele $(4, 2)$, $(4, 1)$

# Exemplul 5

`robotel.in`
```
2
5 4
1 3 S
3 1 E
5 1 N
5 3 V
```

`robotel.out`
```
2 6 4 2
```

## Explicaţie

Numărul de pași efectuați pe sensul:
Nord: $2$ pași în căsuțele $(4, 1)$, $(3, 1)$
Est: $6$ pași în căsuțele $(1, 2)$, $(1, 3)$, $(3, 2)$, $(3, 3)$, $(3, 4)$, $(3, 5)$
Sud: $4$ pași în căsuțele $(2, 3)$, $(3, 3)$, $(4, 3)$, $(5, 3)$
Vest: $2$ pași în căsuțele $(5, 2)$, $(5, 1)$
