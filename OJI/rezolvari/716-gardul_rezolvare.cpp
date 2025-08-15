# include <fstream>
using namespace std;
ifstream f("gardul.in");
ofstream g("gardul.out");
int n,p,q,j,l,a,r,v,s,d,m;
int main(){
    f>>n;
    f>>p>>q;
    j=p;
    l=q;
    while(p!=q){
        if(p>q)
            p=p-q;
        else
            q=q-p;
    }
    d=p;
    m=j*l/d;
    if(n>m)
        v=n/m;
    else
        v=0;
    a=n/j-v;
    r=n/l-v;
    s=n-a-r-v;
    g<<s<<'\n';
    g<<a<<'\n';
    g<<r<<'\n';
    g<<v<<'\n';
    g.close();
    return 0;
}