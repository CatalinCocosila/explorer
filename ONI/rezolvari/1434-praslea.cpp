#include <fstream>
#define int long long
using namespace std;
ifstream in("praslea.in");
ofstream out("praslea.out");
int arr[500001];
signed main()
{
    int n,m,l,p1,p2,cnt=0,mx=0,d,ans=-1,sum=0;
    in>>n>>m>>l;
    for(int i=1; i<=m; i++)
    {
        in>>p1>>p2;
        arr[p1]=p2;
    }
    in>>d;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==0)
        {
            arr[i]=l;
        }
        if(arr[i]==arr[i-1] || i==1){
        cnt++;
        }
        else
        {
            mx=max(mx,cnt);
            cnt=1;
        }
        sum=sum+arr[i];
        if(d<=sum && ans==-1){
        ans=i;
        }
    }
    mx=max(mx,cnt);
    out<<mx<<endl;
    out<<ans;

    return 0;
}