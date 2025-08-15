#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("joc.in");
ofstream cout("joc.out");

int v[1000001];

int main()
{
    int n, x, cnt=0, y=0, maxi=0, poz=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(v[x]==0) cnt++;
        v[x]++;
    }
    cout<<cnt<<endl;
    int h=sqrt(n);
    cout<<h<<endl;
    n=h*h;
    while(n>y)
    {
        maxi=0;
        poz=0;
        for(int i=9; i>=0; i--)
        {
            if(v[i]>maxi)
            {
                maxi=v[i];
                poz=i;
            }
        }
        while(v[poz]!=0 && n>y)
        {
            v[poz]--;
            y++;
            cout<<poz;
            if(y%h==0) cout<<endl;
        }
    }
}