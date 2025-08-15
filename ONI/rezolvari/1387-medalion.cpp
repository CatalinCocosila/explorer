#include <fstream>

using namespace std;
ifstream in("medalion.in");
ofstream out("medalion.out");
#define int long long
int arr[400][400];
signed main()
{
    int n,nr,p,cnt=1,nract=2,col,mx=0,sum=0;
    in>>nr>>n>>p;
    col=n/2+(n%2==1);
    arr[col][col]=1;
    int cate=col;
    while(cate)
    {
        for(int i=1; i<2*cnt; i++)
        {
            arr[cate][cate+i]=nract;
            nract++;
            nract=nract%nr;
            if(nract==0)
            {
                nract=nr;
            }
        }
        for(int i=1; i<2*cnt; i++)
        {
            arr[cate+i][col+cnt]=nract;
            nract++;
            nract=nract%nr;
            if(nract==0)
            {
                nract=nr;
            }
        }
        for(int j=cnt+col-1; j>=col-cnt; j--)
        {
            arr[col+cnt][j]=nract;
            nract=nract%nr;
            nract++;
            nract=nract%nr;
            if(nract==0)
            {
                nract=nr;
            }
        }
        for(int j=cnt+col-1; j>=col-cnt; j--)
        {
            arr[j][col-cnt]=nract;
            nract++;
            nract=nract%nr;
            if(nract==0)
            {
                nract=nr;
            }
        }
        cnt++;
        cate--;
    }
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    sum=sum+arr[i][j];
    }
    mx=max(mx,sum);
    sum=0;
    }
    out<<mx<<endl;
    int ans=(4*p*p+3*p+1)%nr;
    if(ans)
    {
        out<<ans<<endl;
    }
    else
    {
        out<<nr<<endl;
    }
    return 0;
}