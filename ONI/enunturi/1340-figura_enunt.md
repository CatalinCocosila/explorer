Dintr-o foaie de matematică pe care se află $D \times D$ pătrăţele aranjate în $D$ linii şi $D$ coloane a fost decupată o figură. Figura decupată este compactă (nu are găuri) şi este formată din $N$ pătrăţele de pe foaie.

# Cerinţă

Scrieţi un program care să determine perimetrul figurii decupate.

# Date de intrare

Fişierul de intrare `figura.in` conţine pe prima linie numărul natural $D$. Pe cea de a doua linie se află numărul natural $N$. Pe următoarele $N$ linii sunt descrise coordonatele pătrăţelelor decupate (linia şi coloana pe care se află pătrăţelul, separate prin spaţiu), câte un pătrat pe o linie.

# Date de ieşire

Fişierul de ieşire `figura.out` va conţine o singură linie pe care va fi scris un singur număr natural reprezentând perimetrul figurii decupate.

# Restricţii şi precizări

* $1 \leq D \leq 20$
* $1 \leq N \leq D \cdot D$
* Liniile sunt numerotate de sus în jos de la $1$ la $D$; coloanele sunt numerotate de la stânga la dreapta de la $1$ la $D$.
* Lungimea laturii unui pătrăţel este $1 \text{cm}$.

# Exemplu

`figura.in`
```
6
3
1 1
1 2
2 1
```

`figura.out`
```
8
```

## Explicaţie

Foaia de matematică are $36$ de pătrăţele aranjate în $6$ linii şi $6$ coloane. Figura decupată este marcată cu negru.
~[figura.png|align=center]
