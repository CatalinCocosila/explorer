Ionel a primit temă de la profesorul său: să scrie pe hârtie numerele de la 1 la n. Cum numărul n era destul de mare el s-a cam plictisit şi a început să se joace numărând de câte ori a apărut o anumită cifră în numerele ce trebuiau scrise. Cum număratul era o activitate destul de lentă, el a găsit o metodă simplă de a calcula de câte ori a apărut o cifră în toate numerele tipărite.

# Cerință

Scrieţi un program care, citind numărul n şi o cifră nenulă c, afişează numărul de apariţii ale cifrei c în reprezentarea tuturor numerelor de la 1 la n.

# Date de intrare

Pe prima linie a fișierului de intrare `cifre.in` se găsesc două numere întregi, $n$ și $c$.

# Date de ieșire

Pe prima linie a fișierului de ieșire `cifre.out` se va găsi un singur număr întreg, numărul de apariţii al cifrei $c$ în reprezentarea tuturor numerelor de la $1$ la $n$.

# Restricții și precizări

* $1 \leq n \leq 10^9$;
* $1 \leq c \leq 9$;

# Exemplu

`cifre.in`
```
15 1
```

`cifre.out`
```
8
```

## Explicație

în şirul $1 \ 2 \ 3 \ 4 \ 5 \ 6 \ 7 \ 8 \ 9 \ 10 \ 11 \ 12 \ 13 \ 14 \ 15$, cifra $1$ apare de $8$ ori.