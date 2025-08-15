#include<fstream>
using namespace std;
ifstream f("reorganizare.in");
ofstream g("reorganizare.out");
int n,i,v[100000],c1,c2,k,z,m=1,nc,j;
int main()
{
    f>>n;
    i=1;
    while(m<=n*(n+1)/2)
    {
        nc=1;
        k=1;
        while(k<i){
            k=k*10;
            nc++;
        }
        if(k>i)
            k=k/10;
        if(k!=i)
            nc--;
        z=i;
        while(z>0 && nc>0)
        {
            v[m]=z/k;
            ++m;
            nc--;
            z=z%k;
            if(z==0 && nc>0)
                for(j=1;j<=nc;++j){
                    v[m]=0;
                    ++m;
                }
            k=k/10;
        }
        ++i;
    }
    for(j=1;j<=n*(n+1)/2;++j){
        if(j==n*(n-1)/2+1)
            g<<v[j]<<" ";
        if(j==n*(n+1)/2)
            g<<v[j];
    }
    g.close();
    return 0;
}