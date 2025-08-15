#include <bits/stdc++.h>

using namespace std;
ifstream in("spider.in");
ofstream of("spider.out");
int main()
{
    int n,k,z=1;
    in>>n>>k;
    int d[n+1][n+1],t[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            in>>d[i][j];
            t[i][j]=0;
        }
    }
    int nk=0;
    while(true)
    {
        if(z%2==1)
        {
            nk=k+1;
            if(nk>n)
                nk=nk-n;
        }
        else
        {
            nk=k+2;
            if(nk>n)
                nk=nk-n;
        }
        if(t[k][nk]==0)
        {
            t[k][nk]=d[k][nk];
            t[nk][k]=d[nk][k];
            k=nk;
            z++;
        }
        else
            break;
    }
    of<<--z<<" "<<k<<endl;
    int v[n*(n-1)/2+1]={0},x[n*(n-1)/2+1]={0},y[n*(n-1)/2+1]={0},c=1;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            v[c]=t[i][j];
            x[c]=i;
            y[c]=j;
            c++;
        }
    }
    for(int i=1;i<c-1;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            if(v[i]<v[j])
            {
                z=v[i];
                v[i]=v[j];
                v[j]=z;
                z=x[i];
                x[i]=x[j];
                x[j]=z;
                z=y[i];
                y[i]=y[j];
                y[j]=z;

            }
        }
    }
    for(int i=1;i<c;i++)
    {
        if(v[i]>0)
        {
            of<<v[i]<<" "<<x[i]<<" "<<y[i]<<endl;
        }
    }
    return 0;
}