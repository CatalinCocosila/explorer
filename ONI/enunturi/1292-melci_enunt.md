~[melci.png|align=right]
Andrei şi Mihai au găsit în grădina casei doi melci. Pentru a vedea cât de repede se deplasează aceştia, i-au dus în casă unde este o scară cu $n$ trepte, fiecare treaptă fiind înaltă de $p$ centimetri şi lată tot de $p$ centimetri. Andrei a aşezat melcul său pe prima treaptă, iar Mihai a urcat la etaj şi a aşezat melcul său pe ultima treaptă, conform desenului. Astfel, cei doi melci vor începe deplasarea prin parcurgerea treptei pe care se află. Pentru a parcurge în lăţime o treaptă melcul se deplasează exact p centimetri, iar pentru a coborî sau urca o treaptă melcul se deplasează tot $p$ centimetri. Deplasările celor doi melci se realizează pe lângă perete.
**Melcul lui Andrei parcurge** într-o secundă $2$ centimetri. După ce a parcurs $2$ centimetri, dacă se află pe o porţiune în urcare se odihneşte (stă pe loc) o secundă şi apoi pleacă mai departe, iar dacă se află pe o treaptă nu se opreşte şi continuă deplasarea.
**Melcul lui Mihai parcurge** într-o secundă $3$ centimetri. După ce a parcurs $3$ centimetri, dacă se află pe o treaptă se odihneşte $2$ secunde şi apoi pleacă mai departe, iar dacă e în coborâre, nu se odihneşte şi apoi continuă deplasarea.

# Cerinţă

Scrieţi un program care să determine în a câta secundă cei doi melci se lovesc unul de altul.

# Date de intrare

În fişierul de intrare `melci.in` se află pe prima linie numerele naturale $n$ şi $p$, separate printr-un spaţiu, unde $n$ reprezintă numărul de trepte şi $p$ numărul de centimetri corespunzător lăţimii şi înălţimii unei trepte.

# Date de ieşire

În fişierul de ieşire `melci.out` se va scrie pe prima linie un singur număr natural, reprezentând numărul de secunde determinat.

# Restricţii şi precizări

* $1 \leq n, p \leq 500$
* o treaptă este o zonă orizontală, fără margini şi colţuri, marginile şi colţurile treptelor fac parte din porţiunea de urcare sau coborâre

# Exemplul 1

`melci.in`
```
3 2
```

`melci.out`
```
3
```

## Explicaţie

După prima secundă, melcul lui Andrei a parcurs treapta şi se află în colţ (deci pe o zonă considerată de urcare) şi va trebui să stea aici o secundă, deci după primele $2$ secunde se va afla în acelaşi loc.
După prima secundă, melcul lui Mihai a parcurs treapta şi $1 \text{cm}$ din porţiunea de coborâre. În secunda a doua va merge mai departe. După a doua secundă, va ajunge în marginea celei de a doua trepte (deci pe o zonă considerată porţiune de coborâre) şi va merge mai departe. În a treia secundă, melcii se vor lovi unul de celălalt.

# Exemplul 2

`melci.in`
```
4 1
```

`melci.out`
```
2
```

## Explicaţie

După prima secundă, melcul lui Andrei a parcurs treapta şi porţiunea de urcare şi se află în margine (deci pe o zonă considerată de urcare) şi va trebui să stea aici o secundă, deci după primele $2$ secunde se va afla în acelaşi loc.
După prima secundă, melcul lui Mihai a parcurs treapta, porţiunea de coborâre şi următoare treaptă, ajungând în marginea ei (deci pe o zonă considerată de coborâre). În secunda a doua va merge mai departe şi melcii se vor lovi unul de celălalt.
