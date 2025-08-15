#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
    ifstream cin("codificare.in");
    ofstream cout("codificare.out");
    
    int c;
    cin >> c;
    
    if(c == 1)
    {
        int n;
        cin >> n;
        
        int mini = 1000000001, maxi = 0;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            
            int x2 = x;
            while(x2 >= 10)
                x2 /= 10;
            if(x2 % 2 == 0)
            {
                mini = min(mini, x);
                maxi = max(maxi, x);
            }
        }
        cout << mini << " " << maxi << '\n';
    }
    
    if(c == 2)
    {
        int k, cif;
        cin >> k >> cif;
        
        int ans = 1;
        for(int i = 1; i <= (k-1) / 2; i++)
            ans *= 10;
        cout << ans << '\n';
    }
    return 0;
}