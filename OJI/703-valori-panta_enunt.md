Se dă un vector cu $N$ elemente numere naturale (cu maxim $8$ cifre).

# Cerință

* Să se afişeze câte elemente din vector sunt valori-pantă (numere care privite de la stânga sau de la dreapta au cifrele în ordine crescătoare) De exemplu, $136$ şi $931$ sunt valori-pantă.
* Să se afişeze cea mai mare şi cea mai mică valoare-pantă, precum şi poziţiile pe care se află acestea în vector.

# Date de intrare

Pe prima linie a fișierului de intrare `valori-panta.in` se găseste $N$, numărul de valori din vector.

Pe cea de-a doua linie se va găsi vectorul de $N$ valori. 

# Date de ieșire

Pe prima linie a fișierului de ieșire `valori-panta.out` se va găsi un singur număr întreg, numărul de valori-pantă.

Pe cea de-a doua linie se va găsi cea mai mare valoare-pantă, urmată de pozițiile unde se află, iar pe cea de-a treia linie, cea mai mică valoare-pantă, urmată de pozițiile unde se află. Dacă sunt $0$ valori-pantă, se va afişa mesajul `NU EXISTA`.

# Restricții și precizări

* $1 \leq n \leq 200 \ 000$;
* Pentru teste în valoare de $30$ de puncte, $1 \leq n \leq 2 \ 000$;
* Testele si restricțiile au fost modificate.

# Exemplu

`valori-panta.in`
```
6
126 9621 1212 3678 9231 9621
```

`valori-panta.out`
```
4
9621 2 6
126 1
```


