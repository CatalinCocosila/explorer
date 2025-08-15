//Daniel Popa

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("puteri3.in");
ofstream fout("puteri3.out");
int a[100][100]; // a[i]-3^i, a[i][0]-cate cifre are numarul i
unsigned long long n,i,x;
int c, k, j, t;

int main()
{
    /// precalcul
    a[0][0]=a[0][1]=1;// 3^0 e 1 ai are o cifra
    for(i=1; i<85; i++)/// calculez 3^i
    {
        t = 0; ///transportul e 0
        a[i][0] = a[i-1][0]; /// va avea cel putin acelasi numar de cifre
        for(j=1; j<=a[i-1][0]; j++)
        {
            a[i][j]=a[i-1][j]*3+t;
            t=a[i][j]/10;           // calculez transportul
            a[i][j]%=10;            // pe loc ramane ultima cifra
        }
        if(t>0) // inseamna ca va creste numarul de cifre
        {
            a[i][++a[i][0]]=t;
        }
    }
    fin >> c >> n;
    if(c==1)
    {
        k=0;
        for(i=1; i<n; i*=3)k++;
        fout << k << "\n";
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            fin>>x;
            x--;
            if(x==0)fout<<"0";
            else
            {
                for(j=0; x>0; j++, x/=2)
                    if(x%2==1)
                      {
                          for(k=a[j][0];k>0;k--)fout<<a[j][k];
                          fout << " ";
                      }
            }
            fout<<"\n";
        }

    }

}
