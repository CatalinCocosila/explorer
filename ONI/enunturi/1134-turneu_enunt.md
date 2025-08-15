Impresarul unei formaţii de muzică trebuie să primească oferte de spectacole şi eventual anulări de spectacole din diferite oraşe. Oraşele sunt codificate prin numerele $1, 2, \dots, n$ şi fiecare oraş poate organiza cel mult un spectacol. Impresarul ţine legătura cu organizatorii de spectacole din aceste oraşe şi actualizează în permanenţă datele obţinute. Prin fax el primeşte $m$ mesaje, care pot fi de unul din cele două tipuri: $D \ nr$ sau $N \ nr$.

Cu semnificaţiile: pentru primul mesaj se doreşte organizarea unui concert în oraşul $nr$, iar pentru al doilea mesaj se doreşte anularea spectacolului din oraşul $nr$. Un mesaj este format din exact două linii.

Se cere:
1. Să se afişeze oraşele în care va concerta formaţia de muzică (pe aceeaşi linie cu un spaţiu între ele).
2. Să se afişeze oraşul (sau oraşele dacă sunt mai multe, pe aceeaşi linie cu un spaţiu între ele) în care organizatorii sunt cei mai nedecişi (adică au anulat şi propus organizarea de spectacol în oraşul lor de cele mai multe ori).
3. Să se afişeze numărul de oraşe care nu au trimis nici un mesaj impresarului.


# Date de intrare

Pe prima linie a fișierului de intrare `turneu.in` se găsesc două numere întregi, $n$ și $m$, reprezentând numărul de orașe și numărul de mesaje. 

Pe următoarele $m$ linii se găsesc perechi de forma $D \ nr$ sau $N \ nr$ cu semnificația din enunț.

# Date de ieșire

Pe prima linie a fișierului de ieșire `turneu.out` se vor afișa oraşele în care va concerta formaţia de muzică (pe aceeaşi linie cu un spaţiu între ele), în ordine crescătoare.
Pe cea de-a doua linie se vor afișa orașele cu un număr maxim de schimbări, în ordine crescătoare a numărului de ordine. 
Pe cea de-a treia linie se va afișa numărul de oraşe care nu au trimis nici un mesaj impresarului.

# Restricții și precizări

* $1 \leq n, m \leq 100 \ 000$;
* Testele și restricțiile au fost refăcute.
* Se garantează că nu se anulează vreun concert care nu era organizat, precum și faptul că nu se anunță din nou un concert care a fost deja anunțat. 

# Exemplu

`turneu.in`
```
5 6
D 2
D 3
N 3
D 3
D 5
N 2
```

`turneu.out`
```
3 5 
3 
2
```
