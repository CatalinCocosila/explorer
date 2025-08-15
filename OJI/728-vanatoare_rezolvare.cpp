# include <fstream>
using namespace std;
ifstream f("vanatoare.in");
ofstream g("vanatoare.out");
int ka,kb,a,b,c,nr;
int main(){
   f>>ka>>kb;
   a=1;
   b=1;
   nr=0;
   while ((ka>=(b/2+b%2))&&(kb>=b/2)){
      nr++;
      ka=ka-(b/2+b%2);
      kb=kb-(b/2);
      c=a+b;
      a=b;
      b=c;
   }
  g<<nr<<'\n';
  g<<ka<<'\n';
  g<<kb<<'\n';
  g.close();
  return 0;
}