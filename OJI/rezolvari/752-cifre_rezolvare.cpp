#include<bits/stdc++.h>
using namespace std;
ifstream f("cifre.in");
ofstream g("cifre.out");
long long n,c,sol,sl[12];
void prec()
{
    for(int i=0;i<1000000;++i)
    {
        int j=i+1000000;
        while(j>1)
        {
            sl[j%10]++;
            j/=10;
        }
    }
}
int main()
{
    f>>n>>c;
    if(n<1000000)
    {
        for(int i=1;i<=n;++i)
        {
            int j=i;
            while(j)
            {
                sol+=(j%10==c);
                j/=10;
            }
        }
        g<<sol;
        return 0;
    }
    prec();
    for(int i=1;i<1000000;++i)
    {
        int j=i;
        while(j)
        {
            sol+=(j%10==c);
            j/=10;
        }
    }
    for(int j=1;j<=n/1000000;++j)
    {
        if(j<n/1000000)
        {
            sol+=sl[c];
            int q=j;
            while(q)
            {
                sol+=1000000*(q%10==c);
                q/=10;
            }
        }
        else
        {
            int q=j;
            while(q)
            {
                sol+=(n%1000000+1)*(q%10==c);
                q/=10;
            }
            for(int i=0;i<=n%1000000;++i)
            {
                int a=i+1000000;
                while(a>1)
                {
                    sol+=(a%10==c);
                    a/=10;
                }
            }
        }
    }
    g<<sol;
    return 0;
}
