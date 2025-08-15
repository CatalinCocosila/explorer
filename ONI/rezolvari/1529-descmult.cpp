#include<bits/stdc++.h>
//#pragma GCC optimize("Ofast,unroll-loops")
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pld;
const ll NMAX=2e5+5,LGMAX=20,STMAX=(1<<20)+5;
ll nums[NMAX],cnt=0;
ll P[NMAX],E[NMAX];
void tc(){
    ll c,n,a,b,ans1=1;
    cin>>c>>n>>a>>b;
    nums[cnt++]=1;
    for(ll i=0;i<n;i++) cin>>P[i];
    for(ll i=0;i<n;i++) cin>>E[i];
    for(ll i=0;i<n;i++){
        ll p=P[i],e=E[i];
        ans1*=e+1;
        ll old=cnt;
        for(ll pw=p,j=1;pw<=b && j<=e;j++,pw*=p){
            for(ll k=0;k<old;k++){
                if(nums[k]*pw<=b) nums[cnt++]=nums[k]*pw;
            }
        }
    }
    if(c==1){
        cout<<ans1;
        return;
    }
    for(ll i=0;i<cnt;i++)
        if(nums[i]>=a)
            cout<<nums[i]<<' ';
}
int main()
{
    //#ifdef LOCAL
        freopen("descmult.in","r",stdin);
        freopen("descmult.out","w",stdout);
    //#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //ll t; cin>>t; while(t--)
        tc();

    return 0;
}