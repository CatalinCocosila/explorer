Șoricelul Remy dorește să depoziteze cubulețele de cașcaval pe care le-a adunat. El a construit un depozit pe o suprafață dreptunghiulară și l-a compartimentat în $N \cdot M$ camere identice. În fiecare cameră șoricelul a depozitat o cantitate de cubulețe de cașcaval (ca în $Figura \ A$) și a stabilit că va mânca în fiecare zi câte un cubuleț de cașcaval din fiecare cameră în care există cașcaval. Planul său este stricat de John, șoricelul leneș din casa vecină, căruia nu-i place să-și strângă singur cașcaval, așa că s-a hotărât să fure din depozitul lui Remy. Pentru că John este pasionat de matematică s-a hotărât ca în fiecare seară, după ce vecinul său a terminat de mâncat, să se plimbe prin depozit și să fure tot cașcavalul din camerele în care găsește un număr pătrat perfect de cubulețe de cașcaval. John intră în depozit prin camera din colțul stânga sus, de coordonate $(1, 1)$, parcurge prima linie de la prima la ultima coloană, apoi a doua linie de la ultima coloană, până la prima și așa mai departe, până când termină de vizitat toate camerele (ca în $Figura \ B$).

~[soricel.png|align=center]

# Cerinţă

Scrieți un program care să determine:

1. Numărul de zile în care se va goli depozitul lui Remy și câte camere va goli John în ziua $K$.
2. Numărul maxim de camere consecutive golite de acesta într-o zi și ziua în care se va întâmpla acest lucru.

# Date de intrare

Fișierul de intrare `soricel.in` conține pe prima linie numărul natural $P$ reprezentând cerința din problemă care trebuie rezolvată. Pe a doua linie vor fi cele trei numere naturale nenule $N$, $M$ și $K$, separate prin câte un spațiu, cu semnificațiile din enunț.
Pe fiecare dintre următoarele $N$ linii se află câte $M$ numere naturale separate prin câte un spațiu, reprezentând numărul de cubulețe de cașcaval $C_{ij}$ depozitate în camera de coordonate $(i, j)$.

# Date de ieșire

Dacă valoarea lui $P$ este $1$, fişierul de ieşire `soricel.out` va conține pe prima linie cele două valori conform cerinței $1$, adică numărul de zile în care se va goli depozitul și numărul de camere golite de John în ziua $K$. Valorile vor fi afișate în ordinea cerută și separate printr-un spațiu.
Dacă valoarea lui $P$ este $2$, fişierul de ieşire `soricel.out` va conține pe prima linie cele două valori conform cerinței $2$, adică numărul maxim de camere consecutive golite de John într-o zi și numărul zilei în care se va întâmpla acest lucru. Valorile vor fi afișate în ordinea cerută și separate printr-un spațiu.

# Restricţii și precizări

* $1 \leq N \leq 200$
* $1 \leq M \leq 200$
* $0 \leq C_{ij} \leq {10}^{8}$
* $1 \leq K \leq$ numărul de zile până când depozitul va fi gol
* există cel puțin o cameră care conține mai mult de un cubuleț de cașcaval;
* numărul total de bucăți de cașcaval furate din camere consecutive într-o zi nu va depăși ${10}^{9}$
* ziua în care începe să mănânce Remy este considerată ziua $1$
* dacă există două sau mai multe zile în care John golește un număr egal de camere consecutive, se va afișa ziua în care a mâncat cele mai multe cubulețe de cașcaval, iar dacă și aceste cantități sunt egale, se va afișa numărul zilei cu valoarea cea mai mare
* considerăm că liniile se numerotează de sus în jos începând cu $1$, iar coloanele de la stânga la dreapta începând cu $1$
* pentru rezolvarea corectă a cerinței $1$ se acordă $40$ de puncte, iar dacă pentru fiecare test se afișează corect doar prima valoare, se acordă jumătate din punctajul aferent testului respectiv
* pentru prima cerință vor exista și teste în valoare de $20$ de puncte, pentru care $0 \leq C_{ij} \leq 1 \ 000$, iar $N, M \leq 30$
* pentru rezolvarea corectă a cerinței $2$ se acordă $60$ de puncte, iar dacă pentru fiecare test se afișează corect doar prima valoare, se acordă două treimi din punctajul aferent testului respectiv

# Exemplul 1

`soricel.in`
```
1
5 4 1
2 6 5 10
25 16 0 5
100 17 67 3
20 104 8 13
53 13 55 47
```

`soricel.out`
```
19 5
```

## Explicaţie

La finalul primei zile, depozitul va arăta astfel:
**0** $5$ **0 0**
$24 \ 15$ **0 0**
$99$ **0** $66 \ 2$
$19 \ 103 \ 7 \ 12$
$52 \ 12 \ 54 \ 46$
deoarece Remy a mâncat câte un cubuleț din fiecare cameră și apoi John a golit camerele în care numărul de cubulețe rămase era pătrat perfect. Urmând aceleași etape, în fiecare zi Remy va putea să mănânce timp de $19$ zile din depozit (după $19$ zile toate camerele sunt goale deoarece toate numerele au ajuns să fie pătrate perfecte sau valori nule).
În ziua $1$ John va fura cașcavalul din $5$ camere, cele care au coordonatele: $(1, 1)$, $(1, 3)$, $(1, 4)$, $(2, 4)$, $(3, 2)$.

# Exemplul 2

`soricel.in`
```
2
5 4 1
2 6 5 10
25 16 0 5
100 17 67 3
20 104 8 13
53 13 55 47
```

`soricel.out`
```
6 4
```

## Explicaţie

În ziua a $4$-a John va goli $6$ camere, cele cu coordonatele: $(4, 4)$, $(4, 3)$, $(4, 2)$, $(4, 1)$, $(5, 1)$ și $(5, 2)$. Aceasta este cea mai lungă secvență de camere consecutive golite în aceeași zi.
