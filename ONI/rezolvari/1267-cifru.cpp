#include <bits/stdc++.h>

using namespace std;
ifstream in("cifru.in");
ofstream of("cifru.out");
int main()
{
    int n,su=0,sr=0,sd=0,sl=0,f=0,sum=0,mmax=0,sumf=0;
    in>>n;
    int v[n+1][n+1],v2[n+1][n+1];
    char poz[n/2+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            in>>v[i][j];
        }
    }
    for(int i=1; i<=n/2; i++)
    {
        su=0,sr=0,sd=0,sl=0;
        for(int j=i; j<=n-i+1; j++)
        {
            su+=v[i][j];
            sr+=v[j][n-i+1];
            sd+=v[n-i+1][j];
            sl+=v[j][i];
        }
        if(su>=sr && su>=sd && su>=sl)
        {
            poz[i]='U';
            sum+=su;
        }
        else if(sr>=su && sr>=sd && sr>=sl)
        {
            poz[i]='R';
            sum+=sr;
        }
        else if(sd>=su && sd>=sr && sd>=sl)
        {
            poz[i]='D';
            sum+=sd;
        }
        else
        {
            poz[i]='L';
            sum+=sl;
        }

    }
    of<<sum<<'\n';
    for(int i=1; i<=n/2; i++)
    {
        if(poz[i]=='R')
        {
            for(int x=i;x<=n-i+1;x++)
            {
                for(int y=i;y<=n-i+1;y++)
                {
                    v2[n+1-y][x]=v[x][y];
                }
            }
        }
        else if(poz[i]=='L')
        {
            for(int x=i;x<=n-i+1;x++)
            {
                for(int y=i;y<=n-i+1;y++)
                {
                    v2[y][n+1-x]=v[x][y];
                }
            }
        }
        else if(poz[i]=='D')
        {
            for(int x=i;x<=n-i+1;x++)
            {
                for(int y=i;y<=n-i+1;y++)
                {
                    v2[n+1-x][n+1-y]=v[x][y];
                }
            }
        }
        else
        {
            for(int x=i;x<=n-i+1;x++)
            {
                for(int y=i;y<=n-i+1;y++)
                {
                    v2[x][y]=v[x][y];
                }
            }
        }
    }
    if(n%2==1)
        v2[n/2+1][n/2+1]=v[n/2+1][n/2+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            of<<v2[i][j]<<" ";
        }
        of<<'\n';
    }

        return 0;
    }