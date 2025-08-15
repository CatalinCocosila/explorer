Gigel a primit spre păstrare un set de $n$ cutii de greutăți nu neapărat distincte. El a cântărit cutiile și pentru fiecare greutate distinctă a notat pe o foaie, în ordine crescătoare a greutăților, numărul de cutii cu greutatea respectivă.

Deoarece fratele său mai mic avea prostul obicei să se joace cu numerele scrise de el pe foaie, Gigel s-a gândit să calculeze un „număr de control” după următorul algoritm: începând de la primul număr a grupat numerele de apariții ale greutăților câte trei (dacă îi rămân numere negrupate la sfârșit, le ignoră). Dacă într-un grup sunt numai numere pare sau numai impare notează grupul cu cifra $1$, altfel îl notează cu cifra $0$. Din șirul astfel obținut, se formează un număr care are ca valoare cifra zecilor egală cu numărul de valori $1$ și cifra unităților egală cu numărul de valori $0$, obținându-se astfel „numărul de control”.

# Cerință

Citind greutățile cutiilor, să se determine „numărul de control” și să se verifice dacă este număr prim.

# Date de intrare

De pe prima linie a fișierului de intrare `control.in` se citește numărul $n$. Pe fiecare dintre următoarele $n$ linii se găsește câte un număr natural reprezentând greutățile celor n cutii.

# Date de ieșire

În fișierul de ieșire `control.out` se va scrie pe prima linie „numărul de control”, urmat, pe linia a doua, de valoarea $0$ sau $1$. Pe linia a doua se va afișa $1$ dacă numărul este prim, respectiv $0$ în caz contrar.

# Restricții și precizări

* $1 \leq n \leq 100$;
* Fiecare greutate este un număr natural, mai mic sau egal cu $200$

# Exemplu

`control.in`
```
21
1
3
2
6
2
6
2
8
9
8
8
9
10
8
11
18
11
12
14
15
17
```

`control.out`
```
31
1
```

## Explicație

După ordonare se obține șirul: $1 \ 2 \ 2 \ 2 \ 3 \ 6 \ 6 \ 8 \ 8 \ 8 \ 8 \ 9 \ 9 \ 10 \ 11 \ 11 \ 12 \ 14 \ 15 \ 17 \ 18$;
Se obține apoi: $1 \ 3 \ 1 \ 2 \ 4 \ 2 \ 1 \ 2 \ 1 \ 1 \ 1 \ 1 \ 1$;
După care grupându-le câte $3$ de la stânga spre dreapta se va obține: $1 \ 1 \ 0 \ 1$;
Din valorile $1 \ 1 \ 0 \ 1$; se obține numărul de control $31$, care este număr prim.

