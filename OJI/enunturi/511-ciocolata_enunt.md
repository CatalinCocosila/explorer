Irina și Mihaela sunt surori. Într-o zi, mama lor le aduce $N$ tablete de ciocolată, numerotate de la $1$ la $N$, pe care le așează, în această ordine, pe o poliță a unui raft. Pentru fiecare tabletă se cunoaște gramajul (numărul de grame pe care le cântărește). **Cantitatea totală** de ciocolată consumată de o fată este egală cu suma gramajelor tuturor tabletelor consumate de ea. Pentru a consuma ciocolată, fetele trebuie să respecte următoarele reguli:
* cantitatea totală de ciocolată consumată de Irina trebuie să fie mai mare sau egală cu cantitatea totală de ciocolată consumată de sora sa;
* diferența dintre cantitatea totală de ciocolată consumată de Irina și cantitatea totală de ciocolată consumată de Mihaela trebuie să fie cât mai mică;
* fiecare fată trebuie să consume cel puțin o tabletă de ciocolată;
* fiecare fată consumă tablete de ciocolată de pe raft: Irina începe de la cea numerotată cu $1$ și continuă, în ordine, de la stânga la dreapta, iar Mihaela începe cu cea numerotată cu $N$ și continuă, în ordine, de la dreapta la stânga;
* fiecare fată poate întrerupe oricând consumul tabletelor de ciocolată, iar cele rămase fie sunt abandonate pe raft fie sunt consumate de fata cealaltă, dacă ajunge la ele;
* fiecare tabletă de ciocolată fie este consumată complet de una dintre fete, fie rămâne pe raft dar fetele NU pot sări peste nicio tabletă de ciocolată.

# Cerințe
Determinați și afișați:
1. cel mai des întâlnit gramaj în șirul de tablete așezate inițial pe poliță, iar dacă sunt mai multe gramaje care apar de un număr maxim de ori, se alege cel mai mic dintre acestea;
2. diferența minimă dintre cantitatea totală de ciocolată consumată de Irina și cantitatea totală de ciocolată consumată de Mihaela.

# Date de intrare

Pe prima linie din fișierul `ciocolata.in` se găsește numărul $C$, reprezentând cerința ce trebuie rezolvată ($1$ sau $2$), urmat de numărul $N$, cu semnificația din enunț, iar pe a doua linie $N$ numere naturale, reprezentând gramajele celor $N$ tablete de ciocolată, în ordinea numerotării lor. Numerele aflate pe aceeași linie a fișierului sunt separate prin câte un spațiu.

# Date de ieșire

Pe prima linie a fișierului de ieșire `ciocolata.out` se va afla un singur număr reprezentând gramajul determinat la cerința $1$ (dacă $C = 1$), respectiv, diferența minimă determinată la cerința $2$ (dacă $C = 2$).

# Restricții și precizări

* $C \in \{1, 2\}$;
* $1 \leq N \leq 100 \ 000$;
* Gramajul fiecărei tablete este un număr natural nenul mai mic sau egal cu $10 \ 000$;
* Se garantează că există întodeauna soluție.
* Pentru $30$ de puncte, $C = 1$;
* Pentru $5$ puncte, $C = 2$ și $N = 2$;
* Pentru $10$ puncte, $C = 2$ și $1 \leq N \leq 100$;
* Pentru $25$ de puncte, $C = 2$ și $1 \leq N \leq 1 \ 000$;
* Pentru $30$ de puncte, $C = 2$ și nu există restricții suplimentare.

# Exemplul 1

`ciocolata.in`
```
1 6
1 4 3 3 5 4
```

`ciocolata.out`
```
3
```

## Explicație

$C = 1$, $N = 6$, iar cele mai frecvente gramaje de ciocolată dintre cele $6$ sunt $3$ și $4$, fiecare apărând de câte două ori. Se va alege gramajul $3$.

# Exemplul 2

`ciocolata.in`
```
2 5
14 4 25 2 9
```

`ciocolata.out`
```
3
```

## Explicație
$C = 2$, $N = 5$, iar Irina a consumat prima tabletă de ciocolată (în cantitate totală de $14$ grame), iar Mihaela ultimele două tablete (în cantitate totală de $11$ grame), deci diferența de cantitate este de $3$ grame.

# Exemplul 3

`ciocolata.in`
```
2 11
3 7 3 12 4 9 4 2 6 5 17
```

`ciocolata.out`
```
1
```

## Explicație

$C = 2$, $N = 11$, Irina va consuma primele cinci tablete de ciocolată (în cantitate totală de $29$ grame), iar Mihaela ultimele trei tablete (în cantitate totală de $28$ grame).
