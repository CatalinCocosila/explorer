Se citește un număr natural $N$ și un șir de $N$ numere naturale $a_1, a_2, \dots, a_n$. Numerele din șir nu conțin cifra $0$. Începând de la primul număr din șir către ultimul se vor efectua următoarele modificări:

* dacă ultima cifră a unui număr este egală cu prima cifră a următorului număr din șir cele două numere se unesc, cel de-al doilea lipindu-se de primul. Acest număr nou format se transformă, oprindu-se doar o dată fiecare cifră care apare în număr: cea mai din stânga apariție a cifrei se păstrează, următoarele apariții fiind eliminate. De exemplu, putem uni numerele $21245$ și $51278$ rezultând numărul $2124551278$. Se iau cifrele o singură dată rezultând $214578$. Numărul nou format se poate uni la rândul lui cu următorul și așa mai departe.
* dacă ultima cifră a unui număr nu este egală cu prima cifră a următorului număr din șir cele două numere nu se unesc, dar primul număr din cele două se va transforma, păstrându-se doar o dată fiecare cifră care apare în număr: cea mai din stânga apariție a cifrei se păstrează, următoarele apariții fiind eliminate

# Cerinta

Dându-se cele $N$ numere din șir să se determine:

* Câte numere din șirul inițial nu au nevoie de transformare (conțin doar cifre distincte)?
* Câte numere va conține șirul după realizarea tuturor operațiilor de unire?
* Care este numărul maxim de cifre ale unui număr din noul șir și câte numere au acest număr maxim de cifre?

# Date de intrare

Fișierul de intrare `siruri.in` conține pe prima linie un număr natural $c$ ($1, 2$ sau $3$). Pe a doua linie se găsește un număr natural nenul $N$. Pe a treia linie se află $N$ numere naturale separate de câte un spațiu reprezentând șirul inițial.

# Date de ieșire

În fișierul de ieșire `siruri.out` se va afla în funcție de cerința dată:

* dacă $c = 1$, se va afișa pe prima linie numărul de numere ce nu au nevoie de transformare
* dacă $c = 2$, se va afișa pe prima linie numărul de numere din șir după realizarea tuturor operațiilor de unire
* dacă $c = 3$, se vor afișa pe prima linie două numere separate printr-un singur spatiu, reprezentând numărul maxim de cifre ale unui număr după efectuarea operațiilor de unire, respectiv numărul de astfel de numere cu număr maxim de cifre.

# Restricții și precizări

* $c \in \{1, 2, 3\}$
* $1 \leq N \leq 100 \ 000$
* $1 \leq a_i \leq 1 \ 000 \ 000 \ 000$
* $a_i$ conține doar cifre nenule
* Pentru $18$ puncte, $c = 1$
* Pentru $40$ puncte, $c = 2$
* Pentru $42$ puncte, $c = 3$

# Exemplul 1

`siruri.in`
```
1
8
21245 51278 869 33447 723 397897 545786 6783221
```

`siruri.out`
```
3
```

## Explicație

Cerința este $1$. Sunt $8$ numere în șir, dintre care doar $3$ au cifre distincte: [$51278, 869, 723$].

# Exemplul 2


`siruri.in`
```
2
8
21245 51278 869 33447 723 397897 545786 6783221
```

`siruri.out`
```
4
```

## Explicație

Cerința este $2$. Sunt $8$ numere în șir, după transformări șirul va arăta astfel: [$21457869, 3472, 3978, 54786321$].

# Exemplul 3


`siruri.in`
```
3
9
21245 51278 869 33447 723 397897 545786 6783221 235788946
```

`siruri.out`
```
8 3
```

## Explicație

Cerința este $3$. Sunt $9$ numere în șir, după transformări șirul va arăta astfel: [$21457869, 3472, 3978, 54786321, 23578946$]. Numărul maxim de cifre ale unui număr din noul șir este $8$ și sunt $3$ numere în noul șir care au $8$ cifre: [$21457869, 54786321, 23578946$].

