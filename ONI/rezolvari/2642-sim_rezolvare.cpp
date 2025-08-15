#include <bits/stdc++.h>
using namespace std;

short c, n, k, a[1002][1002], frq[1002][1002], nxt[22][2][1002][1002], cnt[1002][1002];
 
int nxtL(int x, int y)
{
    if(a[x][y] == 1)
        return x-1;
    if(a[x][y] == 2)
        return x+1;
    return x;
}

int nxtC(int x, int y)
{
    if(a[x][y] == 3)
        return y-1;
    if(a[x][y] == 4)
        return y+1;
    return y;
}


int main()
{
    
    ifstream cin("sim.in");
    ofstream cout("sim.out");
    
    cin >> c >> n >> k;
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    
    if(c == 1)
    {
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                frq[nxtL(i, j)][nxtC(i, j)]++;
        int maxi = 0;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                maxi = max(maxi, frq[i][j]);
        cout << maxi << '\n';
    }
    
    if(c == 2)
    {
        k = min(k, n * n);
        for(int pw = 0; pw <= 19; pw++)
        {
            if(pw == 0)
                for(int i = 1; i <= n; i++)
                    for(int j = 1; j <= n; j++)
                    {
                        nxt[0][0][i][j] = nxtL(i, j);
                        nxt[0][1][i][j] = nxtC(i, j);
                    }
            else
                for(int i = 1; i <= n; i++)
                    for(int j = 1; j <= n; j++)
                    {
                        int xi = nxt[pw-1][0][i][j];
                        int yi = nxt[pw-1][1][i][j];
                        nxt[pw][0][i][j] = nxt[pw-1][0][xi][yi];
                        nxt[pw][1][i][j] = nxt[pw-1][1][xi][yi];
                    }
        }
        
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
            {
                int stp = k;
                int ii = i, jj = j;
                for(int bit = 19; bit >= 0; bit--)
                    if(stp >= (1<<bit))
                    {
                        stp -= (1<<bit);
                        int xi = nxt[bit][0][ii][jj];
                        int yi = nxt[bit][1][ii][jj];
                        ii = xi;
                        jj = yi;
                    }
                cnt[ii][jj]++;
            }
        
        long long ans = 0;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                ans += 1LL * cnt[i][j] * (cnt[i][j] - 1);
        cout << ans << '\n';
    }
    return 0;
}