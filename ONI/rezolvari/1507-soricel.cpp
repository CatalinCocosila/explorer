#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("soricel.in");
ofstream cout("soricel.out");

#define int long long

bool pp(int x)
{
    int y = sqrt(x);
    return y * y == x;
}

int a[201][201], b[201][201], fr[1000000];

signed main() 
{
    int cer, n, m, k;
    cin >> cer >> n >> m >> k;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= m; j++) 
        {
            cin >> a[i][j];
            if (a[i][j] == 0 || a[i][j] == 1) b[i][j] = 0;
            else if (pp(a[i][j])) 
            {
                int p = sqrt(a[i][j] - 1);
                b[i][j] = a[i][j] - p * p;
            }
            else 
            {
                int p = sqrt(a[i][j]);
                b[i][j] = a[i][j] - p * p;
            }
        }
    }
    if (cer == 1) 
    {
        int zile = 0, camere = 0;
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= m; j++) 
            {
                if (b[i][j] == k) camere++;
                zile = max(zile, b[i][j]);
            }
        }
        cout << zile << " " << camere;
    }
    if (cer == 2)
    {
        int maxim = 0, ans, d = -1, nr = 0, s = 0, smax = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = 1; j <= m; j++) 
                {
                    if (b[i][j] == d) 
                    {
                        nr++;
                        s += a[i][j]; 
                    }
                    else
                    {
                        if (nr > maxim) 
                        {
                            maxim = nr;
                            ans = d;
                            smax = s;
                        }
                        if (nr == maxim && s > smax) 
                        { 
                            ans = d;
                            smax = s; 
                        }
                        if (nr == maxim && s == smax) ans = max(ans, d);
                        d = b[i][j];
                        if (!d) d--;
                        nr = 1;
                        s = a[i][j] - b[i][j];
                    }
                }
            }
            else
            {
                for (int j = m; j > 0; j--) 
                {
                    if (b[i][j] == d) 
                    { 
                        nr++;
                        s += a[i][j];
                    }
                    else 
                    {
                        if (nr > maxim) 
                        {
                            maxim = nr;
                            ans = d;
                            smax = s;
                        }
                        if (nr == maxim && s > smax) 
                        { 
                            ans = d;
                            smax = s; 
                        }
                        if (nr == maxim && s == smax) ans = max(ans, d);
                        d = b[i][j];
                        if (!d) d--;
                        nr = 1;
                        s = a[i][j] - b[i][j];
                    }
                }
            }
        }
        if (nr > maxim)
        {
            maxim = nr;
            ans = d;
        }
        if (nr == maxim && s > smax) ans = d;
        if (nr == maxim && s == smax) ans = max(ans, d);
        cout << maxim << ' ' << ans;
	}
}