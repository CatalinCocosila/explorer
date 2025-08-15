Mihai a primit în dar un calculator care poate determina numărul de divizori ai unui număr natural. Singura problemă este că afişajul calculatorului îi permite să lucreze numai cu numere formate din cel mult $K$ cifre. Pentru că la şcoală se lucrează cu numere naturale mari, adică numere care au foarte multe cifre, Mihai s-a hotărât ca pentru un număr mare să procedeze astfel: află numărul de divizori al numărului format doar din primele $K$ cifre ale numărului dat. Numărul afişat ca rezultat îl completează alipind la dreapta sa următoarele cifre din numărul iniţial, până ajunge iar la un număr format din $K$ cifre. Acestui nou număr, îi află numărul de divizori şi repetă procedeul până la epuizarea cifrelor numărului iniţial.
Chiar dacă la un moment dat nu mai are cifre pentru a completa numărul afişat ca rezultat, Mihai foloseşte în continuare calculatorul şi determină numărul divizorilor acestuia, continuând până ajunge la un număr care este egal cu numărul divizorilor săi.

# Cerinţă

Având dat un număr natural cu $N$ cifre şi un calculator care poate prelucra numere cu cel mult $K$ cifre, Mihai vă roagă să-l ajutaţi acum să afle răspunsuri la următoarele întrebări:
1. pentru câte numere de cel mult $K$ cifre va folosi calculatorul pentru a determina numărul de divizori, urmând exact procedeul descris mai sus?
2. care este valoarea ce reprezintă numărul maxim de divizori obținută în urma calculelor efectuate de Mihai?
3. care este numărul cu cei mai mulţi divizori din şirul numerelor prelucrate de Mihai? Dacă sunt mai multe numere cu acelaşi număr maxim de divizori, se va alege cel mai mic dintre ele.

# Date de intrare

Prima linie a fişierului `divizori.in` conţine două numere naturale $N$ şi $K$ separate printr-un singur spaţiu, reprezentând numărul de cifre al numărului natural inițial, şi respectiv numărul de cifre al afişajului calculatorului. Linia a doua a fişierului `divizori.in` conţine numărul natural cu $N$ cifre pe care îl va prelucra Mihai urmând exact procedeul descris mai sus.

# Date de ieşire

Fişierul de ieşire `divizori.out` va conţine trei linii:
* pe prima linie se va scrie un singur număr natural reprezentând numărul de aplicări succesive ale procedeului de aflare a numărului de divizori descris mai sus
* pe a doua linie sa va scrie un singur număr natural reprezentând numărul maxim de divizori
* pe a treia linie se va scrie un singur număr natural reprezentând cel mai mic număr ce are proprietatea că numărul său de divizori este egal cu numărul maxim de divizori determinat anterior

# Restricţii şi precizări

* $2 \leq K \leq 9$
* $2 \leq N \lt 1 \ 000 \ 000$
* Pentru $40\%$ din teste, $N \leq 50 \ 000$ şi $K \leq 6$
* Dacă numărul afișat pe prima linie a fişierului de ieşire este corect se acordă $40\%$ din punctajul testului. Dacă numărul afișat pe a doua linie a fişierului de ieşire este corect se acordă $40\%$ din punctajul testului. Pentru afișarea corectă a valorii de pe linia a treia a fișierului de ieșire se acordă $20\%$ din punctajul testului.

# Exemplu

`divizori.in`
```
43 5
5874392065432987667890567800123450889987543
```

`divizori.out`
```
16
48
12012
```

## Explicaţie

Cele $16$ numere prelucrate sunt: $58743$, $\bold{12}920$, $\bold{32}654$, $\bold{8}3298$, $\bold{8}7667$, $\bold{4}8905$, $\bold{4}6780$, $\bold{12}012$, $\bold{48}345$, $\bold{16}088$, $\bold{8}9987$, $\bold{6}543$, $\bold{6}$, $\bold{4}$, $\bold{3}$, $\bold{2}$.
Dintre acestea, cei mai mulţi divizori $(48)$ îi are numărul $12012$
