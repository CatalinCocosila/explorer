Într-un tablou bidimensional de dimensiuni date $m$ (numărul de linii) şi $n$ (numărul de coloane) există în fiecare celulă o valoare $0$ sau $1$. Un turn este format numai din valori $1$ vecine, de pe aceeaşi coloană, numărul acestor valori egale cu $1$ reprezentând înălţimea turnului. Se consideră că pe o coloană nu există alte valori egale cu 1 în afara celor care intră în componenţa unui turn.

Fiecare coloană poate conţine câte un singur turn. Dacă o coloană are numai valori $0$, se consideră totuşi că acea coloană conţine un turn de înălţime $0$. Dacă o coloană are una sau mai multe valori $1$, atunci una dintre ele este obligatoriu plasată pe ultima linie.

Luând pe rând toate perechile formate din câte $2$ turnuri aflate pe coloane vecine, este posibilă următoarea operaţie de reconfigurare: din $2$ turnuri de înălţime nenulă, de pe $2$ coloane vecine se poate forma un nou turn cu înălţimea egală cu suma celor două. Dorim astfel să obţinem în final numărul maxim de turnuri de înălţime maximă. Există însă două condiţii care trebuie respectate:
- înălţimea noului turn format nu poate depăşi valoarea $m$ (numărul de linii ale tabloului);
- orice turn care a contribuit la formarea unui turn de înălţime maximă nu mai poate contribui şi la formarea unui alt turn de înălţime maximă.

Operaţia de reconfigurare se efectuează o singură dată.

# Cerință

Dându-se tabloul bidimensional cu $m$ linii şi $n$ coloane cu valori $0$ şi $1$, se cere:

1. Să se afişeze înălţimile turnurilor din configuraţia iniţială, precizându-se şi turnurile cu înălţime $0$, începând cu cel mai din stânga turn
2. Să se afişeze înălţimea maximă a turnurilor rezultate după operaţia de reconfigurare
3. Să se afişeze numărul maxim de turnuri de înălţime maximă, rezultate după operaţia de reconfigurare

# Date de intrare

Fişierul de intrare `turnuri.in` va conţine:

- pe prima linie din fişier se află numărul natural $m$ care reprezintă numărul de linii şi numărul natural $n$ care reprezintă numărul de coloane, valori separate între ele printr-un spaţiu
- pe următoarele $m$ linii câte n valori $0$ sau $1$, separate două câte două printr-un spaţiu

# Date de ieșire

Fişierul de ieşire `turnuri.out` va conţine trei linii:

- pe prima linie se află înălţimile iniţiale ale turnurilor, valori separate două câte două printr-un spaţiu
- pe a doua linie se află înălţimea maximă a turnurilor rezultate după operaţia de reconfigurare
- pe a treia linie se află numărul maxim de turnuri de înălţime maximă, rezultate după operaţia de reconfigurare


# Restricții și precizări

* $2 \leq m, n \leq 1 \ 000$; 
* Testele si restricțiile au fost refăcute pentru standardele anului $2023$
* Se acordă punctaje parţiale: cerinţa a) $40$% din punctaj, cerinţa b) $40$% din punctaj, cerinţa c) $20$%.
* Toate turnurile incep de pe ultima linie a matricii.

# Exemplul 1

`turnuri.in`
```
6 6
0 0 0 0 0 0
1 0 0 0 0 0
1 0 1 0 0 0
1 0 1 1 0 1
1 0 1 1 1 1
1 0 1 1 1 1 
```

`turnuri.out`
```
5 0 4 3 2 3
5
2
```

## Explicație

~[turnuri.png|width=38em]

Avem $6$ turnuri: primul, cel mai din stânga, are înălţimea $5$, următorul $0$, următorul $4$, următorul $3$, următorul $2$ şi ultimul $3$.

Înălţimea maximă este $5$ şi se obţine din valoarea iniţială a turnului $1$, precum şi din combinarea ultimului turn cu penultimul sau a penultimului turn cu antepenultimul. 

Observaţie: turnul de pe coloana $5$ (penultimul) contribuie la formarea unui singur turn de înălţime maximă, fie cu turnul din coloana $4$ (antepenultimul), fie cu cel din coloana $6$ (ultimul), dar nu cu amândouă simultan. Astfel numărul de turnuri de înălţime maximă este $2$ (unul iniţial şi unul format din ultimele două turnuri (sau din penultimul şi antepenultimul)). De asemenea, dacă s-ar combina al treilea turn cu al patrulea ar rezulta un turn cu înălţimea $7$, valoare mai mare decât numărul de linii din tablou ($6$), ceea ce înseamnă operaţie nepermisă

# Exemplul 2


`turnuri.in`
```
4 4
0 0 0 0
0 0 0 0
1 0 1 0
1 1 1 1
```

`turnuri.out`
```
2 1 2 1
3
2
```

## Explicație

Avem $4$ turnuri cu înălţimile iniţiale: $2, 1, 2, 1$.
Înălţimea maximă este $3$ şi se obţine din combinarea turnurilor $1$ şi $2$, respectiv $3$ cu $4$.

