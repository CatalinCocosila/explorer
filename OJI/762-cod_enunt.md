Dexter a moștenit o avere fabuloasă, dar este închisă într-un seif. Unchiul său, cel care i-a lăsat averea, a dorit să îl pună la încercare astfel: a umplut o cutie foarte mare cu bilețele pe care sunt scrise numere naturale din mulțimea $\{0, 1, 2, \dots, 99\}$. Pe fiecare bilețel este scris un singur număr. Dexter trebuie să formeze perechi de bilețele care au scrise pe ele același număr. La sfârșit, vor rămâne câteva bilețele fără pereche. Codul de acces la seif este format din numerele rămase pe bilețelele fără pereche, așezate în ordine crescătoare și fără spațiu între ele.

# Cerință

Scrieți un program care să furnizeze codul de acces la seif.

# Date de intrare

Fișierul de intrare `cod.in` conține pe prima linie numărul natural n, reprezentând numărul bilețelelor aflate în cutie. Pe următoarea linie a fișierului se află cele n numere scrise pe bilețele, separate prin câte un spațiu.

# Date de ieșire

Fișierul de ieșire `cod.out` va conține pe prima linie numerele din care este compus codul, în ordine crescătoare și fără spații între ele.

# Restricții și precizări

* $1 \leq n \leq 90 \ 000$;

# Exemplu

`cod.in`
```
10
11 3 11 11 12 2 11 12 3 11
```

`cod.out`
```
211
```

## Explicație

Se pot forma perechile de bilețele: $(11, 11); (3, 3); (12,12); (11,11)$, iar bilețelele rămase sunt cele cu numerele $11$ și $2$. Aceste numere scrise în ordine crescătoare și fără spații între ele ne dau codul $211$.