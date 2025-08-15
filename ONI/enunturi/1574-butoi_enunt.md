Vară, căldură mare. Gigel se joacă în curte udând florile. După ce a terminat, mama lui îi dă o sarcină mai grea. Gigel trebuie să umple un butoi cu apă de rezervă în caz de secetă. Dar nu oricum! El are la dispoziție un șir de găleți de diferite capacități și trebuie să le folosească doar pe acestea pentru umplerea completă a butoiului. O operație constă în umplerea completă a unei o găleți de la sursa de apă și golirea ei în butoi. Desigur, o găleată se poate folosi de mai multe ori. Butoiul are capacitate de $V$ litri, Gigel are $N$ găleți de capacități $c_1, c_2, \dots, c_N$ litri, numere întregi și distincte și poate folosi o găleată de cel mult $K$ ori. Ajutați-l pe Gigel să umple butoiul.

# Cerință

Scrieți un program care să rezolve următoarele cerințe:

1. Determinați câte modalități de umplere a butoiului există;
2. Determinați o modalitate de umplere a butoiului cu număr minim de operații;
3. O secvență de exact $P$ găleți alăturate se numește norocoasă dacă prin efectuarea operației de același număr de ori pentru fiecare dintre ele, vom putea umple complet butoiul. Determinați secvența norocoasă care permite folosirea celor $P$ găleți de un număr minim de ori pentru umplerea completă a butoiului. Secvența norocoasă se va identifica prin poziția primei găleți folosite. Dacă există mai multe soluții se va afișa cea cu poziția minimă. Gălețile din secvența norocoasă se pot folosi de câte ori este nevoie.

# Date de intrare

Fișierul de intrare `butoi.in` conține pe prima linie un număr natural $C$ care poate avea valorile $1, 2$ sau $3$ și reprezintă numărul cerinței. Linia a doua conține patru valori naturale $V \ N \ K \ P$, separate prin câte un spațiu, reprezentând în ordine capacitatea butoiului, numărul de găleți, numărul maxim de operații care poate fi efectuat cu o găleată, în cazul cerințelor $1$ și $2$, iar ultimul număr reprezintă lungimea secvenței norocoase căutate la cerința $3$. Linia a treia conține $N$ valori naturale distincte $c_1, c_2, \dots, c_N$, separate prin câte un spațiu, reprezentând, în ordine, capacitățile celor $N$ găleți din șir.

# Date de ieșire

Fișierul de ieșire `butoi.out` va conține pentru cerința $1$, pe prima linie, un întreg reprezentând numărul de modalități de a umple butoiul. Pentru cerința $2$ prima linie va conține $N$ valori naturale separate prin câte un spațiu, reprezentând numărul de utilizări a fiecărei găleți iar pentru cerința $3$ prima linie va conține un număr natural reprezentând poziția din șir a primei găleți din secvența norocoasă determinată.

# Restricții și precizări

* $5 \leq V \leq 360 \ 000$;
* Pentru cerințele $1$ și $2$ restricțiile sunt: $1 \leq N \leq 9$; $1 \leq c_i \leq 8 \ 000$; și $1 \leq K \leq 5$;
* Pentru cerința $3$ restricțiile sunt: $3 \leq N \leq 100 \ 000$; $1 \leq c_i \leq 200 \ 000$; $3 \leq P \leq 10 \ 000$; și $P \leq N$
* Pentru cerința $3$ capacitățile $c_1, c_2, \dots, c_N$ ale găleților nu sunt neapărat distincte
* Pentru rezolvarea corectă a primei cerințe se obțin $30$ de puncte, pentru rezolvarea corectă a celei de a doua cerințe se obțin $40$ de puncte, iar pentru rezolvarea corectă a celei de a treia cerințe se obțin $30$ de puncte.

# Exemplul 1

`butoi.in`
```
1
90 7 1 2
30 56 70 34 60 15 5
```

`butoi.out`
```
3
```

## Explicație

Cerința este $1$. Există $3$ modalități de a umple butoiul folosind cel mult o dată fiecare găleată, deoarece $K = 1$. Acestea sunt $30 + 60$, $56 + 34$ și $70 + 15 + 5$.

# Exemplul 2


`butoi.in`
```
1
2020 6 5 3
17 42 200 101 51 171
```

`butoi.out`
```
19
```

## Explicație

Cerința este $1$. Există $19$ modalități de a umple butoiul.

# Exemplul 3


`butoi.in`
```
2
2020 6 5 3
17 42 200 101 51 171
```

`butoi.out`
```
0 0 5 3 4 3
```

## Explicație

Cerința este $2$. Numărul minim de operații este $15$. Gălețile au fost folosite astfel: $0 \cdot 17 + 0 \cdot 42 + 5 \cdot 200 + 3 \cdot 101 + 4 \cdot 51 + 3 \cdot 171 = 0 + 0 + 1000 + 303 + 204 + 513 = 2020$.

# Exemplul 4


`butoi.in`
```
3
120 7 1 3
90 12 20 8 41 80 11
```

`butoi.out`
```
2
```

## Explicație

Cerința este $3$. Secvența norocoasă de lungime $3$ determinată începe la poziția $2$. Prin folosirea de $3$ ori a fiecărei găleți din secvență butoiul se umple.

