În cadrul cercului de lingvistică Ioana a studiat diferite sisteme de codificare a mesajelor, însă i-a atras atenția codificarea par-impar care se aplică numerelor naturale. În această codificare fiecare cifră a unui număr crește cu valoarea $1$ dacă cifra este pară, respectiv scade cu valoarea $1$ dacă cifra este impară. Astfel, aplicând codificarea par-impar numărului $25467$ se obține $34576$, în timp ce numărului $123$ îi corespunde $32$ (conform regulii de codificare ar fi fost $032$, însă un număr nenul nu poate începe cu $0$).

# Cerință

1. Dându-se un șir de $n$ numere naturale, să se determine cel mai mic și cel mai mare număr din șir care, prin codificarea _par-impar_, devin mai mari decât valorile lor inițiale.
2. Să se determine câte numere naturale de $k$ cifre cu prima cifră $cif$ devin palindrom prin codificarea _par-impar_.

# Date de intrare

Fișierul de intrare `codificare.in` conține pe prima linie un număr natural $C$.

Dacă $C = 1$, a doua linie conține un număr natural $n$, iar a treia linie conține un șir de $n$ numere naturale, separate prin câte un spațiu.
Dacă $C = 2$, a doua linie conține un număr natural $k$ și o cifră $cif$, separate printr-un spațiu.

# Date de ieșire

Dacă $C = 1$, fișierul de ieșire `codificare.out` va conține două valori separate printr-un spațiu, reprezentând cel mai mic și cel mai mare număr din șirul dat care, prin codificare, devin mai mari decât valorile lor inițiale.

Dacă $C = 2$, fișierul de ieșire `codificare.out` va conține un număr natural reprezentând numărul de numere naturale de $k$ cifre cu prima cifră $cif$ care devin palindrom prin codificare.

# Restricții și precizări

* $C \in \{1, 2 \}$
* $1 < n < 1 \ 000 \ 000$
* $1 < k < 10$
* $1 \leq \text{cif} < 10$
* Pentru $C = 1$, valorile din șir sunt numere naturale de maximum $9$ cifre.
* Se garantează că cel puțin un număr din șir devine mai mare în urma codificării _par-impar_.

|#|Punctaj|Restrictii|
|-|-|--------|
|1|50|$C = 1$|
|2|50|$C = 2$|


# Exemplul 1

`codificare.in`
```
1
6
865 6 988 20 7 5
```

`codificare.out`
```
6 865
```

## Explicație

$C = 1$, se rezolvă cerința $1$. Numerele de pe a treia linie care prin codificare devin mai mari sunt $865$, $6$ și $20$. Cel mai mic dintre acestea este $6$, iar cel mai mare este $865$.

# Exemplul 2

`codificare.in`
```
1
5
123 945 13 759 865
```

`codificare.out`
```
865 865
```

## Explicație

$C = 1$, se rezolvă cerința $1$. Singurul număr de pe a treia linie care prin codificare devine mai mare este 865.

# Exemplul 3


`codificare.in`
```
2
4 3
```

`codificare.out`
```
10
```

## Explicație

$C = 2$, se rezolvă cerința $2$. Numerele de $4$ cifre care au prima cifră $3$ și care prin codificare devin numere palindrom sunt $3003$, $3113$, $3223$, $3333$, $3443$, $3553$, $3663$, $3773$, $3883$ și $3993$.

