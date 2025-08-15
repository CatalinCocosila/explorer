După ce au descoperit ascunzătoarea piratului Spânu, marinarii de pe corabia “Speranţa” au hotărât să ofere sătenilor o parte din comoara acestuia. Întrucât comoara avea un număr nelimitat de bani din aur, numiţi galbeni, singura problemă a marinarilor a fost regula după care să împartă banii.

După îndelungi discuţii au procedat astfel: i-au rugat pe săteni să se aşeze în ordine la coadă şi să vină, pe rând, unul câte unul pentru a-şi ridica galbenii cuveniţi. Primul sătean a fost rugat să îşi aleagă numărul de galbeni, cu condiţia ca acest număr să fie format din exact $K$ cifre. Al doilea sătean va primi un număr de galbeni calculat astfel: se înmulţeşte numărul de galbeni ai primului sătean cu toate cifrele nenule ale acelui număr, rezultatul se înmulţeşte cu $8$ şi apoi se împarte la $9$ păstrându-se doar ultimele $K$ cifre ale câtului împărţirii. Dacă numărul obţinut are mai puţin de $K$ cifre, atunci acestuia i se adaugă la final cifra $9$, până când se completează $K$ cifre.

Pentru a stabili câţi galbeni primeşte al treilea sătean, se aplică aceeaşi regulă, dar pornind de la numărul de galbeni ai celui de-al doilea sătean. Regula se aplică în continuare fiecărui sătean, plecând de la numărul de galbeni primiţi de săteanul care a stat la coadă exact în faţa lui. 

# Cerința

Cunoscând numărul de galbeni aleşi de primul sătean, determinaţi numărul de galbeni pe care îl va primi al $N$-lea sătean.

# Date de intrare
Fișierul de intrare `galbeni.in` conține pe prima linie cele $3$ numere naturale nenule $S$, $K$, $N$ separate prin câte un spaţiu, unde $S$ reprezintă numărul de galbeni ales de primul sătean, $K$ este numărul de cifre ale numărului $S$, iar $N$ reprezintă numărul de ordine al săteanului pentru care se cere să determinaţi numărul de galbeni primiţi.

# Date de ieșire
Fișierul de ieșire `galbeni.out` va conține pe unica sa linie un număr natural reprezentând rezultatul determinat.

# Restricții și precizări
* $2 \leq N \leq 1 \ 000 \ 000 \ 000$;
* $1 \leq K \leq 3$;
* Se garantează că $S$ are exact $K$ cifre.

# Exemplul 1

`galbeni.in`
```
51 2 3
```

`galbeni.out`
```
77
```

## Explicație

Primul sătean a luat $51$ de galbeni. Cel de al doilea sătean va primi $26$ de galbeni ($51$ se înmulţeşte cu cifrele nenule $51 * 5 * 1 = 255$, $255$ se înmulţeşte cu $8$ și rezultă $2040$. Câtul împărţirii lui $2040$ la $9$ este $226$, ultimele două cifre fiind $26$).

Cel de al treilea sătean va primi $77$ de galbeni ($26$ se înmulţeşte cu cifrele nenule $26 * 2 * 6 = 312$, $312$ se înmulţeşte cu $8$ şi obţinem numărul $2496$. Câtul împărţirii dintre $2469$ şi $9$ este $277$, ultimele două cifre fiind $77$).

# Exemplul 2

`galbeni.in`
```
10 2 3
```

`galbeni.out`
```
96
```

## Explicație

Primul sătean primeşte $10$ galbeni. Pentru a calcula câţi galbeni primeşte al doilea sătean procedăm astfel: înmulţim $10$ cu cifele sale nenule: $10 * 1 = 10$, apoi cu $8$, $10 * 8 = 80$. Câtul împărţirii lui $80$ la $9$ este $8$. Acest număr având mai puţin de $K=2$ cifre, se adaugă la finalul său cifra $9$ şi se obţine $89$.

Pentru al treilea sătean se pleacă de la $89$ ($89 * 8 * 9 = 6408$, $6408 * 8 = 51264$, câtul împărţirii lui $51264$ la $9$ este $5696$, ultimele două cifre sunt $96$).
