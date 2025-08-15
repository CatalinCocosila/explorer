Acum iarna s-a terminat și, apropiindu-se sezonul de vară, gospodarii din orașul de pe malul fluviului doresc să pregătească faleza pentru a primi cum se cuvine turiștii. Faleza este sub formă dreptunghiulară cu lungimea de $n$ metri și lățimea de $2$ metri. În toamnă ea era pavată cu $2 \cdot n$ dale pătrate cu latura de un metru, lipite una de alta și care acopereau complet zona falezei. În urma iernii grele, unele dale s-au deteriorat și acum se dorește înlocuirea lor.
Cum de multe ori oamenii fac treaba doar "pe jumătate", gospodarii au hotărât să cheltuie cât mai puțin pentru reamenajarea falezei, așa că au decis că nu trebuie neapărat să înlocuiască toate dalele deteriorate, ci doar un număr minim dintre acestea astfel încât să fie posibil să se parcurgă faleza de la un capăt la altul pășind doar pe dale bune (nedeteriorate). De pe o dală pe alta se poate păși doar dacă ele au o latură comună.

# Cerinţă

Scrieţi un program care să determine numărul minim de dale deteriorate ce trebuie înlocuite astfel încât faleza să poată fi parcursă de la un capăt la altul.

# Date de intrare

Fișierul de intrare `faleza.in` are pe prima linie un număr natural $n$ ce reprezintă lungimea falezei. Pe linia a doua și a treia se află câte $n$ numere care pot fi $0$ sau $1$. Pe aceeași linie, numerele sunt separate prin câte un spațiu. O valoare $1$ semnifică prezența unei dale bune în acel loc iar valoarea $0$ semnifică o dală deteriorată. Pe linia a doua a fișierului se află codificarea unei părți din faleză (să spunem că aceea aflată către apă), iar pe linia a treia se află codificarea celeilalte părți a falezei. Dalele sunt lipite una de alta în cadrul aceleiași linii, și două câte două pe coloane.

# Date de ieșire

Fișierul de ieșire `faleza.out` conține un singur număr natural ce reprezintă numărul minim de dale deteriorate ce trebuie înlocuite pentru a putea fi parcursă faleza de la un capăt la celălalt.


# Restricții și precizări

* $3 \leq n \leq 100 \ 000$;
* pentru teste în valoare de $20$ puncte, una dintre părțile falezei are în întregime dale deteriorate.

# Exemplu

`faleza.in`
```
8
0 0 1 1 1 0 0 0
0 0 0 0 0 0 0 1
```

`faleza.out`
```
5
```

## Explicație

Am notat cu `D` o dală înlocuită.
`D D 1 1 1 0 0 0`
`0 0 0 0 D D D 1`
În această soluție, faleza poate fi parcursă de la stânga la dreapta pășind pe $5$ dale de sus, apoi se coboară pe partea de jos și se pășește pe cele $4$ dale, până se ajunge în dreapta.

**sau**

`D D 1 1 1 D D D`
`0 0 0 0 0 0 0 1`
În această soluție, faleza poate fi parcursă de la stânga la dreapta pășind doar pe dalele de sus.