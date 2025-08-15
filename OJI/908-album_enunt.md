Victor si Radu sunt frați. Mama le-a adus $n$ stickere cu fotbaliști, fiecare sticker având imprimat pe spate un cod, un număr cuprins între $10$ și $999999$. Frații, dorind cât mai multe stickere pe care să le lipească în albumul propriu, au început să se certe. Mama le propune următorul mod de împărțire a stickerelor: ea aranjează cele $n$ stickere în linie, cu fața în jos, și fiecare frate, pe rând, va lua primul sticker disponibil, precum și toate stickerele care conțin două cifre care sunt egale cu cele mai mari două cifre, nu neapărat distincte, dintre cele scrise pe primul sticker luat la această etapă. Stickerele sunt disponibile începând de la stânga spre dreapta. Fiind cel mai mic, Victor va fi primul, apoi copiii iau stickere alternativ, până când nu mai sunt stickere. La final, fiecare copil numără câte stickere are în total.

# Cerință

Cunoscând numărul $n$ de stickere aduse de mama și numerele de pe ele în ordinea în care sunt așezate pe masă, să se determine:

1. Cele mai mari două cifre, nu neapărat distincte, de pe ultimul sticker aflat pe masă înainte de începerea concursului;
2. Fratele care câștigă concursul și câte stickere are.

# Date de intrare

Fișierul de intrare `album.in` conține pe prima linie o cifră $c$ care poate să fie doar $1$ sau $2$. Pe a doua linie se găsește $n$ reprezentând numărul de stickere. Pe a treia linie se află $n$ numere naturale separate prin câte un spațiu, reprezentând numerele de pe stickere.

# Date de ieșire

Dacă valoarea lui $c$ este $1$, atunci se va rezolva numai punctul $1$ din cerință. În acest caz, fișierul de ieșire `album.out` va conține pe prima linie, în ordine crescătoare, cifrele cerute.

Dacă valoarea lui $c$ este $2$, se va rezolva numai punctul $2$ din cerință. În acest caz, fișierul de ieșire `album.out` va conține pe prima linie litera $V$ dacă Victor are mai multe stickere, litera $R$ dacă Radu are mai multe stickere, sau literele $V$ și $R$ separate prin exact un spațiu dacă amândoi au același număr de stickere. Pe a doua linie se va scrie numărul de stickere ale celui care are cele mai multe sau numărul de stickere deținut de fiecare, în cazul în care au același număr de stickere.

# Restricții și precizări

* $n$ este număr natural, $3 \leq n \leq 800 \ 000$;
* Pentru rezolvarea cerinței $1$ se obțin $40$ de puncte, iar pentru cerința $2$, $50$ de puncte.
* Se acordă $10$ puncte din oficiu
* Pentru cerința $2$, se garantează că, pentru $50$% dintre teste, $n \leq 100$.
* Numerele de pe stickere sunt numere naturale cuprinse între $10$ și $999 \ 999$.

# Exemplul 1

`album.in`
```
1
7
291 11 992 456 71 13 121
```

`album.out`
```
1 2
```

## Explicație

Cerința este $1$. Pe ultimul sticker de pe masă este scris numărul $121$, care are cele mai mari două cifre $1$ și $2$.

# Exemplul 2


`album.in`
```
2
7
234 122 334 199 463 221 231
```

`album.out`
```
V
4
```

## Explicație

Cerința este $2$. Victor începe concursul și ia stickerele $234$ (cu $3$ și $4$ cele mai mari două cifre), $334$ și $463$. Pe masă rămân stickerele $122 \ 199 \ 221 \ 231$. Continuă Radu, care ia stickerele cu numerele $122$ (cu cele mai mari două cifre $2$ și $2$) și $221$. Rămân stickerele $199$ și $231$. Victor mai ia stickerul cu numărul $199$, apoi Radu ia stickerul cu numărul $231$. Victor câștigă cu $4$ stickere, Radu având doar trei.

