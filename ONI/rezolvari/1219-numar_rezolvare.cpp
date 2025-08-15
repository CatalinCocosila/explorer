#include <fstream>
using namespace std;
ifstream f("numar.in");
ofstream g("numar.out");
int n,i,s1,v[50],j,nr[10],x=1,nr1,nr2,ind,z;
int main(){
    f>>n;
    f>>nr1;
    if(n<2){
        nr[nr1%9]++;
        for(i=9;i>=0;--i)
            if(nr[i]==0)
                g<<i;
    }
    else{
        s1=nr1;
        for(i=2;i<=n;++i){
            f>>nr2;
            if(nr2>=nr1)
                s1=s1+nr2;
            else{
                v[x]=s1;
                x++;
                s1=nr2;
            }
            nr1=nr2;
        }
        v[x]=s1;
        for(j=1;j<=x;++j){
            z=v[j]%9;
            if(v[j]==0)
                z=0;
            else
                if(z==0 && v[j]>0)
                    z=9;
            nr[z]++;
        }
        for(i=9;i>=0;--i)
            if(nr[i]==0){
                ind++;
                g<<i;
            }
       if(ind==0)
            g<<-1;
    }
    g.close();
    return 0;
}