Considerând $K$ un număr natural, vom numi permutare de mărime $K$ o aranjare într-o ordine oarecare a elementelor mulțimii $\{1, 2, ..., K\}$. Ana găsește scris pe o foaie de hârtie, un șir de numere naturale $v = (v_1, v_2, v_3, ..., v_N)$

Plecând de la acest șir, Ana numește *secvență* a lui $v$, un subșir de numere care apar pe poziții consecutive în șirul inițial. De exemplu, șirul $5, 7, 8, 9, 1, 6$ conține secvența $8, 9, 1$, secvența $7, 8, 9, 1, 6$, dar nu conține secvența $8, 9, 6$.

Anei îi vine ideea să încerce să verifice dacă șirul de numere poate fi împărțit în secvențe care reprezintă permutări de diferite mărimi.

De exemplu, dacă Ana găsește șirul $v = (2, 1, 4, 1, 3, 2)$, atunci ea îl poate împărți în două secvențe de permutări astfel: secvența $v_1, v_2$ respectiv secvența $v_3, v_4, v_5, v_6$.

Dacă Ana găsește șirul $v = (1, 2, 2, 3)$ atunci nu va putea obține o împărțire în secvențe de permutări.

# Cerinţă

Realizați un program care citește un șir de $N$ numere naturale și rezolvă următoarea cerință:
* determină o împărțire a acestuia în secvențe de permutări. Dacă există mai multe soluții se va afișa soluția minim lexicografică.

Dacă șirul poate fi împărțit în secvențe de permutări, pentru fiecare număr din șir, în ordinea $v_1, ..., v_N$, se va afișa numărul permutării din care face parte. Numerotarea permutărilor se va face consecutiv începând cu numărul $1$.

# Date de intrare

Fișierul de intrare `perm.in` conţine pe prima linie numărul natural $N$, iar pe a doua linie, un șir format din $N$ numere naturale separate prin câte un spațiu.

# Date de ieşire

Fişierul de ieşire `perm.out` conține pe prima linie mesajul `NU` dacă șirul nu se poate împărți în secvențe de permutări. Dacă împărțirea se poate efectua atunci pe prima linie se va scrie numărul secvențelor de permutări obținut, iar pe a doua linie un șir de numere reprezentând împărțirea minim lexicografică determinată. Numerele pe linia a doua vor fi separate prin câte un spațiu.

# Restricţii și precizări

* **Important!** Pentru că soluția oficială a problemei din concurs este greșită, pe Kilonova au fost adăugate șase teste noi (ID-urile 100-105). Aceste teste nu oferă puncte, iar celelalte teste au rămas neschimbate. Astfel, o soluție care ar fi funcționat în concurs va primi în continuare punctaj maxim, dar aveți opțiunea de a rezolva problema complet corect.
* $1 \leq N \leq 100 \ 000$
* $1 \leq v_i \leq 20 \ 000$
* Pentru două șiruri de $N$ numere $a_1, a_2, ..., a_N$ și $b_1, b_2, ..., b_N$ spunem că șirul $a$ este mai mic lexicografic decât șirul $b$, dacă există un indice $j$, cu $1 \leq j \lt N$, astfel încât $a_1 = b_1, a_2 = b_2, ..., a_j = b_j$ și $a_{j + 1} < b_{j + 1}$

# Exemplul 1

`perm.in`
```
10
2 1 3 4 1 1 2 3 4 5
```

`perm.out`
```
3
1 1 1 1 2 3 3 3 3 3
```

## Explicație

Prima secvență care reprezintă o permutare e formată din primele $4$ elemente, a doua din elementul de pe poziția $5$, iar a treia din ultimele $5$ elemente

# Exemplul 2

`perm.in`
```
4
1 2 2 3
```

`perm.out`
```
NU
```

## Explicație

Nu se poate împărți șirul în secvențe formate din permutări
