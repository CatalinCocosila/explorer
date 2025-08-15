Pe o tablă de șah cu $n$ linii și $n$ coloane se află firimituri de pâine și o furnică. Pentru fiecare pătrățel, inclusiv cel în care se găsește furnica, aflat pe linia $i$ și coloana $j$, cantitatea de firimituri de pâine este egală cu restul împărțirii lui $i + j$ la $6$. Astfel pentru $n = 4$ tabla de șah conține următoarele cantități de firimituri:

|2|3|4|5|
-|-|-|-
|**3**|**4**|**5**|**0**|
|**4**|**5**|**0**|**1**|
|**5**|**0**|**1**|**2**|

Furnica (notată cu `F` în figura de mai jos) se poate deplasa din pătrățelul unde se găsește în toate cele opt pătrățele vecine, numerotate ca mai jos:

|8|1|2|
-|-|-
|**7**|**F**|**3**|
|**6**|**5**|**4**|

Furnica se deplasează, pornind din pătrățica aflată în colțul din stânga sus, în una dintre pătrățelele vecine, și așa mai departe. Pe drumul său furnica se hrănește cu toată cantitatea de firimituri din pătrățelele prin care a trecut (după ce iese din pătrățică catitatea de firimituri devine $0$). Drumul furnicii este dat printr-un șir de $k$ numere naturale (cuprinse între $1$ și $8$) care precizează, la fiecare pas, următorul pătrățel din drum.

# Cerință

Scrieți un program care pentru un drum dat determină cantitatea totală de firimituri mâncată de furnică, precum și numărul pătrățelelor prin care aceasta a trecut de cele mai multe ori.

# Date de intrare

Fișierul de intrare `furnica.in` conține pe prima linie numerele $n$ și $k$, separate între ele printr-un spațiu, iar pe linia următoare $k$ numere naturale ($1, 2, 3, 4, 5, 6, 7$ sau $8$) separate prin câte un spațiu, reprezentând următorul pătrățel din drum pentru un pătrățel curent.

# Date de ieșire

Fișierul de ieșire `furnica.out` va conține, pe prima linie, cantitatea totală și numărul pătrățelelor din cerință separate printr-un spațiu.

# Restricții și precizări

* $1 < n < 101$;
* $0 < k < 201$;
* Drumul furnicii nu iese din tablou.

# Exemplu

`furnica.in`
```
4 10
3 6 5 3 2 6 3 6 2 3
```

`furnica.out`
```
23 2
```

## Explicație

Drumul furnicii trece prin pătrățelele (linie, coloană) următoare: $(1,1) \rightarrow (1,2) \rightarrow (2,1) \rightarrow (3,1) \rightarrow (3,2) \rightarrow (2,3) \rightarrow (3,2) \rightarrow (3,3) \rightarrow (4,2) \rightarrow (3,3) \rightarrow (3,4)$.

Pe drum se mănâncă următoarea cantitate de firimituri: $2+3+3+4+5+5+0+0+0+0+1=23$ 

Prin pătrățelele de coordonate $(3,2)$ și $(3,3)$ se trece de cele mai multe ori (de două ori).