/*
	A combination of binary search on answer and simulation
*/
#include <bits/stdc++.h>
using namespace std;

int c, n, p, s, v[100002];

int main()
{
    
    ifstream cin("inundatie.in");
    ofstream cout("inundatie.out");
    
    cin >> c >> n >> p >> s;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    
    if(c == 1)
    {
        int maxi = -1, mini = 200001;
        for(int i = 1; i <= n; i++)
        {
            maxi = max(maxi, v[i]);
            mini = min(mini, v[i]);
        }
        cout << maxi - mini << '\n';
    }
    if(c == 2)
    {
        long long ans = 0;
        int maxi = 0;
        for(int i = p; i >= 1; i--)
        {
            if(v[i] > maxi)
                maxi = v[i];
            else
                ans += (maxi - v[i]);
        }
        cout << ans << '\n';
    }
    if(c == 3)
    {
        int L = 1;
        int R = n;
        int sol = 0;
        while(L <= R)
        {
            int mid = (L + R) / 2;
            long long ans = 0;
            int maxi = 0;
            for(int i = mid; i >= 1; i--)
            {
                if(v[i] > maxi)
                    maxi = v[i];
                else
                    ans += (maxi - v[i]);
            }
            if(ans <= s)
                sol = mid, L = mid + 1;
            else
                R = mid - 1;
        }
        cout << sol << '\n';
    }
    if(c == 4)
    {
        long long ans = 0;
        long long tans = 0;
        int indmax = p;
        int maxi = 0;
        for(int i = p; i >= 1; i--)
        {
            if(v[i] > maxi)
                maxi = v[i], indmax = i;
            else
                ans += (maxi - v[i]), tans = indmax;
        }
        cout << tans << '\n';
    }
    return 0;
}