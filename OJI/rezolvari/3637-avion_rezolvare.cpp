#include <fstream>              // Arisanu Ana Maria 
  
using namespace std; 
  
ifstream fin("avion.in"); 
ofstream fout("avion.out"); 
  
int C, n, NR, i, r, k, d,scaun ; 
  
  
int main() 
{ 
    fin >> C >> NR >> n; 
    if (C == 1) 
        for (i = 1; i <= n; i++) 
        { 
            fin >> r >> scaun; 
            if (r <= NR / 2) 
                fout<<1<<'\n'; 
            else
                fout<<2<<'\n'; 
        } 
    else
    { 
        d = 3*n; 
        for (i = 1; i <= n; i++) 
        { 
            fin >> r >> scaun; 
            if (r <= NR / 2) 
                d += r; 
            else
                d =d+ NR - r + 1; 
            if (scaun== 1 || scaun== 6) 
                d += 3; 
            if (scaun== 2 || scaun== 5) 
                d += 2; 
            if (scaun== 3 || scaun== 4) 
                d += 1; 
        } 
        fout << d << '\n'; 
    } 
    return 0; 
}