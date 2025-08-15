#include <fstream>
using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");
int a,b,va[16],vb[16],la,lb,i,j,p1,p2,b1,a1;
int main()
{
    f>>a>>b;
    a1=a;
    b1=b;
    while(a>0)
    {
        la++;
        va[la]=a%2;
        a=a/2;
    }
    while(b>0)
    {
        lb++;
        vb[lb]=b%2;
        b=b/2;
    }
    i=la;
    j=1;
    while(i>0 && j<=lb && va[i]==vb[j])
    {
        b1=b1/2;
        a1=a1-(1<<(i-1))*va[i];
        --i;
        ++j;
    }
    g<<b1+a1<<'\n';
    g.close();
    return 0;
}
