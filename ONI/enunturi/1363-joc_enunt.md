~[joc.png|align=right]
Rareş şi Bogdan vor să facă mişcare în aer liber aşa că s-au gândit la un nou joc. Pe terenul de fotbal, ei au desenat o pistă circulară şi au împărţit-o în $n$ sectoare egale, ca în desenul alăturat (unde $n = 16$). Ei au etichetat cele $n$ sectoare cu numerele distincte de la $1$ la $n$, în sensul acelor de ceasornic.
Au stabilit ca jocul să se desfăşoare astfel:

* Se vor aşeza amândoi în sectorul numerotat cu $1$, spate în spate, astfel încât Bogdan se va deplasa în sensul acelor de ceasornic, iar Rareş în sens contrar.
* Prin sărituri executate simultan în anumite sectoare, copiii se vor deplasa pe pistă în sensuri contrare şi vor executa un număr egal de sărituri.
* O săritură a lui Bogdan are ca efect deplasarea acestuia din sectorul curent, în sensul acelor de ceasornic, avansând cu $x$ sectoare pe pistă. De exemplu, dacă $n = 16$ şi $x = 2$ atunci, pornind din sectorul $1$, Bogdan se va deplasa sărind succesiv, în această ordine, în sectoarele etichetate cu: $3, 5, 7, 9, \dots$
* O săritură a lui Rareş are ca efect deplasarea acestuia din sectorul curent, în sens contrar acelor de ceasornic, avansând cu $y$ sectoare pe pistă. De exemplu, dacă $n = 16$ şi $y = 3$ atunci, pornind din sectorul $1$, Rareş se va deplasa sărind succesiv, în această ordine, în sectoarele: $14, 11, 8, 5, \dots$
* Jocul se termină când cei doi copii ajung în urma săriturilor într-un acelaşi sector de pe pistă sau dacă unul dintre cei doi copii ajunge pentru a doua oară într-un acelaşi sector.

# Cerinţă

Scrieţi un program care să citească cele trei numere naturale nenule $n$, $x$ şi $y$, şi apoi să determine:
a) numărul $t$ al sectoarelor de pe pistă prin care nu trece niciunul dintre cei doi copii în urma săriturilor executate până la terminarea jocului
b) numărul $s$ de sărituri executate de fiecare copil până la terminarea jocului
c) etichetele $b$ şi $r$ ale sectoarelor în care ajung cei doi copii la terminarea jocului (Bogdan ajunge la finalul jocului în sectorul cu eticheta $b$, iar Rareş în cel cu eticheta $r$).

# Date de intrare

Fişierul de intrare `joc.in` conţine pe prima linie trei numere naturale $n$, $x$ şi $y$, separate prin câte un spaţiu, cu semnificaţia din enunţ.

# Date de ieşire

Fişierul de ieşire `joc.out` va conţine pe prima linie cele patru numere naturale determinate de program: $t$, $s$, $b$ şi $r$, separate prin câte un spaţiu, în această ordine, cu semnificaţia din enunţ.

# Restricţii şi precizări

* $16 \leq n \leq 40 \ 000$
* $1 \leq x \lt n$
* $1 \leq y \lt n$
* pentru rezolvarea corectă a primei cerinţe se acordă $20\%$ din punctaj, pentru rezolvarea corectă a celei de a doua cerinţe $40\%$ din punctaj şi pentru rezolvarea corectă a celei de a treia cerinţe $40\%$ din punctaj ($20\%$ pentru determinarea corectă a valorii $b$, respectiv $20\%$ pentru determinarea corectă a valorii $r$).

# Exemplul 1

`joc.in`
```
16 2 3
```

`joc.out`
```
4 8 1 9
```

## Explicaţie

Cei doi copii, executând simultan sărituri, trec până la terminarea jocului, prin sectoarele:

| Bogdan | Rareş |
| ------ | ----- | 
| 1 | 1 |
| 3 | 14 |
| 5 | 11 |
| 7 | 8 |
| 9 | 5 |
| 11 | 2 |
| 13 | 15 |
| 15 | 12 |
| 1 | 9 |

Jocul se termină după $s = 8$ sărituri deoarece Bodgan ajunge din nou în sectorul cu eticheta $b = 1$. La finalul jocului Rareş se află în sectorul cu eticheta $r = 9$. Cei doi copii nu au trecut prin $t = 4$ sectoare ale căror etichete sunt: $4$, $6$, $10$, $16$.

# Exemplul 2

`joc.in`
```
16 6 2
```

`joc.out`
```
12 2 13 13
```

## Explicație

Cei doi copii, executând simultan sărituri, trec până la terminarea jocului, prin sectoarele:

| Bogdan | Rareş |
| ------ | ----- | 
| 1 | 1 |
| 15 | 7 |
| 13 | 13 |

Jocul se termină după $s = 2$ sărituri deoarece Bodgan şi Rareş ajung amândoi în sectorul cu eticheta $b = r = 13$. Cei doi copii nu au trecut prin $t = 12$ sectoare ale căror etichete sunt: $2$, $3$, $4$, $5$, $6$, $8$, $9$, $10$, $11$, $12$, $14$, $16$.
