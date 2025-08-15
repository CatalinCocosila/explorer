~[xy1.png|align=right]
Una dintre pasiunile celor doi fraţi Rareş şi Bogdan este de a inventa jocuri. Cel mai recent joc inventat de ei se numeşte *xy* şi se joacă de către doi jucători ce completează pătrate alternativ pe o suprafaţă dreptunghiulară împărţită în $n \times m$ pătrate identice, ca în figurile alăturate. Se consideră că pătratul din colţul stânga-sus al suprafeţei este poziţionat pe linia $1$ şi coloana $1$, iar pătratul din colţul dreapta-jos este poziţionat pe linia $n$ şi coloana $m$.
Se consideră mutare, etapa în care unul dintre jucători completează cel puţin un pătrat de pe suprafaţa dreptunghiulară. Mutările se execută alternativ, astfel:

* Primul jucător alege un pătrat, îl completează cu caracterul `x` şi încearcă să traseze un `X` cât mai mare cu centrul în pătratul ales, ca în $Figura \ 3$, în care pătratul ales este poziţionat pe linia $3$ şi coloana $3$.
* Cel de-al doilea jucător alege şi el un pătrat, îl completează cu caracterul `y` şi încearcă să traseze un `Y` cât mai mare cu centrul în pătratul ales, ca în $Figura \ 4$, în care pătratul ales este poziţionat pe linia $3$ şi coloana $3$.

Tabla de joc din figurile alăturate conţine $6 \times 5$ pătrate poziţionate pe $6$ linii şi $5$ coloane. Cel mai mic `X`, respectiv cel mai mare, care poate fi trasat pe această tablă de joc este cel din $Figura \ 1$, respectiv cel din $Figura \ 3$, prin completarea cu caracterul `x` a pătratelor necompletate, putând fi trasat în orice loc corespunzător de pe tabla de joc. 
Cel mai mic `Y`, respectiv cel mai mare, care poate fi trasat pe această tablă de joc prin completarea cu caracterul `y` a pătratelor necompletate, este cel din $Figura \ 2$, respectiv cel din $Figura \ 4$, putând fi trasat în orice loc corespunzător de pe tabla de joc.
Jocul se încheie dacă se ajunge într-una dintre următoarele situaţii:

* unul dintre jucători alege ca centru un pătrat completat de oricare jucător la o mutare anterioară
* jucătorul ce trebuie să efectueze mutarea, completează pe tabla de joc doar pătratul ales ca centru şi nu poate trasa X-ul sau Y-ul
* s-au efectuat toate mutările propuse

Pentru că cei doi copii sunt fraţi, nu-i interesează cine câştigă.

# Cerinţă

Scrieţi un program care citeşte trei numere naturale $n$, $m$, $k$ şi un şir de $k$ mutări pe care cei doi fraţi doresc să le efectueze, alternativ, în ordinea dată şi apoi determină:

* numărul maxim $a$ de pătrate completate în timpului unei mutări
* numărul $b$ de pătrate rămase libere după încheierea jocului
* numărul maxim $c$ de pătrate completate care formează o suprafaţă dreptunghiulară pe tabla de joc la finalul jocului

# Date de intrare

Fişierul de intrare `xy.in` conţine pe prima linie trei numere naturale $n$, $m$ şi $k$, separate prin câte un spaţiu, cu semnificaţia din enunţ. Următoarele $k$ linii conţin fiecare câte două numere naturale $i$ şi $j$, separate prin câte un spaţiu, reprezentând linia $i$ şi coloana $j$ unde este poziţionat pătratul ales drept centru pentru a se efectua mutarea propusă.

# Date de ieşire

Fişierul de ieşire `xy.out` va conţine pe prima linie cele trei numere determinate de program: $a$, $b$ şi $c$, separate prin câte un spaţiu, în această ordine, cu semnificaţia din enunţ.

# Restricţii şi precizări

* $0 \lt n, m, i, j \lt 101$
* $0 \lt i \leq n$
* $0 \lt j \leq m$
* $0 \lt k \lt 10 \ 000$
* $n, m, i, j, k$ sunt numere naturale
* iniţial, toate pătratele de pe tabla de joc sunt necompletate;
* completarea unui pătrat se realizează prin scrierea caracterului `x` sau `y` în acesta, primul jucător completând doar cu caracterul `x`, iar al doilea jucător doar cu caracterul `y`
* fiecare jucător completează pe tablă mai întâi pătratul ales ca centru şi apoi încearcă trasarea semnului său
* în timpul unei mutări, la trasarea unui `X`, respectiv `Y`, jucătorii pot utiliza pătrate completate într-o mutare anterioară, fără să le numere la această mutare
* o suprafaţă dreptunghiulară formată din pătrate completate de pe tabla de joc poate fi constituită din:
1. cel puţin un pătrat completat
2. mai multe pătrate completate situate pe o aceeaşi linie şi coloane consecutive
3. o mai multe pătrate completate situate pe o aceeaşi coloană şi linii consecutive
4. mai multe pătrate completate situate pe linii şi coloane consecutive	
* pentru rezolvarea corectă a primei cerinţei se acordă $40\%$ din punctaj, pentru rezolvarea corectă a celei de a doua cerinţe $30\%$ din punctaj şi pentru rezolvarea corectă a celei de a treia cerinţe $30\%$ din punctaj.

# Exemplu

`xy.in`
```
6 5 5
3 2
4 4
3 4
2 4
5 4
```

`xy.out`
```
5 17 9
```

## Explicaţie

La prima mutare, primul jucător trasează un `X`, cu centrul în linia $3$ şi coloana $2$, prin completarea a $5$ pătrate cu caracterul `x`.
La a doua mutare, al doilea jucător trasează un `Y` cu centrul în linia $4$ şi coloana $4$, prin completarea a $4$ pătrate cu caracterul `y`.
La a treia mutare, primul jucător trasează un `X`, cu centrul în linia $3$ şi coloana $4$, prin completarea doar a $3$ pătrate cu caracterul `x` deoarece foloseşte $2$ pătrate completate la prima mutare.
La a patra mutare, al doilea jucător reuşeşte să completeze cu caracterul `y` doar pătratul ales ca centru, situat în linia $2$ şi coloana $4$, şi jocul se încheie deoarece nu se poate realiza trasarea lui `Y`.
~[xy2.png|align=center]
A cincea mutare propusă nu se efectuează întrucât jocul s-a încheiat.
