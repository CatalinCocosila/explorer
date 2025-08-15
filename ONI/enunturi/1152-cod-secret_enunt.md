Simpatie mare între Ionel şi Mărioara, doi elevi veniţi în tabără la Gălăciuc…! Pentru a scăpa de indiscreţia colegilor, cei doi hotărăsc să-şi trimită mesaje, unul altuia, folosind o metodă simplă de criptare: textul de criptat se scrie pe o foaie, aranjând literele cuvintelor într-un tablou având câte $5$ caractere pe fiecare linie. Spaţiul dintre cuvinte este şi el caracter. Textul astfel aranjat pe un număr suficient de linii pentru a încape, se citeşte pe coloane, de sus în jos şi de la stânga la dreapta. În locul spaţiilor dintre cuvinte se pun puncte. Tot puncte se pun şi la sfârşitul textului, atâtea câte spaţii libere sunt rămase la sfârşitul textului pus în tablou.

Spre exemplu, textul: `Te astept dupa cina la ora 8`, se va aranja în tablou astfel:

|1|2|3|4|5|
|-|-|-|-|-|
|T|e| |a|s|
|t|e|p|t| |
|d|u|p|a| |
|c|i|n|a| |
|l|a| |o|r|
|a| |8| | |

și se va codifica: `Ttdclaeeuia..ppn.8ataao.s...r.`.

Decodificarea mesajului se va face invers codificării.

Ajutaţi-i, realizând un program care să codifice şi să decodifice mesajele celor doi copii. Pentru diferenţierea mesajelor ce trebuie codificate, de cele care trebuie decodificate, primul caracter al mesajului va fi $C$ sau $c$ pentru codificare, respectiv $D$ sau $d$ pentru decodificare. Acest caracter nu va face parte din mesaj.

# Date de intrare

Pe prima linie a fișierului de intrare `cod-secret.in` se găsește un șir de caractere. Șirurile de caractere pot conține și spații.

# Date de ieșire

Pe prima linie a fișierului de ieșire `cod-secret.out` se va găsi șirul codificat sau decodificat, după caz.

# Restricții și precizări

* Lungimea șirului de caractere este cel mult $1 \ 001$.

# Exemplul 1

`cod-secret.in`
```
CAm un mar
```

`cod-secret.out`
```
A.mm.aurn.
```

# Exemplul 2


`cod-secret.in`
```
dTaGia.aubllcaaa.r.c.
```

`cod-secret.out`
```
Tabara la Galaciuc
```

