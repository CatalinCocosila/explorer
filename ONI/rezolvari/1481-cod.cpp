#include <fstream>
#define NMAX 101
using namespace std;

ifstream cin("cod.in");
ofstream cout("cod.out");

int v[NMAX];

int main()
{
    int cer, n, s=0;
    cin>>cer>>n;
    char ch='#';
    if(cer==1)
    {
        for(int i=1; i<=n; i++)
        {
            int ok=0;
            int cnt=1;
            
            if(ch!='#')
                v[cnt++]=ch-'0';

            while(cin>>ch && ok==0)
            {
                if(ch=='#')
                {
                    ok=1;
                }
                else
                {
                    v[cnt++]=ch-'0';
                }
            }

            int ook=1;
            cnt--;

            for(int k=2; k<=15; k++)
            {
                int x=0;
                for(int j=1; j<=cnt; j++)
                {
                    x=x*10+v[j];
                    x%=k;
                }
                if(x==0)
                {
                    ook=0;
                }
            }
            if(ook==1)
            {
                s++;
            }
        }
        cout<<s;
    }
    if(cer==2)
    {
        int suma=0;
        for(int i=1; i<=n; i++)
        {
            int ok=0;
            int cnt=1;

            if(ch!='#')
                v[cnt++]=ch-'0';

            while(cin>>ch && ok==0)
            {
                if(ch=='#')
                {
                    ok=1;
                }
                else
                {
                    v[cnt++]=ch-'0';
                }
            }
            cnt--;

            for(int k=2; k<=9; k++)
            {
                int x=0;
                for(int j=1; j<=cnt; j++)
                {
                    x=x*10+v[j];
                    x%=k;
                }
                if(x==0)
                {
                    suma++;
                }
            }
        }
        cout<<suma;
    }
    if(cer==3)
    {
        int suma=0;
        for(int i=1; i<=n; i++)
        {
            int ok=0;
            int cnt=1;

            if(ch!='#')
                v[cnt++]=ch-'0';

            while(cin>>ch && ok==0)
            {
                if(ch=='#')
                {
                    ok=1;
                }
                else
                {
                    v[cnt++]=ch-'0';
                }
            }
            cnt--;

            for(int k=10; k<=15; k++)
            {
                int x=0;
                for(int j=1; j<=cnt; j++)
                {
                    x=x*10+v[j];
                    x%=k;
                }
                if(x==0)
                {
                    suma++;
                }
            }
        }
        cout<<suma;
    }
    return 0;
}