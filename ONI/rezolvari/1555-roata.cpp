#include <bits/stdc++.h>

using namespace std;

ifstream in("roata.in");
ofstream out("roata.out");

long long n,i,x,v[50003],precedent,s,ant;
int main()
{
    in>>n;
    for(i=1;i<=n;i++)
    {
        in>>x;
        v[x]=i;
    }
    i=1;
    ant=0;
    while(i<=n)
    {
        v[i]+=ant;
        if(v[i]%n==0)
            v[i]=n;
        else
            v[i]%=n;
        s=n+1-v[i];
        if(s<=precedent)
        {
           long long d=precedent-s;
           long long decateori=d/n;
           s+=(n*(decateori+1));
        }
        ant+=s;
        precedent=s;
        i++;
        out<<s<<" ";
    }
    return 0;
}