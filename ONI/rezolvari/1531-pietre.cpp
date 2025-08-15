#include <iostream>
#include <fstream>
#include <climits>
#include <cmath>



using namespace std;
ifstream fin("pietre.in");
ofstream fout("pietre.out");
int mat[102][102]= {0};
int mt[102][102]= {0};
int main()
{
    int n,m,k,g;
    fin>>n>>m>>k>>g;
    int x[k+1];
    int y[k+1];
    for(int i=1; i<=k; i++)
    {
        fin>>x[i]>>y[i];
        mat[x[i]][y[i]]=1;
    }
    for(int i=1; i<=g; i++)
    {
        int x,y;
        fin>>x>>y;
        mat[x][y]=2;
    }
    string s;
    int nr=0;
    fin>>s;
    int v[s.length()+1];
    for(int i=0; i<s.length(); i++)
    {
        nr++;
        if(s[i]=='N')
        {
            v[nr]=1;
        }
        if(s[i]=='S')
        {
            v[nr]=2;
        }
        if(s[i]=='E')
        {
            v[nr]=3;
        }
        if(s[i]=='V')
        {
            v[nr]=4;
        }
    }
    int ld[]= {0,-2,2,0,0};
    int cd[]= {0,0,0,2,-2};
    int ld2[]= {0,-1,1,0,0};
    int cd2[]= {0,0,0,1,-1};
    int minn=k;
    int mini;
    for(int i=1; i<=k; i++)
    {
        for(int xi=1; xi<=n; xi++)
        {
            for(int yj=1; yj<=m; yj++)
            {
                mt[xi][yj]=mat[xi][yj];
            }
        }
        int p=k;
        mt[x[i]][y[i]]=0;
        int lin=x[i],col=y[i];
        for(int j=1; j<=nr; j++)
        {
            int d=v[j];
            int l1=lin+ld2[d];
            int c1=col+cd2[d];
            int l2=lin+ld[d];
            int c2=col+cd[d];
            if(l2>0 && l2<=n && c2>0 && c2<=m && mt[l1][c1]==1 && mt[l2][c2]==0)
            {
                mt[l1][c1]=0;
                lin=l2;
                col=c2;
                p--;
            }
        }
        if(minn>p)
        {
            minn=p;
            mini=i;
        }

    }
    fout<<mini<<"\n"<<minn<<"\n";
    mat[x[mini]][y[mini]]=0;
    int lin=x[mini],col=y[mini];
    for(int j=1; j<=nr; j++)
    {
        int d=v[j];
        int l1=lin+ld2[d];
        int c1=col+cd2[d];
        int l2=lin+ld[d];
        int c2=col+cd[d];
        if(l2>0 && l2<=n && c2>0 && c2<=m && mat[l1][c1]==1 && mat[l2][c2]==0)
        {
            mat[l1][c1]=0;
            lin=l2;
            col=c2;
        }
    }
    mat[lin][col]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(mat[i][j]==1)
            {
                fout<<i<<" "<<j<<"\n";
            }
        }
    }





    return 0;
}