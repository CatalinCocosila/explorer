Gigel are de rezolvat următoarea problemă: se consideră numărul natural $N$ format din maxim $9$ cifre, distincte două câte două şi în care nu există cifra $0$. Gigel va trebui să facă bileţele pentru fiecare cifră din număr, bileţele pe care le va pune într-o căciulă, conform următorului algoritm: iniţial porneşte de la ultima cifră a numărului (cifra unităţilor) şi pune în căciulă bileţelul pe care este scrisă această cifră. Dacă aceasta este o valoare pară, începe parcurgerea numărului spre dreapta, în caz contrar spre stânga, parcurgerea făcându-se cu un număr de paşi egal cu cifra respectivă. În parcurgerea unui număr spre dreapta se consideră că după ultima cifră urmează prima (cea mai semnificativă cifră a numărului), după aceasta urmează a doua, etc., iar în deplasarea spre stânga după prima cifră (cea mai semnificativă cifră a numărului) urmează ultima cifră (cifra unităţilor), apoi penultima, etc., iar parcurgerea începe cu cifra din număr imediat de lângă cifra scrisă pe ultimul bileţel introdus în căciulă, respectând sensul parcurgerii. De exemplu, dacă numărul nostru este $1346$, Gigel porneşte de la cifra $6$, iar biletul pe care s-a scris această cifră îl pune în căciulă. Parcurge numărul spre dreapta, făcând $6$ paşi; trece prin cifrele: $1$, $3$, $4$, $6$, $1$ şi se opreşte la cifra $3$. Deci, în căciulă va pune bileţelul pe care este scrisă cifra $3$.

Algoritmul continuă până când se termină toate bileţelele sau când ajunge la o cifră pentru care bileţelul cu valoarea respectivă a fost introdus deja în căciulă.

# Cerinţă

În cazul în care algoritmul se încheie întrucât Gigel a pus toate bileţelele în căciulă, se va afişa cifra de pe ultimul bileţel introdus în căciulă, iar în cazul în care Gigel ajunge în timpul parcurgerii la o cifră pentru care bileţelul corespunzător a fost introdus deja în căciulă, se va afişa valoarea acestei cifre.

# Date de intrare

Pe prima linie a fișierului de intrare `numar.in` se găseste un număr întreg $N$.

# Date de ieșire

Pe prima linie a fișierului de ieșire `numar.out` se va afișa cifra la care Gigel a ajuns în momentul opririi algoritmului.

# Restricții și precizări

* $1 \leq n < 10^9$;
* $n$ nu conține cifre zero.

# Exemplul 1

`numar.in`
```
412
```

`numar.out`
```
4
```

## Explicație

Gigel începe cu cifra $2$ (bilețelul cu cifra $2$ este pus de Gigel în căciulă);  fiind valoare pară, parcurge spre dreapta  și se oprește la cifra $1$, bilețelul cu această cifră fiind pus în căciulă. Cifra $1$ fiind impară, continuă parcurgerea spre stânga și se oprește la cifra $4$ și pune astfel și ultimul bilețel în căciulă. Din acest moment nu mai există bilețele nepuse în căciulă și se va afișa deci cifra $4$.

# Exemplul 2


`numar.in`
```
1243
```

`numar.out`
```
3
```

## Explicație

Gigel începe cu cifra $3$ (bilețelul cu cifra $3$ este pus de Gigel în căciulă);  fiind valoare impară, parcurge spre stânga și se oprește la cifra $1$, bilețelul cu această cifră fiind pus în căciulă. Cifra $1$ fiind impară, continuă parcurgerea spre stânga și se oprește tot la cifra $3$, dar nu mai există bilețelul cu cifra $3$ pentru a putea fi pus în căciulă. Se va afișa deci, cifra $3$.

