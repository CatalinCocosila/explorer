Se consideră un tablou bidimensional de dimensiuni date $m$ (numărul de linii) şi $n$ (numărul de coloane), ale cărei elemente sunt cifre ale sistemului de numeraţie zecimal. Cu elementele unei linii se construieşte un număr scris în cea mai mică bază posibilă, utilizând toate cifrele de pe linia respectivă, luate de la stânga la dreapta. Se spune că acest număr se ataşează liniei respective. După această regulă se ataşează numere fiecărei linii, numere care se transformă apoi în baza $10$. Se identifică cel mai mare număr scris în baza $10$ dintre numerele ataşate fiecărei linii şi linia pe care se află; dacă sunt mai multe linii pe care se află cel mai mare număr, se alege cea cu indicele cel mai mic (cea mai de sus). Să notăm indicele acestei linii cu $p$. De pe linia $p$ se identifică, dacă există, coloana cu indicele cel mai mic (cea mai din stânga) pe care se află o cifră pară. Să notăm indicele acestei coloane cu $q$. Dacă există o astfel de coloană, atunci se elimină din tablou linia $p$ şi coloana $q$. Prin eliminare, numărul de linii şi numărul de coloane ale tabloului scad cu $1$, astfel, dacă, de exemplu, s-ar elimina linia $3$, atunci linia $4$ va deveni linia $3$, linia $5$ va deveni linia $4$, $\dots$, linia $m$ va deveni linia $m - 1$, iar dacă, de exemplu, s-ar elimina coloana $4$, atunci coloana $5$ va deveni coloana $4$, coloana $6$ va deveni coloana $5$, $\dots$, coloana $n$ va deveni coloana $n - 1$. S-a obţinut astfel un nou tablou bidimensional, în care liniile se consideră având indicii $1, 2, \dots$, ş.a.m.d., iar coloanele indicii $1$, $2$, $\dots$, ş.a.m.d. Dacă pe linia $p$ nu se poate găsi o cifră pară, tabloul nu se modifică.
Se reia procedeul de mai sus pentru noul tablou, începând cu ataşarea numerelor pentru noile linii, identificarea celui mai mare număr în baza $10$, identificarea liniei $p$ şi coloanei $q$ (dacă există) şi apoi eliminarea liniei $p$ şi coloanei $q$, dacă este cazul. Procedeul se opreşte fie când nu se mai identifică pe linia $p$ o cifră pară, fie când cel puţin una dintre dimensiunile tabloului (numărul de linii sau numărul de coloane) a ajuns la valoarea $1$.

# Cerinţă

Dându-se tabloul bidimensional cu $m$ linii şi $n$ coloane, se cere:
1. Să se afişeze bazele minime care au fost alese pentru fiecare număr ataşat fiecărei linii din tabloul iniţial
2. Să se afişeze cel mai mare număr scris în baza $10$ dintre numerele ataşate tabloului iniţial
3. Să se afişeze numărul de linii şi numărul de coloane pentru tabloul final, precum şi tabloul final

# Date de intrare

Fişierul de intrare `tablou.in` va conţine:
* pe prima linie din fişier se află numărul natural $m$ care reprezintă numărul de linii şi numărul natural $n$ care reprezintă numărul de coloane din tabloul iniţial, numere separate între ele printr-un spaţiu
* pe următoarele $m$ linii câte $n$ numere separate două câte două printr-un spaţiu

# Date de ieşire

Fişierul de ieşire `tablou.out` va conţine:
* pe prima linie se vor afişa $m$ numere separate două câte două printr-un spaţiu, reprezentând bazele conform cerinţei $a)$;
* pe a doua linie se află numărul solicitat conform cerinţei $b)$;
* pe a treia linie se află numărul de linii şi numărul de coloane pentru tabloul final, numere separate printr-un spaţiu (fie acestea $x$ şi $y$);
* pe următoarele $x$ linii se află câte $y$ numere separate două câte două printr-un spaţiu.

# Restricţii şi precizări

* $2 \leq m, n \leq 10$.
* Cel mai mare număr ataşat unei linii, număr scris în baza $10$ este $2 \ 000 \ 000 \ 000$. Cea mai mică bază în care poate fi scris un număr ataşat unei linii este baza $2$ şi cea mai mare este $10$.
* Se acordă punctaje parţiale: cerinţa $1$, $20\%$ din punctaj, cerinţa $2$, $20\%$ din punctaj, cerinţa $3$, $60\%$ din punctaj.

# Exemplu

`tablou.in`
```
4 4
1 0 1 1
2 0 1 2
1 3 1 3
3 0 0 0
```

`tablou.out`
```
2 3 4 4
192
2 2
1 1
1 3
```

## Explicaţie

Numerele ataşate liniilor sunt: $1011$ în baza $2$, $2012$ în baza $3$, $1313$ în baza $4$, $3000$ în baza $4$. Valorile acestora în baza $10$ sunt: $11, 59, 119, 192$. Cel mai mare este $192$ şi se află pe linia $4$. Primul element par de pe linia $4$ este pe coloana a doua. Se vor elimina deci linia $4$ şi coloana $2$. Tabloul rămas are $3$ linii şi $3$ coloane şi are valorile:

$$
\begin{array} {|r|r|r|r|}
\hline
1 & 1 & 1 \\
\hline
2 & 1 & 2 \\
\hline
1 & 1 & 3 \\
\hline
\end{array}
$$

şi se reia procedeul.
Numerele ataşate liniilor noului tablou sunt: $111$ în baza $2$, $212$ în baza $3$, $113$ în baza $4$. Valorile acestora în baza $10$ sunt: $7$, $23$, $23$. Cel mai mare este $23$, iar primul egal cu $23$ se află pe linia $2$. Primul element par de pe linia $2$ este pe prima coloană. Se vor elimina deci linia $2$ şi coloana $1$. Tabloul rămas are $2$ linii şi $2$ coloane şi are valorile:

$$
\begin{array} {|r|r|r|r|}
\hline
1 & 1 \\
\hline
1 & 3 \\
\hline
\end{array}
$$

şi se reia procedeul.
Numerele ataşate liniilor sunt: $11$ în baza $2$, $13$ în baza $4$. Valorile acestora în baza $10$ sunt: $3$, $7$. Cel mai mare este $7$ şi se află pe linia $2$. Pe această linie nu se află niciun element par, deci procedeul se încheie. 
