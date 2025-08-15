La începutul lunii aprilie a fost lansată o nouă versiune a cunoscutului joc $\text{TETRIS}$. Un pasionat jucător, Nicuşor, este nerăbdător să joace acest joc şi de aceea citeşte cu atenţie regulamentul:

* jocul se desfăşoară pe o suprafaţă dreptunghiulară, împărţită în $m \times n$ pătrate identice cu latura de $1 \text{cm}$, dispuse pe $m$ linii şi $n$ coloane
* jucătorul are la dispoziţie $s$ piese, fiecare piesă fiind un pătrat de latură $1 \text{cm}$ pe care este înscris un număr natural nenul mai mic sau egal cu $9$, reprezentând valoarea piesei
* iniţial, toate cele $s$ piese sunt aşezate într-un şir, în afara suprafeţei de joc
* numim turn un şir de piese aşezate în aceeaşi coloană, una deasupra celeilalte, ultima piesă aşezată în coloană fiind vârful turnului; înălţimea unui turn reprezintă numărul de piese ce alcătuiesc turnul
* jocul începe cu aşezarea primei piese din şir pe suprafaţa de joc în pătratul din colţul-stânga jos
* în continuare, se încearcă aşezarea celorlalte piese, în ordinea în care acestea apar în şir, după următoarele reguli:
	* se caută, pe suprafaţa de joc, de la stânga la dreapta, primul turn de înălţime strict mai mică decât $m$ care conţine în vârf cele mai multe piese cu aceeaşi valoare ca a piesei ce trebuie adăugate
		* dacă există un astfel de turn, piesa va fi plasată în vârful său
		* dacă nu există un astfel de turn, se caută, pe suprafaţa de joc, de la stânga la dreapta, primul turn ce conţine cele mai puţine piese. Piesa se aşează în vârful acestui turn numai dacă numărul de piese ce formează turnul este strict mai mic decât $m$
* dacă, imediat după adăugarea unei piese se obţine un turn care la vârf conţine $3$ piese cu aceeaşi valoare, atunci toate cele $3$ piese sunt eliminate de pe suprafaţa de joc
* jocul se încheie atunci când pe suprafaţa de joc nu mai sunt locuri libere sau când se termină şirul de piese.

**Exemplu**. Dacă suprafaţa are configuraţia din $\text{Fig}. 1$ şi trebuie adăugată piesa cu valoarea $6$, atunci aceasta va fi aşezată în vârful turnului al $3$-lea, deasupra piesei cu numărul $9$, obţinându-se configuraţia din $\text{Fig}. 2$; iar dacă valoarea piesei ce trebuie aşezată este $1$ atunci aceasta se aşează deasupra primului turn ce conţine în vârf două valori $1 \ (\text{Fig}. 3)$, după care cele $3$ piese cu valoarea $1$ se elimină de pe suprafaţa de joc $(\text{Fig}. 4)$
~[tetris1.png|align=center]

# Cerinţă

Scrieţi un program care să determine, pentru o anumită suprafaţă de joc şi un şir de piese dat, numărul $p$ de piese aşezate pe suprafaţa de joc, numărul $t$ de piese aflate pe suprafaţă la încheierea jocului, numărul $h$ de piese din cel mai înalt turn aflat pe suprafaţa de joc în timpul jocului.

# Date de intrare

Fişierul de intrare `tetris.in` conţine pe prima linie cele trei numere naturale, $m$, $n$ şi $s$ separate prin câte un spaţiu.
Pe următoarea linie se află şirul celor $s$ cifre nenule separate prin câte un spaţiu, reprezentând valorile celor $s$ piese, în ordinea în care vor fi adăugate pe suprafaţa de joc.

# Date de ieşire

Fişierul de ieşire `tetris.out` conţine pe prima linie numărul $p$, pe a doua linie numărul $t$ şi pe a treia linie numărul $h$.

# Restricţii şi precizări

* $1 \leq m \leq 1 \ 000$
* $1 \leq n \leq 9$
* $1 \leq s \leq 100 \ 000$
* nu se aşează pe suprafaţă mai multe piese în acelaşi moment
* se acordă $20\%$ din punctaj pentru determinarea valorii $p$ şi câte $40\%$ din punctaj pentru determinarea fiecăreia dintre valorile $h$ şi $t$;

# Exemplu

`tetris.in`
```
4 2 8
1 2 2 1 2 4 5 4
```

`tetris.out`
```
8
5
3
```

## Explicaţie

Adăugarea pieselor modifică suprafaţa de joc astfel:
~[tetris2.png|align=center]
