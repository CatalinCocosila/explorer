#include <fstream>

using namespace std;
ifstream cin("control.in");
ofstream cout("control.out");

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c==9) c=0;
    while(a%9!=c) a++;
    while(b%9!=c) b--;
    cout<<(b-a)/9+1;
    return 0;
}