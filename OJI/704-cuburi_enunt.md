# Cerință

Fratele cel mic al lui Gigel primise de la Moş Crăciun un joc de cuburi colorate. Gigel tocmai terminase clasa a V-a şi nu se mai juca cu aşa ceva, dar când nu se uitau ceilalţi parcă l-ar fi însoţit pe cel mic la joc, mai ales când acesta înşira cele $n$ cuburi unul după altul, iar lui îi treceau prin cap tot felul de cerinţe pe care proful său de info le-ar fi putut scorni:

1. să vedem câte culori sunt în total;
2. care culoare este folosită pentru cele mai multe cuburi;
3. pozitiile de unde ar trebui scos un cub din şir astfel încât să se formeze din cuburile rămase un şir cât mai lung de cuburi alăturate de aceeaşi culoare.

# Date de intrare

Se citesc din fisierul `cuburi.in` $n$, numărul de cuburi, şi apoi, pe urmatoarea linie, o succesiune de $n$ numere de culori, separate prin spaţii. Culorile sunt numerotate începând cu $1$. Se cere să se afişeze pe ecran câte un răspuns pe o câte o linie nouă pentru fiecare cerinţă.

# Date de ieșire

Fișierul de ieșire `cuburi.out` va conține câte o linie pentru răspunsul/răspunsurile fiecărei cerințe.

# Restricții și precizări

* $N$ este numar natural mai mic decât $200 \ 000$, iar culorile sunt în număr de maximum $10$, numerotate de la $1$ la $10$.
* Pentru teste in valoare de $40$ de puncte, $N \leq 100$;
* Pentru teste in valoare de alte $40$ de puncte, $N \leq 2\ 000$;
* Dacă la cerinţele $2$, $3$ sunt mai multe soluţii se vor preciza toate, in ordine crescatoare.
* Testele si restricțiile au fost modificate.

# Exemplu

`cuburi.in`
```
15
5 2 5 2 2 3 3 2 3 5 3 3 3 2 2
```

`cuburi.out`
```
3
2 3
10
```