#include<fstream>
using namespace std;
ifstream f("munte.in");
ofstream g("munte.out");
int n,k,i,v[105],sm,v2[50],j,aa,t,q;
int main()
{
    f>>n;
    for(i=1;i<=n;++i)
        f>>v[i];
    for(i=2;i<n;++i)
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            ++sm;
            v2[sm]=i;
        }
    g<<sm<<'\n';
    t=1;
    aa=sm;
    while(t>0)
    {
        for(i=1;i<=aa;++i)
        {
            for(j=v2[i]-i+1;j<=n;++j)
                v[j]=v[j+1];
            v2[i]=0;
        }
        aa=0;
        for(i=2;i<n-sm;++i)
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                ++aa;
                v2[aa]=i;
            }
        sm=sm+aa;
        if(aa==0)
            t=0;
    }
    g<<sm<<'\n';
    g<<n-sm<<'\n';
    g.close();
    return 0;
}