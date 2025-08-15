#include <fstream>
#include <iostream>
#define NMAX 101

using namespace std;

ifstream fin("maya.in");
ofstream fout("maya.out");

int fr[100], lin[1001], col[1001];

int main()
{
    int n, cer, nr, m=-1;
    fin>>cer>>n;
    if(cer==1)
    {
        char ch;
        for(int i=1; i<=n; i++)
        {
            fin>>ch>>nr;
            ch=ch-'A';
            fr[ch]++;
            if(fr[ch]>m)
            {
                m=fr[ch];
            }
        }
        for(char i='A'; i<='Z'; i++)
        {
            if(fr[i-'A']==m)
            {
                fout<<i<<" ";
            }
        }
    }
    if(cer==2)
    {
        char ch;
        for(int i=1; i<=n; i++)
        {
            fin>>ch>>nr;
            lin[i]=nr;
            col[i]=int(ch-'A'+1);
        }

        int cif;
        char directie;

        for(int i=1; i<=n; i++)
        {
            fin>>cif;
            for(int j=1; j<=cif; j++)
            {
                fin>>directie;
                if(directie=='1')
                {
                    lin[i]++;
                }
                else if(directie=='4')
                {
                    lin[i]--;
                }
                else
                {
                    if(col[i]%2==0)
                    {
                        if(directie=='3' || directie=='5')
                        {
                            lin[i]--;
                        }
                    }
                    if(col[i]%2==1)
                    {
                        if(directie=='2' || directie=='6')
                        {
                            lin[i]++;
                        }
                    }
                }
                if(directie=='5' || directie=='6')
                {
                    col[i]--;
                }
                if(directie=='2' || directie=='3')
                {
                    col[i]++;
                }
                if(col[i]>26)
                {
                    col[i]-=26;
                }
                else if(col[i]<0)
                {
                    col[i]+=26;
                }
            }
            if(char(col[i]+'A'-1)=='@')
            {
                fout<<'Z'<<lin[i]<<"\n";
            }
            else
            {
                fout<<char(col[i]+'A'-1)<<lin[i]<<"\n";
            }
        }
    }
    return 0;
}