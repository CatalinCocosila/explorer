_Cif-Oji6_ este o imprimantă matriceală numită și imprimantă cu ace, deoarece tipărirea se realizează prin impactul acelor capului de imprimare pe o bandă cu tuș. Acele sunt aranjate într-o grilă dreptunghiulară formată din $5$ rânduri de ace, pe fiecare rând aflându-se la distanțe egale câte $3$ ace, așa cum se observă în figura următoare.

~[imprimanta-1.png]

Prin acționarea diferitelor combinații de ace din grilă, se definește forma fiecărei cifre ce permite tipărirea acesteia prin puncte, în felul următor:

~[imprimanta-2.png]

De exemplu, cifra $2$ va fi tipărită prin $11$ puncte ca rezultat al acționării a $11$ ace din grilă: din primul rând de ace al grilei se vor acționa toate cele $3$ ace, din următorul rând doar acul din dreapta, apoi de pe următorul rând toate cele $3$ ace, apoi acul din stânga de pe penultimul rând iar din ultimul rând toate cele $3$ ace.

# Cerință

1. Știind că imprimanta Cif-Oji6 a tipărit numărul $N$, determinați care este cea mai mare cifră a numărul $N$ pentru care s-a acționat un număr minim de ace ale grilei.
2. Știind că imprimanta mai are tuș pe bandă doar pentru imprimarea a $K$ puncte, determinați **cel mai mare număr natural** ce poate fi tipărit prin **exact $K$ puncte**.

# Date de intrare

Fișierul de intrare `imprimanta.in` conține pe prima linie două numere naturale $N$ și $K$ separate printr-un spațiu, unde $N$ reprezintă numărul tipărit de imprimantă iar $K$ numărul de puncte pentru care imprimanta mai are tuș.

# Date de ieșire

Fișierul de ieșire `imprimanta.out` va conține:

* pe prima linie un singur număr natural ce reprezintă cea mai mare cifră a numărul $N$ pentru care s-a acționat un număr minim de ace ale grilei.
* pe cea de-a doua linie a fișierului se va scrie **cel mai mare număr natural** ce poate fi tipărit prin $K$ puncte.

# Restricții și precizări

* $10 \leq N \leq 10^{15}$;
* $14 \leq K \leq 100 \ 000$;
* Pentru rezolvarea corectă a cerinței $1$ se acordă $30$% din punctajul fiecărui test iar pentru rezolvarea corectă a cerinței $2$ se acordă $70$% din punctajul fiecărui test.

# Exemplul 1

`imprimanta.in`
```
2852 16
```

`imprimanta.out`
```
5
74
```

## Explicație

Pentru tipărirea cifrei $2$ s-au acționat $11$ ace, pentru cifra $8$ s-au acționat $13$ ace iar pentru cifra $5$ tot $11$ ace. Numărul minim de ace pentru tipărirea unei
cifre este $11$.

$5$ este cea mai mare cifră a numărului $2852$ ce a fost tipărită cu $11$ ace. Cel mai mare număr natural ce poate fi tipărit prin $16$ puncte este $74$: $7$ puncte (pentru cifra $7$) + $9$ puncte (pentru cifra $4$) = $16$ puncte.

# Exemplul 2


`imprimanta.in`
```
88 25
```

`imprimanta.out`
```
8
11111
```

## Explicație

Pentru tipărirea cifrei $8$ s-au acționat $13$ ace.
Cel mai mare număr natural ce poate fi tipărit prin $25$ de puncte este $11111$: $5 \cdot$ ($5$ puncte pentru cifra $1$) = $25$ de puncte.

