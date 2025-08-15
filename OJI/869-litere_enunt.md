Un copil dorește să găsească un mod original de a-și codifica numele și folosește în acest scop o figură formată doar din triunghiuri, desenată pe o foaie de hârtie. El plasează fiecare literă din numele său, în câte un triunghi. Dacă numele lui este `DARIUS`, atunci foaia de hârtie va arăta ca în figura $1$. Pe primul rând așează prima literă, pe al doilea rând următoarele trei litere, pe al treilea rând următoarele cinci litere, și așa mai departe până când așează toate literele din nume. Dacă numele nu are suficiente litere, copilul folosește caracterul `*` pentru a completa ultimul rând pe care pe care a așezat litere. Nemulțumit că numele poate fi citit relativ ușor, răstoarnă figura, rotind foaia de hârtie, în sensul acelor de ceasornic, obținând astfel figura $2$.

~[litere1.png|width=40em]

# Cerință

Cunoscând literele numelui, scrieți un program care determină și afișează în fișierul de ieșire:

1. Numărul de caractere `*` pe care trebuie să le utilizeze pentru a completa ultimul rând;
2. Prima literă de pe fiecare rând din figura inițială;
3. Șirul literelor de pe fiecare rând, după rotirea foii de hârtie.

# Date de intrare

Fișierul de intrare `litere.in` conține pe prima linie un număr natural $P$ reprezentând cerința din problemă care trebuie rezolvată, pe a doua linie un număr natural $N$, reprezentând numărul de litere din nume. Pe a treia linie din fișier se află numele copilului format din $N$ litere, majuscule din alfabetul englez. Literele sunt separate între ele prin câte un spațiu.

# Date de ieșire

Dacă valoarea lui $P$ este $1$, fișierul de ieșire `litere.out` va conține un număr natural, reprezentând numărul de caractere * din figură.
Dacă valoarea lui $P$ este $2$, fișierul de ieșire `litere.out` va conține, pe o singură linie, un șir de litere, separate între ele prin câte un spațiu, format din prima literă de pe fiecare rând al figurii, înainte de rotirea sa, începând cu primul rând până la ultimul.
Dacă valoarea lui $P$ este $3$, fișierul de ieșire `litere.out` va conține literele obținute după rotirea figurii inițiale, afișarea făcându-se în ordine de sus în jos, iar în cadrul unui rând, în ordine de la stânga la dreapta. Fiecare rând de litere va fi afișat în fișier pe câte o linie, iar literele situate pe același rând vor fi separate între ele prin câte un spațiu.

# Restricții și precizări

* $1 \leq N \leq 10 \ 000$;
* Pentru rezolvarea corectă a cerinței $1$ se acordă $10$ puncte, pentru rezolvarea corectă a cerinței $2$ se acordă $30$ de puncte, iar pentru rezolvarea corectă a cerinței $3$ se acordă $60$ de puncte.

# Exemplul 1

`litere.in`
```
1
6
D A R I U S
```

`litere.out`
```
3
```

## Explicație

Pentru scrierea numelui Darius se vor completa $3$ rânduri, formate din $9$ triunghiuri, dintre care $3$ vor conține caracterul *.

# Exemplul 2


`litere.in`
```
2
6
D A R I U S
```

`litere.out`
```
D A U
```

## Explicație

Prima literă de pe primul rând este $D$, prima literă de pe rândul $2$ este $A$, prima literă de pe rândul $3$ este $U$.

# Exemplul 3


`litere.in`
```
3
6
D A R I U S
```

`litere.out`
```
U
S A
I R D
```

## Explicație

După rotire, pe primul rând se află litera $U$, pe al doilea rând literele $S \ A$, iar pe rândul al treilea, în ordine de la stânga la dreapta, literele $I \ R \ D$.

