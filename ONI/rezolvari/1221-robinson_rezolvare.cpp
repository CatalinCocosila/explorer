#include <fstream>
using namespace std;
ifstream f("robinson.in");
ofstream g("robinson.out");
int x,n,a,m,c[21][21],d[21][21],l,c1,j,i,r;
int main(){
    f>>m>>n>>l>>c1;
    a=n;
    for(i=1;i<=m;i++){
        c[1][i]=a;
        a++;
    }
    for(j=1;j<=m;j++){
        c[j][1]=n;
        n++;
    }
    for(i=2;i<=m;i++)
        for(j=2;j<=m;j++)
            c[i][j]=(c[i-1][j]+c[i][j-1])%1000;
    g<<c[m][m]<<'\n';
    r=c[l][c1]%4;
    d[l][c1]=1;
    g<<l<<" "<<c1<<'\n';
    while(d[l][c1]!=2 && l>0 && c1>0 && l<=m && c1<=m){
        if(r==0)
            l--;
        else{
             if(r==1)
                c1++;
             else{
                 if(r==2)
                    l++;
                 else
                     c1--;
             }
        }
        r=c[l][c1]%4;
        d[l][c1]++;
        if(d[l][c1]!=2)
            g<<l<<" "<<c1<<'\n';
    }
    g.close();
    return 0;
}