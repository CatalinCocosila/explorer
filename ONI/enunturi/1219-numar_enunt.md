Se dă un şir de $n$ elemente, numere naturale. Se parcurge şirul de numere de la stânga la dreapta şi se împarte în grupe de unul, două sau mai multe elemente vecine care sunt în ordine crescătoare, astfel încât într-o grupă, fiecare element aşezat în stânga altui element vecin este mai mic sau egal cu acesta, în timp ce primul element care nu se află în grupă (cel de “după” grupă) este strict mai mic decât ultimul din grupa anterioară (excepţie: în cazul în care cele n numere sunt în ordine crescătoare, există o singură grupă). Astfel, de exemplu, şirul format din elementele: $2$, $3$, $6$, $0$, $3$, $1$ se împarte în trei grupe: prima conţine elementele cu valorile $2$, $3$, $6$, a doua $0$, $3$, iar a treia este formată dintr-un singur element având valoarea $1$.

Pentru fiecare grupă se calculează suma elementelor din grupa respectivă, cu aceste sume formându-se un nou şir $y$. Numărul de elemente din şirul $y$ va fi egal cu numărul de grupe formate. Fiecărui element din şirul $y \ i$ se determină cifra de control. Cifra de control pentru o valoare dată se calculează astfel: se determină suma cifrelor, apoi suma cifrelor numărului obţinut, ş.a.m.d., până se obţine o singură cifră (de exemplu, pentru numărul $9 \ 997$, se calculează mai întâi suma cifrelor $9+9+9+7=34$, se continuă apoi cu numărul $34$ şi se obţine cifra de control $7$, adică $3+4$). Se obţine astfel un nou şir $z$ cu cifrele de control pentru elementele din şirul $y$. 

# Cerinţă

Să se determine cel mai mare număr natural care se poate forma cu toate cifrele care nu se regăsesc în şirul $z$, fiecare astfel de cifră putând să apară în noul număr o singură dată. În cazul în care toate cifrele se regăsesc în şirul $z$, numărul cerut va fi $-1$.

# Date de intrare

Pe prima linie a fișierului de intrare `numar.in` se citeşte valoarea $n$, reprezentând numărul de elemente din şirul iniţial. De pe linia a doua se citesc elementele şirului iniţial, separate două câte două printr-un spaţiu.

# Date de ieșire

Pe prima linie a fișierului de ieșire `numar.out` se va afişa numărul cerut.

# Restricții și precizări

* $1 \leq n \leq 50$;
* Numerele din şirul iniţial sunt naturale, mai mici sau egale cu $30 \ 000$.


# Exemplul 1

`numar.in`
```
11
6 8 9 11 2 3 1 0 6 9 3
```

`numar.out`
```
98420
```

## Explicație

$y=(34,5,1,15,3)$; $z=(7,5,1,6,3)$;

$nr=98420$, pentru că cifrele $9$, $8$, $4$, $2$, $0$ nu se regăsesc în şirul $z$ 