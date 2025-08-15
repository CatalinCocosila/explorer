La o cursă de Formula 1, fiecare echipă participantă își construiește propria mașină cu care va concura. Numerotarea mașinilor în concurs este realizată de organizatori cu ajutorul unor stegulețe pătrate ce conțin alternativ, pe fiecare rând (pe orizontală și verticală), pătrățele albe și negre de dimensiuni identice. În figura următoare sunt prezentate, în ordine, stegulețele primelor 4 mașini din concurs. Observăm că fiecare steguleț are cu două rânduri (pe orizontală și verticală) mai mult decât stegulețul precedent, iar în toate cele patru colțuri ale oricărui steguleț se află un pătrățel negru.

~[formula1.jpg]

# Cerință

Scrieți un program care citește două numere naturale $K$ și $N$ și determină:

1. Câte pătrățele albe și negre sunt în total pe stegulețul mașinii cu numărul $K$;
2. Notând cu $A$ numărul total de pătrățele albe de pe stegulețele primelor $N$ mașini din concurs, câte pătrățele albe și negre sunt în total pe cel mai mare steguleț care conține cel mult $A$ pătrățele albe.

# Date de intrare

Fișierul de intrare `formula1.in` conține pe prima linie un număr natural $C$. Pentru toate testele de intrare, numărul $C$ poate avea doar valoarea $1$ sau valoarea $2$ și reprezintă numărul cerinței care trebuie rezolvată. Pe a doua linie a fișierului `formula1.in` se găsesc, în ordine, numerele naturale $K$ și $N$.

# Date de ieșire

Dacă $C = 1$, se va rezolva cerința $1$. În acest caz, fișierul de ieșire `formula1.out` va conține pe prima linie un număr natural reprezentând numărul total de pătrățele existente pe stegulețul mașinii cu numărul $K$.
Dacă $C = 2$, se va rezolva cerința $2$. În acest caz, fișierul de ieșire `formula1.out` va conține pe prima linie un număr natural reprezentând numărul total de pătrățele existente pe cel mai mare steguleț ce conține cel mult $A$ pătrățele albe.

# Restricții și precizări

* $1 \leq K \leq 100 \ 000$;
* $1 \leq N \leq 500 \ 000$;
* Pentru rezolvarea corectă a primei cerințe se obțin $20$ de puncte, iar pentru rezolvarea corectă a celei de a doua cerințe se obțin $80$ de puncte.

# Exemplul 1

`formula1.in`
```
1
3 4
```

`formula1.out`
```
25
```

## Explicație

Se rezolvă prima cerință și se va folosi doar valoarea $K$. Stegulețul celei de-a treia mașini are în total $25$ de pătrățele albe și negre.

# Exemplul 2


`formula1.in`
```
2
3 4
```

`formula1.out`
```
81
```

## Explicație

Se rezolvă a doua cerință și se va folosi doar valoarea $N$. Pe stegulețele primelor $4$ mașini apar în total $0 + 4 + 12 + 24 = 40$ pătrățele albe. Cel mai mare steguleț care conține cel mult $40$ de pătrățele albe aparține mașinii cu numărul $5$ care are în total $81$ de pătrățele.

