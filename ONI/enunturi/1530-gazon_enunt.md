~[image.png|align=right]

Tudorel și-a construit la Bușteni o casă de vacanță frumoasă. Pentru că dorește ca și curtea să fie frumoasă, a decis să o acopere cu gazon. Curtea are formă dreptunghiulară, cu dimensiunile $a$ și $b$, exprimate în metri.

Tudorel a discutat cu o firmă de specialitate, iar specialiștii firmei i-au spus că pot acoperi grădina cu dale de gazon de formă pătrată de latură $d$ metri. Dacă este necesar, dalele pot fi tăiate cu un cuțit special. Cuțitul are o lamă lungă ($\gt d$), poate fi plasat paralel cu una dintre laturile dalei, iar atunci când taie, face o tăietură completă, de la un capăt la celălalt, obținându-se două fâșii dreptunghiulare. Totuși, specialiștii afirmă că gazonul nu rezistă dacă într-o dală se execută mai multe tăieturi și că este obligatoriu ca, atunci când o zonă de grădină nu este acoperită de o dală întreagă, să fie acoperită de o singură fâșie (nu mai multe). În acest mod, spun specialiștii, este posibil ca în unul dintre colțurile grădinii să rămână o zonă dreptunghiulară neacoperită. Tudorel spune că în acest caz va cumpăra un câine și va instala acolo cușca câinelui. 

Evident, Tudorel dorește să acopere cu gazon întreaga curte cheltuind cât mai puțini bani. Firma i-a comunicat:

- costul $cd$ al unei dale de gazon
- costul $ct$ al unei tăieturi
- costul $cm$ al montării unei dale sau al unei fâșii

# Cerințe

Scrieți un program care citește dimensiunile curții, dimensiunea unei dale, precum și cele $3$ costuri, $cd, ct$ și $cm$, și rezolvă următoarele trei cerințe:

1. determină numărul de dale **întregi** montate în curte și aria minimă a cuștii câinelui ($amin$);
2. determină numărul total minim de dale de gazon necesare pentru a acoperi întreaga curte;
3. determină suma minimă pe care trebuie să o plătească Tudorel pentru a acoperi întreaga curte.

# Date de intrare

Prima linie a fișierului de intrare `gazon.in` conține un număr natural $C$, reprezentând cerința care trebuie rezolvată ($1, 2$ sau $3$). A doua linie a fișierului conține trei numere naturale separate prin câte un spațiu, $a b d$, reprezentând dimensiunile curții și dimensiunea unei dale de gazon. Pe a treia linie a fișierului de intrare se găsesc trei numere naturale separate prin câte un spațiu, $cd ct cm$, reprezentând costurile unei dale, unei tăieturi, respectiv a montării unei dale sau fâșii.

# Date de ieșire

Fișierul de ieșire `gazon.out` va conține o singură linie pe care va fi scris răspunsul la cerința indicată în fișierul de intrare. Dacă cerința este $1$, răspunsul va fi format din două numere naturale separate printr-un spațiu, $nr amin$, unde $nr$ reprezintă numărul de dale întregi montate în curte, iar $amin$ aria minimă a cuștii câinelui. Pentru cerințele $2$ sau $3$, răspunsul va fi un singur număr natural (numărul total minim de dale necesare pentru cerința $2$, respectiv suma minimă pentru cerința $3$).

# Restricții și precizări

* $1 \leq a, b, d \leq 10 \ 000 \ 000$
* $1 \leq ct, cd, cm \leq 1 \ 000$
* Dacă nu rămâne loc pentru cușca câinelui, $amin$ va fi $0$.
* Pentru rezolvarea cerinței $1$ se acordă 10% din punctaj, pentru rezolvarea cerinței $2$ se acordă 60% din punctaj, iar pentru rezolvarea cerinței $3$ se acordă 30% din punctaj.

# Exemplul 1

`gazon.in`
```
1
13 14 4
1 1 1
```

`gazon.out`
```
9 2
```

## Explicație

$9$ dale întregi zona care nu poate fi acoperită are aria $2(2 × 1)$

# Exemplul 2


`gazon.in`
```
2
13 14 4
1 1 1
```

`gazon.out`
```
14
```

## Explicație

$14$ dale ($9$ întregi + $5$ tăiate) $5$ tăieturi

# Exemplul 3


`gazon.in`
```
3
13 14 4
1 1 1
```

`gazon.out`
```
34
```

## Explicație

$14$ dale ($9$ întregi și $5$ tăiate) $5$ tăieturi $15$ montări

~[image2.png|align=left]