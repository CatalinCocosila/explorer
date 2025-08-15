#include <fstream>
using namespace std;
ifstream f("imprimanta.in");
ofstream g("imprimanta.out");
long long n;
int k,minac=15,y,v[11],b[11],i,j,z,ind,maxnr;
int main(){
    f>>n>>k;
    v[0]=12;
    v[1]=5;
    v[2]=11;
    v[3]=11;
    v[4]=9;
    v[5]=11;
    v[6]=12;
    v[7]=7;
    v[8]=13;
    v[9]=12;
    while(n>0){
        y=n%10;
        n=n/10;
        b[y]=1;
        if(v[y]<minac)
            minac=v[y];
    }
    for(i=9;i>=1;--i)
        if(ind==0 && b[i]==1 && v[i]==minac){
            maxnr=i;
            ind++;
        }
    g<<maxnr<<'\n';
    if(k%5==0)
        for(i=1;i<=k/5;++i)
                g<<1;
    else{
        if(k==16)
            g<<74;
        else{
            if(k%5==1){
                g<<777;
                for(i=1;i<=k/5-4;++i)
                    g<<1;
            }
        else{
             if(k%5==2){
                 g<<7;
                 for(i=1;i<k/5;++i)
                        g<<1;
             }
             else{
                  if(k%5==3){
                       g<<8;
                       for(i=1;i<=k/5-2;++i)
                            g<<1;
                  }
                  else
                      if(k%5==4){
                          g<<77;
                          for(i=1;i<=k/5-2;++i)
                                g<<1;
                      }

            }
        }
    }
    }
    g.close();
    return 0;
}