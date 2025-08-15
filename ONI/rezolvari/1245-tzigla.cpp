#include <fstream>

using namespace std;
ifstream cin("tzigla.in");
ofstream cout("tzigla.out");

int x,y,k,maxi;

int main()
{
    cin>>x>>y>>k;
    int i;
    for(i=k+1;i<=min(x,y);i++)
    {
        if(x%i==0 && (y-i)%(i-k)==0) maxi=i;
    }
    if(y==k && x%k==0) maxi=k;
    cout<<maxi<<endl;
    return 0;
}