Ionică are o cutie plină cu cuburi. Pe fiecare cub este scrisă o cifră. La un moment dat Ionică aşează $n$ cuburi unul peste altul formând un turn. Tatăl lui Ionică văzând turnul îi spune o cifră $k$ şi o modalitate de scoatere a unor cuburi din turn. Mai precis Ionică trebuie să scoată cuburi pentru a obţine un turn cu înăţimea minimă după următoarele reguli:
* la un moment dat se poate scoate o grupă cu cel puţin $k$ cuburi alăturate care au pe ele scrise aceeaşi cifră;
* grupele se elimină începând de la baza turnului, de fiecare dată începând cu prima grupă ce respectă condiţia anterioară.

# Cerinţă

Să se scrie un program care să determine turnul final, după eliminarea tuturor grupelor de cuburi conform modalităţii precizate de tatăl lui Ionică.

# Date de intrare

Fişierul de intrare `turn.in` are pe prima linie numerele naturale $n$ şi $k$ separate printr-un spaţiu, iar pe linia următoare cifrele scrise pe cuburi în ordine de la baza cubului spre vârf, separate între ele prin câte un spaţiu.

# Date de ieşire

Fişierul de ieşire `turn.out` va conţine pe prima linie numărul de cuburi din turnul cerut, iar a doua linie cifrele de pe cuburile turnului (în ordine de la baza turnului până la vârful său) cu un spaţiu între spaţiu între ele.

# Restricţii şi precizări

* $2 \leq n \leq 49 \ 000$
* $2 \leq k \leq 9$
* pentru toate testele turnul rezultat are cel puţin un cub

# Exemplul 1

`turn.in`
```
20 3
1 0 2 2 2 0 0 0 7 7 5 5 5 5 5 7 7 7 3 9
```

`turn.out`
```
3
1 3 9
```

## Explicaţie

Evoluţia turnului este următoarea:
După eliminarea grupului de cuburi cu cifrele $2 \ 2 \ 2$ se obţine: $1 \ 0 \ 0 \ 0 \ 0 \ 7 \ 7 \ 5 \ 5 \ 5 \ 5 \ 5 \ 7 \ 7 \ 7 \ 3 \ 9$
După eliminarea grupului de cuburi cu cifrele $0 \ 0 \ 0 \ 0$ se obţine: $1 \ 7 \ 7 \ 5 \ 5 \ 5 \ 5 \ 5 \ 7 \ 7 \ 7 \ 3 \ 9$
După eliminarea grupului de cuburi cu cifrele $5 \ 5 \ 5 \ 5 \ 5$ se obţine: $1 \ 7 \ 7 \ 7 \ 7 \ 7 \ 3 \ 9$
După eliminarea grupului de cuburi cu cifrele $7 \ 7 \ 7 \ 7 \ 7$ se obţine: $1 \ 3 \ 9$


# Exemplul 2

`turn.in`
```
21 4
1 2 2 2 2 1 1 3 3 3 3 3 1 1 4 4 4 4 4 1 1
```

`turn.out`
```
2
1 1
```

## Explicaţie

Evoluţia turnului este următoarea:
După eliminarea grupului de cuburi cu cifrele $2 \ 2 \ 2 \ 2$ se obţine: $1 \ 1 \ 1 \ 3 \ 3 \ 3 \ 3 \ 3 \ 1 \ 1 \ 4 \ 4 \ 4 \ 4 \ 4 \ 1 \ 1$
După eliminarea grupului de cuburi cu cifrele $3 \ 3 \ 3 \ 3 \ 3$ se obţine: $1 \ 1 \ 1 \ 1 \ 1 \ 4 \ 4 \ 4 \ 4 \ 4 \ 1 \ 1$
După eliminarea grupului de cuburi cu cifrele $1 \ 1 \ 1 \ 1 \ 1$ se obţine: $4 \ 4 \ 4 \ 4 \ 4 \ 1 \ 1$
După eliminarea grupului de cuburi cu cifrele $4 \ 4 \ 4 \ 4 \ 4$ se obţine: $1 \ 1$
