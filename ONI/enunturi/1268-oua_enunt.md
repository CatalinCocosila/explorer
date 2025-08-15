Pe o pajişte pătrată formată din LxL parcele pătrate cu latura de $1 \text{metru}$ au fost ascunse ouă. Unele ouă sunt mai valoroase decât altele. $N$ iepuraşi se află în parcele situate pe marginea pajiştei şi participă la concursul "Coşul meu este mai valoros”. Iniţial nu există mai mulţi iepuraşi în aceeaşi parcelă. Ei poartă tricouri cu numere distincte de la $1$ la $N$. Pentru că au foarte mult antrenament iepuraşii respectă cu stricteţe următoarele reguli:
1. toţi iepuraşii încep căutarea ouălor simultan, pornind cu parcela în care se află;
~[oua1.png|align=right]
2. direcţiile iniţiale de deplasare a iepuraşilor (reprezentate în $\text{Figura} \ 1$) sunt următoarele: cei de pe latura nordică se deplasează către sud, cei de pe latura vestică se deplasează către est, cei de pe latura sudică către nord iar cei de pe latura estică către vest;
3. în fiecare parcelă un iepuraş stă un minut, timp în care caută şi eventual culege un ou şi sare în parcela indicată de direcţia sa de deplasare;
4. culegerea unui ou determină schimbarea direcţiei de deplasare;
~[oua2.png|align=right]
5. schimbarea direcţiei de deplasare se face astfel: dacă iepuraşul vine de la Nord atunci el va pleca spre Vest, dacă vine de la Sud va pleca spre Est, dacă vine de la Est va pleca spre Nord iar dacă vine de la Vest va pleca spre Sud. Un exemplu de deplasare este reprezentat în $\text{Figura} \ 2$ pentru un iepuraş care pleacă din parcela $(1, 4)$;
6. dacă doi sau mai mulţi iepuraşi ajung simultan la acelaşi ou atunci acesta va fi cules de cel care are cel mai mic număr pe tricou.

Concursul se încheie atunci când nu mai există iepuraşi pe pajişte.

# Cerinţă

Scrieţi un program care să afişeze numărul total de ouă culese de cei $N$ iepuraşi, cel mai valoros coş (valoarea acestuia) precum şi durata (în minute) a concursului.

# Date de intrare

Fişierul de intrare `oua.in` conţine:
Pe prima linie $2$ numere naturale, $L$ şi $P$ separate printr-un spaţiu, $L$ reprezentând numărul liniilor şi al coloanelor tabloului utilizat în reprezentarea parcelei iar $P$ numărul ouălor de pe pajişte.
Pe fiecare dintre următoarele $P$ linii se află câte $3$ numere naturale, separate prin câte un spaţiu, reprezentând coordonatele parcelei $(i, j)$ pe care se găseşte un ou $(1 \leq i \leq L, 1 \leq j \leq L)$ şi valoarea $(v)$ acestuia.
Pe linia următoare se află numărul $N$ al iepuraşilor, iar pe fiecare dintre următoarele $N$ linii se găsesc perechi de numere naturale reprezentând coordonatele parcelelor în care se găsesc iniţial iepuraşii, în ordinea numerelor de pe tricou.

# Date de ieşire

Fişierul de ieşire `oua.out` va conţine:
Pe prima linie se găsesc $3$ numere naturale separate prin câte un spaţiu, numere ce reprezintă numărul total de ouă culese de cei $N$ iepuraşi, cel mai valoros coş (valoarea acestuia) precum şi durata (în minute) a concursului.

# Restricţii şi precizări

* $2 \leq L \leq 50$
* $0 \leq N \leq 100$
* $0 \leq P \leq 2 \ 500$
* $1 \leq v \leq 30$
* Un iepuraş iese de pe pajişte dacă ajunge în afara matricei
* La un moment dat pot exista mai mulţi iepuraşi în aceeaşi parcelă, cu excepţia primului minut.

# Exemplu

`oua.in`
```
5 6
1 4 10
2 2 1
2 3 5
3 3 6
5 1 4
5 2 2
2
2 1
3 5
```

`oua.out`
```
5 11 10
```

## Explicaţie

~[oua3.png|align=right]
Primul iepuraş stă $10$ minute pe pajişte, culege $3$ ouă, cu valoare totală $7$ şi parcurge traseul $(2, 1) - (2, 2) -
(3, 2) - (4, 2) - (5, 2) - (5, 1) - (4, 1) - (3, 1) - (2, 1) - (1, 1)$
Al doilea iepuraş stă $6$ minute pe pajişte, culege $2$ ouă, cu valoare totală $11$ şi parcurge traseul $(3, 5) - (3, 4) - (3, 3) - (2, 3) - (2, 4) - (2, 5)$
