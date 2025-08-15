~[tinta.png|align=right]
Alex are o pasiune pentru trasul la țintă. Jucându-se cu numere, visează la o nouă tablă pentru pasiunea sa. Tabla visată este de formă pătrată cu $n$ linii și $n$ coloane, iar numerele, de la $1$ la $n \cdot n$, le poziționează în țintă, ca în imaginea alăturată.
Alex, fiind un foarte bun țintaș, nu nimerește niciodată pe pătrățelele de pe contur. Când țintește o pătrățică din interior, el obține drept punctaj suma valorilor din cele opt pătrățele vecine.

# Cerinţă

Cunoscând $n$ numărul de linii și de coloane ale țintei:

1. Ajutați-l pe Alex să construiască ținta visată.
2. Câte punctaje distincte poate să obțină Alex dacă are o singură săgeată?
3. Afișați punctajele distincte găsite.

# Date de intrare

Fişierul de intrare `tinta.in` conţine pe prima linie numărul natural $n$, indicând numărul de linii și de coloane ale țintei.

# Date de ieşire

Fişierul de ieşire `tinta.out` va conţine pe primele $n$ linii câte $n$ numere naturale, separate prin câte un spațiu, reprezentând numerele de pe cele $n$ linii ale țintei. Pe linia $n + 1$ se va afișa un singur număr $p$ reprezentând numărul de punctaje distincte. Pe linia $n + 2$ se vor afișa $p$ numere naturale separate prin câte un spațiu și ordonate strict crescător, reprezentând punctajele distincte.

# Restricţii și precizări

* $3 \leq n \leq 1 \ 000$
* Pentru prima cerinţă afişată corect se va acorda $40\%$ din punctaj, iar pentru primele două cerințe afișate corect se va acorda $60\%$ din punctaj.

# Exemplul 1

`tinta.in`
```
3
```

`tinta.out`
```
1 2 6
3 5 7
4 8 9
1
40
```

## Explicaţie

Alex poate ținti doar în pătrățelul interior (cel pe care avem $5$), deci obține un singur punctaj, iar suma este $40$.

# Exemplul 2

`tinta.in`
```
4
```

`tinta.out`
```
1 2 6 7
3 5 8 13
4 9 12 14
10 11 15 16
3
45 68 91
```

## Explicaţie

Alex poate ținti doar pătrăţelele $5$, $8$, $9$ sau $12$.
