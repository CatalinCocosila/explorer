#include<fstream>
#include<algorithm>
using namespace std;
ifstream f("control.in");
ofstream g("control.out");
int n,v[101],i=1,c,v1[101],x=1,d=2,a;
int main()
{
    f>>n;
    for(i=1;i<=n;++i)
        f>>v[i];
    sort(v+1,v+n+1);
    v1[1]=1;
    for(i=2;i<=n;++i)
    {
        if(v[i]==v[i-1])
            v1[x]++;
        else
        {
            v1[x+1]=1;
            ++x;
        }
    }
    for(i=1;i<=x/3;++i)
        if(v1[i*3-2]%2==v1[i*3-1]%2 && v1[i*3-2]%2==v1[3*i]%2 && v1[i*3-1]%2==v1[3*i]%2)
            c=c+10;
        else
            c++;
    for(i=2;i<=c/2;++i)
        if(c%i==0){
           ++d;
           break;
        }
    g<<c<<'\n';
    if(d==2)
        g<<1<<'\n';
    else
        g<<0<<'\n';
    g.close();
    return 0;

}