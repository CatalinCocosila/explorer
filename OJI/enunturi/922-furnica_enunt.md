Cercetătorii au descoperit că activitatea miriapodelor este stimulată de culoarea galben și de aceea o furnică este supusă unui experiment. Pe marginea mesei pe care se realizează experimentul s-au lipit una lângă alta, $N$ foi dreptunghiulare, de culoare galbenă, numerotate în ordine, de la stânga la dreapta, de la $1$ la $N$. Furnica se află pe masă, în fața primei foi și urmează un traseu deplasându-se doar pe laturile libere ale foilor (care nu sunt lipite de alte foi sau de masă), pe verticală sau orizontală, (așa cum indică săgețile din imaginea de mai jos), ajungând din nou pe masă. Știind că în urcare furnica parcurge un centimetru în $5$ secunde, în coborâre parcurge un centimetru în $2$ secunde, iar dacă se deplasează pe orizontală parcurge un centimetru în $3$ secunde, ajutați-i pe cercetători să obțină unele date.

~[furnica.png|width=35em]

# Cerință

Scrieţi un program care să rezolve următoarele cerințe:

1. determină timpul (exprimat în secunde) necesar furnicii pentru a parcurge tot traseul menționat;
2. determină lungimea maximă (exprimată în centimetri) a unei porțiuni de traseu în care furnica NU coboară deloc;
3. determină ce număr de ordine are foaia pe care se află furnica după $T$ secunde.

# Date de intrare


Fișierul de intrare `furnica.in` conţine:

* pe prima linie un număr natural $C$ care reprezintă numărul cerinţei şi poate avea valorile $1, 2$ sau $3$.
* pe cea de-a doua linie un număr natural $N$ ce reprezintă numărul foilor galbene dacă cerința este $1$ sau $2$, respectiv două numere naturale $N$ și $T$, dacă cerința este $3$.
* pe următoarele $N$ linii, câte două numere naturale, ce reprezintă laturile foilor (exprimate în centimetri), în ordinea numerotării acestora. Primul număr reprezintă dimensiunea laturii orizontale, iar cel de-al doilea număr reprezintă dimensiunea laturii verticale a foii galbene. 
* numerele aflate pe aceeași linie a fișierului sunt separate prin câte un spațiu.


# Date de ieșire


Fișierul de ieșire `furnica.out` va conține o singură linie pe care va fi scris un număr natural ce reprezintă rezultatul determinat pentru cerința $C$.


# Restricții și precizări

* $1 \leq N,T \leq 10 \ 000$; laturile foilor sunt numere naturale nenule cu cel mult nouă cifre fiecare;
* dacă furnica ajunge într-un punct aflat la îmbinarea a două foi, se consideră că se află pe foaia din stânga;
* pentru orice $T$ furnica se va afla pe una din foi;
* pentru fiecare cerință se acordă $30$ de puncte.

# Exemplul 1

`furnica.in`
```
1
5
3 9
5 9
2 6
2 13
1 4
```

`furnica.out`
```
151
```

## Explicație

În primul exemplu, cerința este $1$. Sunt $5$ foi galbene iar traseul parcurs de furnică este pe modelul din imaginea de mai sus. Traseul are o lungime de $45$ de centimetri și furnica îl va termina în $151$ de secunde.

# Exemplul 2


`furnica.in`
```
2
5
3 9
5 9
2 6
2 13
1 4
```

`furnica.out`
```
17
```

## Explicație

În al doilea exemplu cerința este $2$. Cea mai lungă porțiune de traseu, în care furnica nu coboară are $9+3+5=17$ cm.

# Exemplul 3


`furnica.in`
```
3
5 100
3 9
5 9
2 6
2 13
1 4
```

`furnica.out`
```
4
```

## Explicație

În al treilea exemplu cerința este $3$. După $100$ de secunde furnica se va afla pe foaia $4$.



