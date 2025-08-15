#include <fstream>
using namespace std;
ifstream cin("melci.in");
ofstream cout("melci.out");
int main()
{
    int n,p,l1=0,l2=0,s=0;
    cin>>n>>p;
    int melc2=n*p*2+1, melc1=p+1;
    while(melc2>melc1){
        s++;
        if (l2==0)melc2-=3;
        if (l1==0)melc1+=2;
        if (melc2%(2*p)==0 && l2==0 || (melc2%(2*p)>p+1 && l2==0)) l2=3;
        if (melc1 % (2 * p) != 0 && melc1 % (2 * p) <= p + 1 && l1 == 0) l1 = 2;
        if (l1>0)l1--;
        if (l2>0)l2--;
    }
    cout<<s;
}