#include<bits/stdc++.h>
using namespace std;
ifstream f("carte.in");
ofstream g("carte.out");
int n;
int v[10002];
int i,nr;
int main()
{
    f>>n;
    for(i=1;i<=n;++i)
    {
        f>>nr;
        v[nr]=i;
    }
    int d=0;
    for(int i=1;i<n;++i)
        if(v[i]>v[i+1])
            ++d;
    g<<d+1<<" ";
    d=0;
    int pb=0;
    int l=0;
    int lmax=0;
    int nrdmax=0;
    while(pb<n)
    {
        ++d;
        l=1;
        ++pb;
        while(v[pb+1]>v[pb])
            ++pb,++l;
        if(l>lmax)
            lmax=l,nrdmax=d;
    }
    g<<nrdmax<<" "<<lmax<<'\n';
    return 0;
}