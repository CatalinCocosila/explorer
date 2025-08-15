~[cartier1.png|align=right]
Victor este un băiat deştept şi simpatic, dar care se plictiseşte foarte uşor. Tatăl său trebuie să născocească în permanenţă noi jocuri care să îl stimuleze. Ultimul joc, cartier, are trei niveluri şi se joacă utilizând o mulţime de cuburi gri, toate de aceeaşi dimensiune.
La primul nivel, Victor trebuie să construiască un bloc de formă dreptunghiulară format din $m$ cuburi astfel încât suma dintre înălţimea blocului $(H)$ şi lăţimea sa $(L)$ să fie minimă şi $L \leq H$. De exemplu, pentru $n = 6$ se pot construi patru blocuri ca în imagine, dar doar primul bloc $(B_1)$ respectă condiţiile cerute.
Pentru a finaliza cel de-al doilea nivel al jocului, Victor trebuie să construiască un cartier, având la dispoziţie un număr dat de cuburi pentru fiecare bloc care formează cartierul. Pentru construcţia fiecărui bloc se respectă cerinţele de la primul nivel al jocului. În interiorul cartierului, blocurile sunt aşezate, în ordinea obţinerii lor, lipite unul de celălalt.
La al treilea nivel, Victor trebuie să determine un număr maxim de blocuri alăturate, astfel încât înălţimea primului bloc din şir şi înălţimea ultimului bloc din şir să nu fie numere prime între ele.
Ajutaţi-l pe Victor să finalizeze nivelurile doi şi trei ale jocului cartier.

# Cerinţă

Scrieţi un program care determină următoarele numere:

1. $x$, ce reprezintă numărul blocurilor de înălţime maximă construite la nivelul al doilea
2. $y$, ce reprezintă suma lăţimilor blocurilor din cartierul construit la nivelul al doilea
3. $z$, ce reprezintă numărul de blocuri din şirul determinat la nivelul al treilea

# Date de intrare

Fişierul de intrare `cartier.in` conţine pe prima linie un număr natural $n$ (numărul de blocuri de construit) şi pe a doua linie $n$ numere naturale, separate prin câte un spaţiu, reprezentând numărul de cuburi corespunzătoare fiecărui bloc.

# Date de ieşire

Fişierul de ieşire `cartier.out` conţine numerele $x$, $y$ şi $z$, în această ordine, fiecare pe câte o linie.

# Restricţii şi precizări

* Numerele naturale citite aparţin intervalului $[1, 100 \ 000]$
* Pentru rezolvarea corectă a cerinţei $1$ se obţine $30\%$ din punctaj. Pentru rezolvarea corectă a cerinţei $2$ se obţine $30\%$ din punctaj. Pentru rezolvarea corectă a cerinţei $3$ se obţine $40\%$ din punctaj.

# Exemplu

`cartier.in`
```
6
7 4 10 12 10 15
```

`cartier.out`
```
1
13
4
```

## Explicaţie

~[cartier2.png|align=center]
~[cartier3.png|align=center]
