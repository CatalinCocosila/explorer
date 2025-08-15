Profesorul de sport al clasei a VI-a B de la o şcoală din Focşani vrea la începutul orei să aşeze elevii pe terenul de sport, la raport, într-o anumită ordine. Pentru acest lucru, elevii sunt bine instruiţi, astfel încât, aşezând pe ultimul rând $n$ elevi, celelalte rânduri de elevi se creează singure după regula:

- pe poziţia i a unui rând se va aşeza un elev, după cum urmează: dacă pe rândul din spate, pe poziţiile i şi i+1 stau fie numai băieţi, fie numai fete, atunci se va aşeza o fată, iar dacă pe aceste poziţii stau elevi de sex opus, se va aşeza un băiat.

Conform acestei reguli, pe rândul cu numărul de ordine $i$ se vor aşeza $i$ elevi. Numărul de elevi din clasă este $\frac{n \cdot (n+1)}{2}$.

# Cerinţă

Pentru $n$ dat şi un şir de $n$ numere $0$ şi $1$ ($0$ reprezintă codificarea pentru o fată, iar $1$ pentru un băiat), care reprezintă şirul de elevi de pe ultimul rând, se cere să se determine numărul de băieţi din clasă.

# Date de intrare

Pe prima linie a fișierului de intrare `sport.in` se găsește $n$. Pe cea de-a doua linie se găsesc $n$ numere naturale, ce reprezintă şirul de elevi de pe ultimul rând.

# Date de ieșire

Pe prima linie a fișierului de ieșire `sport.out` se va afişa numărul de băieţi din clasă.

# Restricții și precizări

* $1 \leq n \leq 10 \ 000$;
* Testele si restricțiile au fost modificate.

# Exemplu

`sport.in`
```
5
1 0 0 1 1
```

`sport.out`
```
8
```

## Explicație

```
1 0 0 1 1   rândul 5 (ultimul rând)
 1 0 1 0    rândul 4
  1 1 1     rândul 3
   0 0      rândul 2
    0       rândul 1
```