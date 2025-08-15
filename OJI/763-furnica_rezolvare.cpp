#include <fstream>
using namespace std;
ifstream f("furnica.in");
ofstream g("furnica.out");
int n,k,i,s=2,a[101][101],b[101][101],c,d,nr,lin=1,col=1,max1=1,z=1;
int main(){
    f>>n>>k;
    for(c=1;c<=n;c++)
        for(d=1;d<=n;d++)
            a[c][d]=(c+d)%6;
    for(i=1;i<=k;i++){
        f>>nr;
        if(nr==1){
           b[lin-1][col]++;
           lin--;
           s=s+a[lin][col];
           a[lin][col]=0;
        }
        else{
           if(nr==2){
               b[lin-1][col+1]++;
               lin--;
               col++;
               s=s+a[lin][col];
               a[lin][col]=0;
           }
           else{
               if(nr==3){
                    b[lin][col+1]++;
                    col++;
                    s=s+a[lin][col];
                    a[lin][col]=0;
                }
                else{
                    if(nr==4){
                       b[lin+1][col+1]++;
                       lin++;
                       col++;
                       s=s+a[lin][col];
                       a[lin][col]=0;
                    }
                    else{
                        if(nr==8){
                           b[lin-1][col-1]++;
                           lin--;
                           col--;
                           s=s+a[lin][col];
                           a[lin][col]=0;
                        }
                        else{
                            if(nr==7){
                                b[lin][col-1]++;
                                col--;
                                s=s+a[lin][col];
                                a[lin][col]=0;
                            }
                            else{
                                if(nr==6){
                                   b[lin+1][col-1]++;
                                   lin++;
                                   col--;
                                   s=s+a[lin][col];
                                   a[lin][col]=0;
                                }
                                else
                                    if(nr==5){
                                       b[lin+1][col]++;
                                       lin++;
                                       s=s+a[lin][col];
                                       a[lin][col]=0;
                                    }
                                }
                          }
                    }
                }
           }
        }
    }
    g<<s<<" ";
    for(c=1;c<=n;c++)
        for(d=1;d<=n;d++){
            if(b[c][d]>max1){
                z=1;
                max1=b[c][d];
            }
            else
                if(b[c][d]==max1)
                    z++;
        }
    g<<z<<" ";
    g.close();
    return 0;
}