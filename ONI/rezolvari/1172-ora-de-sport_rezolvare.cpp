	
#include<fstream>
using namespace std;
ifstream f("sport.in");
ofstream g("sport.out");
int n,i,v[10022],b,el;
int main()
{
    f>>n;
    for(i=1;i<=n;++i){
        f>>v[i];
        if(v[i]==1)
            b++;
    }
    el=n;
    while(el>1)
    {
        for(i=1;i<el;++i)
            if(v[i]==v[i+1])
                v[i]=0;
            else{
                v[i]=1;
                ++b;
            }
         --el;
    }
    g<<b<<'\n';
    return 0;
}