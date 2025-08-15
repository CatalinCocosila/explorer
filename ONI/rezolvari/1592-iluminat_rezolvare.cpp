#include <bits/stdc++.h>
using namespace std;

int c, k, n, mat[1002][1002], lin[1000002], col[1000002];

long long sp[1002][1002];
int main()
{
    
    ifstream cin("iluminat.in");
    ofstream cout("iluminat.out");
    
    cin >> c >> n >> k;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
            lin[mat[i][j]] = i;
            col[mat[i][j]] = j;
        }
    if(c == 1 || c == 2)
    {
        int val = n*n;
        int ans1 = 0;
        int ans2 = 0;
        while(k)
        {
            while(mat[lin[val]][col[val]] == 0)
                val--;
            ans1 = val;
            ans2 = 0;
            for(int i = 1; i <= n; i++)
                if(mat[i][col[val]] != 0)
                    ans2++, mat[i][col[val]] = 0;
            for(int j = 1; j <= n; j++)
                if(mat[lin[val]][j] != 0)
                    ans2++, mat[lin[val]][j] = 0;   
            k--;
        }
        if(c == 1)
            cout << ans1 << '\n';
        else
            cout << ans2 << '\n';
    }
    if(c == 3)
    {
        long long ans = 0;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
            {
                sp[i][j] = sp[i-1][j] + sp[i][j-1] - sp[i-1][j-1] + mat[i][j];
                if(i >= k && j >= k)
                    ans = max(ans, sp[i][j] - sp[i-k][j] - sp[i][j-k] + sp[i-k][j-k]);
            }
    }
    return 0;
}