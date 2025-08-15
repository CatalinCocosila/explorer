#include <bits/stdc++.h>
const int CMAX=15,NMAX=6e3+5;

using namespace std;
ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int n,cnt,cntf,cifr=-1,maxi,temp;
short frecv[CMAX],v[NMAX];

int main()
{
    fin>>n;
    int i,cif;
    for(i=1;i<=n;i++)
    {
        fin>>cif;
        frecv[cif]++;
    }
    for(i=9;i>=0;i--) if(frecv[i]%2==1 && frecv[i]>frecv[cifr]) cifr=i;
    for(i=9;i>=0;i--)
    {
        if(i==cifr) frecv[i]--;
        if(frecv[i]%2==0)
        {
            cnt=frecv[i]/2;
            while(cnt--) v[++cntf]=i;
        }
    }
    while(v[temp]==0) temp++;
    for(i=temp;i<=cntf;i++) fout<<v[i];
    fout<<cifr;
    for(i=cntf;i>=temp;i--) fout<<v[i];
    return 0;
}