#include <fstream>
#include <vector>

using namespace std;
ifstream cin("turn.in");
ofstream cout("turn.out");

vector <int> v;

int main()
{
    int n,k,i,j,x;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    bool vr=true;
    while(vr)
    {
        /*for(i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;*/
        vr=false;
        for(i=1;i<n;i++)
        {
            int cnt=1;
            while(i<n && v[i]==v[i-1])
            {
                i++;
                cnt++;
            }
            if(cnt>=k)
            {
                v.erase(v.begin()+i-cnt,v.begin()+i);
                vr=true;
                n-=cnt;
                i=n+1;
            }
        }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}