Andrei şi prietenii săi s-au hotărât să joace Remi, acest joc conţine mai multe piese de aceeaşi dimensiune, pe fiecare piesă fiind scrisă o cifră de la $0$ la $9$.
~[remi.png|align=right]
La începutul jocului toate piesele se află într-un săculeţ de unde fiecare jucător va extrage pe rând piesele astfel: prima piesă extrasă o va numi “Jolly Joker” şi o va păstra pentru a o așeza ulterior pe tabla de joc. Acelaşi jucător extrage apoi, una câte una, încă $N$ piese din săculeţ pe care le aranjează de la stânga la dreapta pe tabla lui de joc, în ordinea în care le-a extras. După ce toţi jucătorii şi-au aranjat piesele, începe jocul în care se vor respecta următoarele reguli:

* piesa ”Jolly Joker” poate fi aşezată oricând și oriunde pe tabla jucătorului ce a extras-o
* cel mult una din cele $N$ piese extrase după “Jolly Joker” și aşezate pe tabla de joc, poate fi mutată de la locul ei şi aşezată în alt loc pe aceeaşi tablă

Câştigătorul jocului este desemnat cel care poate forma, respectând regulile jocului, cel mai mare număr, citit de la stânga la dreapta cu cifrele scrise pe cele $N + 1$ piese aşezate pe tabla sa de joc.

# Cerinţă

Cunoscând piesele extrase de Andrei, ajutaţi-l să construiască numărul astfel încât să aibă cele mai mari șanse în câștigarea jocului.

# Date de intrare

Fişierul de intrare `remi.in` conţine:

* pe prima linie o singură cifră reprezentând piesa “Jolly Joker” extrasă de Andrei
* pe cea de-a doua linie numărul natural $N$, reprezentând numărul pieselor extrase în continuare, de Andrei
* pe cea de-a treia linie, $N$ cifre despărţite prin câte un spaţiu, reprezentând cifrele scrise pe piesele lui Andrei, în ordinea extragerii lor şi aşezării acestora pe tabla de joc

# Date de ieşire

Fişierul de ieşire `remi.out` va conţine pe prima linie un singur număr natural, reprezentând cel mai mare număr format cu cele $N + 1$ piese de joc ale lui Andrei, respectând regulile jocului.

# Restricţii şi precizări

* $1 \leq N \leq 10 \ 000$
* Numerele de pe piese sunt cifre de la $0$ la $9$

# Exemplu

`remi.in`
```
3
5
4 2 7 0 4
```

`remi.out`
```
743204
```

## Explicaţie

Piesa “Jolly Joker” are cifra $3$
Andrei a extras alte $5$ piese din săculeţ în următoarea ordine: $4, 2, 7, 0$ şi $4$.
Din cele cinci piese extrase, piesa care îşi schimbă locul este cea care conţine cifra $7$.
Cel mai mare număr construit de Andrei în jocul de remi este: $743204$
