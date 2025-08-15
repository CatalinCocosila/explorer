#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("cartier.in");
ofstream cout("cartier.out");

int v[100001], p[100001];

int inalt(int x)
{
    int z=sqrt(x);
    if(z*z==x) return z;
    if(x%z==0) z=x/z;
    while(x%z!=0) z++;
    return z;
}
int cmmdc(int a, int b)
{
    while(a!=0)
    {
        b=b%a;
        swap(a,b);
    }
    return b;
}

int main()
{
    int n, maxi=0, cnt=0, x=0, y=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        int h, l;
        h=inalt(v[i]);
        l=v[i]/h;
        p[i]=h;
        if(h>maxi)
        {
            maxi=h;
            cnt=1;
        }
        else if(h==maxi) cnt++;
        x+=l;
    }
    int q, qw;
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<n-i+1; j++)
        {
            q=p[j];
            qw=p[i+j-1];
            int cmmdcc=cmmdc(q, qw);
            if(cmmdcc==1) continue;
            else
            {
                y=i;
                i=0;
                break;
            }
        }
    }
    cout<<cnt<<endl<<x<<endl<<y;
}