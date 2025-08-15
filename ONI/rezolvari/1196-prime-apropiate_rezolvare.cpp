	
#include<bits/stdc++.h>
using namespace std;
ifstream f("prime.in");
ofstream g("prime.out");
int n,c,nr,nrp=1;
bool r[5000001];
int o[500000];
void z()
{
    int i;
    o[1]=2;
    for(i=4;i<=5000000;i+=2)
        r[i]=1;
    for(i=3;i<=4999999;i+=2)
        if(r[i]==0)
        {
            ++nrp;
            o[nrp]=i;
            for(int j=i+i;j<=5000000;j+=i)
                r[j]=1;
        }
}
int main()
{
    f>>n>>c;
    z();
    for(int i=1;i<=n;++i)
    {
        f>>nr;
        int b=1;
        int e=nrp;
        bool ok=0;
        while(b<=e)
        {
            int m=(b+e)/2;
            if(o[m]<=nr && o[m+1]>=nr)
            {
                if(nr-o[m]<o[m+1]-nr)
                    g<<o[m]<<" ";
                else
                    if(nr-o[m]>o[m+1]-nr)
                        g<<o[m+1]<<" ";
                    else
                        if(c==1)
                            g<<o[m]<<" ";
                        else
                            g<<o[m+1]<<" ";
                ok=1;
                break;
            }
            else
                if(o[m]>=nr)
                    e=m-1;
                else
                    b=m+1;
        }
    }
    return 0;
}
