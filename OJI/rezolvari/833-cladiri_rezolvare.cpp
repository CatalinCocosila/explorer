#include <fstream>
using namespace std;
ifstream f("cladiri.in");
ofstream g("cladiri.out");
int n,i,nr,v[15],maxc,nrc,y,nc,t=1,ca,indc,pal,x,x1;
int main(){
    f>>n;
    for(i=1;i<=n;++i){
        f>>nr;
        x1=nr;
        x=0;
        nc=0;
        indc=0;
        t=1;
        while(nr>0){
            y=nr%10;
            if(y>maxc){
               nrc=1;
               maxc=y;
               x=1;
            }
            else
                if(y==maxc && x==0){
                    nrc++;
                    x++;
                }
            nr=nr/10;
            v[nc+1]=y;
            nc++;
        }
        while(t<=nc){
            if(v[t]>v[nc])
                indc=indc+v[t]-v[nc];
            else
                indc=indc+v[nc]-v[t];
            t++;
            nc--;
        }
        if(indc==0)
            pal++;
        ca=ca+indc;
    }
    g<<maxc<<" "<<nrc<<'\n';
    g<<pal<<'\n';
    g<<ca<<'\n';
    g.close();
    return 0;
}
