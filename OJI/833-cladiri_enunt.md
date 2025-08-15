Având mai multe cuburi la dispoziție, Crina și Rareș au hotărât să construiască clădiri prin alipirea a două sau mai multor turnuri. Turnurile au fost obținute prin așezarea cuburilor unul peste celălalt. **Înălțimea unui turn** este dată de numărul de cuburi din care este format. Clădirile construite au fost așezate în linie, una lângă alta formând astfel o stradă, pe care cei doi copii se vor plimba.

~[cladiri.png|width=40em]

Pentru numerotarea clădirilor Crina și Rareș au stabilit următoarele reguli:
* Crina pornește dintr-un capăt al străzii iar Rareș din celălalt capăt al acesteia; fiecare dintre ei traversează strada complet, trecând prin dreptul fiecărei clădiri
* Crina lipește pe fiecare clădire, câte un bilețel pe care scrie înălțimea turnurilor din care aceasta este construită, în ordinea în care ea le vede când trece prin dreptul lor (de exemplu, pentru imaginea de mai sus, Crina va lipi pe prima clădire un bilețel pe care va scrie numărul $3112$ deoarece, primul turn e format din $3$ cuburi, următoarele două turnuri ale acestei clădiri sunt formate din câte un cub iar cel de-al patrulea turn e format din $2$ cuburi);
* Rareș va proceda la fel, dar începe plimbarea din celalalt capăt al străzii. În exemplul din imagine, el va lipi pe prima clădire pe care o întâlnește un bilețel pe care scrie numărul $2121$.

La finalul plimbării, Crina și Rareș își dau seama că există clădiri pe care au lipit amândoi bilețele cu numere identice.

# Cerință

1. Care este înălțimea celui mai înalt turn și care este numărul clădirilor care au în construcția lor un astfel de turn;
2. Care este numărul clădirilor pe care cei doi copii au lipit bilețele cu numere identice;
3. Care este cel mai mic număr de cuburi necesar pentru **a completa** clădirile astfel încât, pe fiecare clădire bilețelul pe care îl va lipi Crina să conțină același număr cu cel pe care îl va lipi Rareș. Cuburile din care a fost construită inițial clădirea nu se pot muta.

# Date de intrare

Din fișierul de intrare `cladiri.in` se va citi de pe prima linie un număr natural $N$, reprezentând numărul clădirilor de pe stradă iar de pe următoarele $N$ linii, câte un număr natural cu toate cifrele nenule, reprezentând numerele scrise de Crina pe bilețele, în ordinea în care au fost lipite de ea pe clădiri.

# Date de ieșire

În fișierul de ieșire `cladiri.out` se va scrie pe prima linie două numere naturale despărțite printr-un singur spațiu ce reprezintă, în ordine, valorile cerute la cerința $1$. Pe cea de-a doua linie a fișierului se va scrie un număr natural, mai mare sau egal cu zero reprezentând răspunsul la cerința $2$ iar pe cea de-a treia linie a fișierului se va scrie un număr natural mai mare sau egal cu zero reprezentând răspunsul la cerința $3$.

# Restricții și precizări

* $1 \leq N \leq 10 \ 000$;
* Fiecare clădire este alcătuită din cel mult $9$ turnuri, iar înălțimea fiecărui turn este exprimată printr-o cifră nenulă.
* Pentru rezolvarea corectă a cerinței $1$ se acordă $20$% din punctajul fiecărui test, pentru rezolvarea corectă a cerinței $2$ se acordă $40$% din punctajul fiecărui test iar pentru rezolvarea corectă a cerinței $3$ se acordă 40% din punctajul fiecărui test.
* Respectați formatul fișierului de ieșire! Pentru a obține punctajul acordat unei cerințe, trebuie ca răspunsul din fișier să fie corect și scris exact pe linia precizată în enunț.

# Exemplu

`cladiri.in`
```
6
3112
2772
42422
1741
27372
1212
```

`cladiri.out`
```
7 3
2
8
```

## Explicație

Cel mai înalt turn este format din $7$ cuburi. Sunt $3$ clădiri care au în construcția lor turnuri cu această înălțime, cele pe care Crina lipește numerele: $2772, 1741$ și $27372$. Rareș lipește pe clădiri bilețele cu numerele: $2121, 27372, 1471, 22424, 2772$ și $2113$. Două dintre aceste clădiri au primit aceleași numere și de la Crina: $2772$ și $27372$. Valoarea determinată conform cerinței $3$ este $8$. Se adaugă un cub la clădirea cu numărul $3112$, $2$ cuburi la cea cu numărul $42422$, $3$ cuburi la clădirea cu numărul $1741$ și $2$ cuburi la cea cu numărul $1212$.