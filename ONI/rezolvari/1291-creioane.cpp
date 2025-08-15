#include <fstream>
#include<algorithm>
#include<cmath>
using namespace std;
ifstream cin("creioane.in");
ofstream cout("creioane.out");
int v[100001], h[100001];
int main()
{
    int n,temp=0,cnt=0,cntma=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i]>>h[i];
    }
    for(int i=1;i<=n;i++){
         cnt=1;
        temp=i;
        while(v[temp]>0){
            temp=v[temp];
            cnt++;
        }
        if(cnt>cntma)cntma=cnt;
    }
    cout<<cntma;
}