#include <fstream>
const int NMAX=405;

using namespace std;
ifstream cin("figura.in");
ofstream cout("figura.out");

bool v[NMAX][NMAX];

int main()
{
    int d,n,sum=0,i,j;
    cin>>d>>n;
    sum=4*n;
    for(i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x][y]=true;
    }
    for(i=1;i<=d;i++)
    {
        for(j=1;j<=d;j++)
        {
            if(v[i][j]==true)
            {
                sum-=v[i+1][j]+v[i-1][j]+v[i][j-1]+v[i][j+1];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}