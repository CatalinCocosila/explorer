Ministerul numerelor are de câteva zile un nou șef. Acesta a dorit să facă o serie de schimbări în ministerul pe care îl conduce și a început “reorganizarea” cu mulțimea numerelor naturale în 2 etape: mai întâi toate numerele naturale au fost așezate fără spațiu (sau alt separator) între ele. După această primă etapă, mulțimea numerelor naturale arăta astfel:

$1234567891011121314151617181920212223242526272829303132 \dots$.

A doua etapă a “reorganizării” a constat în formarea unor noi “grupe”: o grupă de o cifră, o grupă de $2$ cifre, o grupă de $3$ cifre și așa mai departe. Astfel, “grupele reorganizate” sunt:

$1$, $23$, $456$, $7891$, $01112$, $131415$, $1617181$, $92021222$, $324252627 \dots$.

# Cerință

Pentru un număr natural N dat, să se afișeze prima și ultima cifră din cea de-a N-a grupă de cifre obținută după “reorganizare”, valori separate printr-un spațiu.

# Date de intrare

Fișierul de intrare `reorganizare.in` conține valoarea numărului natural $N$.

# Date de ieșire

În fișierul de ieșire `reorganizare.out` se va afișa prima și ultima cifră din cea de-a $N$-a grupă de cifre obținută după “reorganizare”, valori separate printr-un spațiu.

# Restricții și precizări

* $1 \leq N \leq 1 \ 000 \ 000$;
* Pentru teste în valoare de $40$ puncte: $1 \leq N \leq 250$;
* Pentru teste în valoare de $60$ puncte: $1 \leq N \leq 40 \ 000$;

# Exemplul 1

`reorganizare.in`
```
8
```

`reorganizare.out`
```
9 2
```

## Explicație

$9$ și $2$ sunt prima, respectiv ultima cifră din grupa a $8$ a care este $92021222$