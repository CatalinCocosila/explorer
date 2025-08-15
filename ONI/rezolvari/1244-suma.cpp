#include <fstream>
using namespace std;
ifstream cin("suma.in");
ofstream cout("suma.out");

int lmax (int n){
   int r=1;
   for(int i=2;i*(i+1)<=n*2;i++){
      if (n%i==i*(i+1)/2%i)r=i;
   }
   return r;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0, sm=0,nr=0;
    for(int i=a;i<=b;i++){
         int l=lmax(i);
         if(l>1){
             cnt++;
             if (l>sm){
                 sm=l;nr=1;
             }
             else if (l==sm)nr++;
         }
    }
    cout<<cnt<<" "<<sm<<" "<<nr;
}