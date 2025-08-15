#include <fstream>
#include <algorithm>
using namespace std;
ifstream f("flori.in");
ofstream g("flori.out");
int n,h,v[101],sf,i,coe,x=1,d=1;
int main(){
    f>>n>>h;
    for(i=1;i<=n;++i){
        f>>v[i];
        sf=sf+v[i];
    }
    sf=sf+n*(n+1)/2;
    sort(v+1,v+n+1);
    while(coe<1){
        for(i=1;i<=x;++i){
            v[i]++;
            if(v[i]>=h)
                coe++;
        }
        if(x<n)
            x++;
        sort(v+1,v+n+1);
        d++;
    }
    g<<sf<<'\n';
    g<<d-2<<'\n';
    g.close();
    return 0;
}
