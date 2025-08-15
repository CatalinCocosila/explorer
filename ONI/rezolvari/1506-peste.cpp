#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
ifstream fin("peste.in");
ofstream fout("peste.out");
const int N=100;
long long v[N+1];
long long t[N+2];
int per[10][10];
bool cmp(long long a,long long b)
{
    int cif1[20];
    long long cnr=a;
    int nrcif1=0;
    //cout<<v[i]<<endl;
    while(cnr!=0)
    {
        nrcif1++;
        cnr/=10;
    }
    cnr=a;
    for(int i=nrcif1;i>=1;i--)
    {
        cif1[i]=cnr%10;
        cnr/=10;
    }

    int cif2[20];
    cnr=b;
    int nrcif2=0;
    //cout<<v[i]<<endl;
    while(cnr!=0)
    {
        nrcif2++;
        cnr/=10;
    }
    cnr=b;
    for(int i=nrcif2;i>=1;i--)
    {
        cif2[i]=cnr%10;
        cnr/=10;

    }

    int cif3[40];
    for(int i=1;i<=nrcif1;i++)
    {
        cif3[i]=cif1[i];
    }
    for(int i=nrcif1+1;i<=nrcif1+nrcif2;i++)
        cif3[i]=cif2[i-nrcif1];


    int cif4[40];
    for(int i=1;i<=nrcif2;i++)
    {
        cif4[i]=cif2[i];
    }
    for(int i=nrcif2+1;i<=nrcif1+nrcif2;i++)
        cif4[i]=cif1[i-nrcif2];
    int ok=0,ok1=0;
    for(int i=1;i<=nrcif1+nrcif2;i++)
    {
        if(cif3[i]<cif4[i] and ok==0)
        {
            ok=1;
            ok1=1;
        }

        if(cif3[i]>cif4[i] and ok==0)
            {
                ok=1;
                ok1=0;
            }
    }
    if(ok1==1)
        return true;
    else
        return false;
}
int nr_cif(long long x)
{
    long long cnr=x;
    int nrcif;
    while(cnr!=0)
    {
        cnr/=10;
        nrcif++;
    }
    nrcif;
}
long long trans(int i,int j,int nrcif,int a[])
{
    int i1=a[i],i2=a[j];
    a[i]=-1;
    a[j]=-1;
    long long p=1,nou=0;
    for(int d=nrcif;d>=1;d--)
    {
        if(a[d]!=-1)
        {
            nou=a[d]*p+nou;
            p*=10;
        }
        //cout<<a[d]<<endl;

    }
    a[i]=i1;
    a[j]=i2;
    return nou;
}
int main()
{
    int C,n;
    fin>>C>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>v[i];
        int cif[20];
        long long cnr=v[i];
        int nrcif=0;
        //cout<<v[i]<<endl;
        while(cnr!=0)
        {
            nrcif++;
            cnr/=10;
        }
        cnr=v[i];
        for(int i=nrcif;i>=1;i--)
        {
            cif[i]=cnr%10;
            cnr/=10;
        }
        long long maxi=-1,c1,c2,c3,c4;
        for(int i=1;i<=nrcif-1;i++)
        {
            int j=i+1;
                long long nou=trans(i,j,nrcif,cif);
                //cout<<nou<<" "<<i<<" "<<" "<<j<<"          ";
                if(maxi<nou)
                {
                    maxi=nou;
                    c1=cif[i];
                    c2=cif[j];
                    c3=min(c1,c2);
                    c4=max(c1,c2);
                    //cout<<c3<<c4<<endl;
                }
                //cout<<nou<<endl;
        }
        t[i]=maxi;
        per[c3][c4]++;
    }
    if(C==1)
    {
        int permax=-1;
        for(int i=0;i<=9;i++)
        {
            for(int j=0;j<=9;j++)
            {
                permax=max(per[i][j],permax);
                ///cout<<per[i][j]<<" "<<i<<" "<<j<<endl;
            }
        }
        fout<<permax;
    }
    else
    {
        sort(t+1,t+n+1,cmp);
        for(int i=n;i>=1;i--)
        {
            fout<<t[i];
        }
    }
    return 0;
}