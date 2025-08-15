#include <bits/stdc++.h>
using namespace std;
ifstream  fin("special.in");
ofstream fout("special.out");
int c,n,m,k,x,nras,y,ri,rj[1000002],nrs11,nrs22;
int main()
{
    fin>>c>>n>>m>>k;
    if(c==1)
    {
        rj[0]=1;
        for(int j=1; j<=m-1; j++)
        {
            y=(4*j)%k;
            rj[y]++;
        }
        for(int i=0; i<=n-1; i++)
        {
            ri=(15*i+2025)%k;
            if(ri<=11)nrs11+=rj[11-ri];
            else nrs11+=rj[k-(ri-11)];
            if(ri<=22)nrs22+=rj[22-ri];
            else nrs22+=rj[k-(ri-22)];
        }
        fout<<nrs11+nrs22;
    }
    if(c==2)
    {
        int G=__gcd(n-1,m-1);
        int paslin=(n-1)/G;
        int pascol=(m-1)/G;
        for (int kk=0; kk<=G; kk++)
        {
            int lin=kk*paslin;
            int col=kk*pascol;
            x=(15*lin+4*col+2025)%k;
            if (x>100)
            {
                int nr1=0,nr2=0;
                while (x)
                {
                    if (x%10==1) nr1++;
                    if (x%10==2) nr2++;
                    x/=10;
                }
                if (nr1>=2 || nr2>=2) nras++;
            }
        }
        fout<<nras<<'\n';
    }
    return 0;
}