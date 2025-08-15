Robinson are un teren de forma pătrată, ca un tablou bidimensional, cu latura de $m$ unităţi (cu $m^2$ parcele). O parcelă este un pătrat elementar al tabloului. Liniile şi coloanele sunt numerotate de la $1$ la $m$: liniile de sus în jos, iar coloanele de la stânga la dreapta. El a semănat grâu şi s-a rugat să aibă o recoltă bogată. Ruga i-a fost ascultată şi grâul a răsărit astfel: în parcelele din prima linie, recoltele au fost de la stânga spre dreapta: $n$, $n+1$, $n+2$, … boabe de grâu şi în parcelele de pe prima coloană, recoltele au fost de sus în jos: $n$, $n+1$, $n+2$, $\dots$ boabe de grâu.
 
Apoi, dacă parcurgem celelalte parcele linie cu linie începând cu a doua linie, iar în cadrul unei linii, începând cu coloana a doua, atunci recolta din linia $i$ şi coloana $j$ a fost egală cu suma recoltelor de pe poziţiile ($i-1,j$) şi ($i,j-1$). Dacă aceste sume depăşesc $999$, atunci ele vor fi înlocuite cu numerele formate din ultimele $3$ cifre ale sumei respective (de exemplu, dacă $suma=1234$, se va reţine numărul $234$).

Odată cu împlinirea rugii, Robinson a avut un vis în care, pentru a avea noroc şi anul viitor, i se cerea ca în prima zi să culeagă grâul astfel: să plece de la o poziţie dată (linia $l$ şi coloana $c$), de unde va culege toate boabele de pe acea poziţie. Apoi, el va calcula restul împărţirii la $4$ a numărului de boabe de pe acea poziţie. Poziţia următoare pentru cules va fi cea vecină din Nord, dacă restul este $0$, cea vecină din Est, dacă restul este $1$, cea vecină din Sud, dacă restul este $2$, sau cea vecină din Vest, dacă restul este $3$.
 
Drumul acesta pe care l-a visat se va opri fie când la poziţia următoare este în afara terenului, fie când poziţia următoare este una de pe care s-a cules deja recolta. 

# Cerinţă

Scrieţi un program care să citească numerele $m$, $n$, $l$ şi $c$ şi care să determine:
* recoltele de pe fiecare parcelă;
* succesiunea parcelelor vizitate, în ordinea în care s-a cules grâul în drumul visat;

# Date de intrare

De pe prima linie a fişierului de intrare `robinson.in` se citesc numerele $m \ n \ l \ c$ în această ordine, separate de câte un spaţiu; $l$ şi $c$ indică o poziţie corectă din tablou.

# Date de ieșire

Pe prima linie a fişierului de ieşire `robinson.out` se va afişa valoarea $a_{mm}$. Următoarele linii vor conţine câte două numere naturale separate de un spaţiu indicând coordonatele fiecărei parcele din drumul parcurs: primul număr indică linia iar al doilea număr coloana parcelei vizitate.

# Restricții și precizări

* $m$, $n$, $l$, $c$ sunt numere naturale,
* $1 \leq m \leq 20$
* $1 \leq n \leq 100$;
* Pentru determinarea corectă a valorii $a_{mm}$ se acordă $30\%$ din punctaj.
* Pentru indicarea corectă si a drumului parcurs se acordă încă $70\%$ din punctaj.

# Exemplul 1

`robinson.in`
```
4 55 1 3
```

`robinson.out`
```
130
1 3
1 4
2 4
2 3
```

## Explicație

$m=4$, adică tabloul pătrat are latura de $4$ unităţi. $n=55$, deci prima linie este: $55$, $56$, $57$ şi $58$. La fel şi prima coloană: $55$, $56$, $57$, $58$, de sus în jos. Apoi linia a doua se completează astfel: $a_{22} = a_{12}+a_{21}=56+56=112$, apoi $a_{23} = a_{13}+a_{22}=57+112=169$; apoi $a_{24}=a_{14}+a_{23}$ etc. Linia a treia, se va completa astfel: $a_{32}=a_{22}+a_{31}$; apoi $a_{33}=a_{23}+ a_{32}$, apoi $a_{34}= a_{24}+ a_{33}$ etc.

Atentie: $a_{44}=a_{34}+a_{43}=565+565=1130$ şi se reţine $a_{44}=130$, adică numărul format din ultimele $3$ cifre ale lui $1130$.

b) Poziţia de plecare: $a_{13}=57$, cu rest $1$, deci direcţia este Est. Aici avem $a_{14}=58$, care are rest $2$, deci direcţia este Sud. Aici $a_{24}=227$, cu rest $3$, deci direcţia este Vest, unde avem $a_{23}=169$. Acesta are restul 1 şi direcţia este Est, şi ar trebui să se revină pe poziţia ($2,4$) pe care a mai fost. S-au afişat poziţiile ($1,3$),($1,4$),($2,4$) şi ($2, 3$).

Dacă în loc de $l=1$ şi $c=3$ am fi avut $l=3$ şi $c=4$, atunci $a_{34} = 565$, cu rest $1$, deci direcţia Est şi ar trebui să iasă din teren. Drumul acesta ar avea un pas.