#include <fstream>
#include <cmath>

using namespace std;

ifstream cin("puternic.in");
ofstream cout("puternic.out");

int c, n, v[100002], v2[100002], n2;

long long m = (1LL<<62);

int prim[4002], nrp;


bool isputernic(long long x)
{
    if(x == 1)
        return 0;
    for(int i = 1; i <= nrp; i++)
    {
        int cnt = 0;
        while(x % prim[i] == 0)
        {
            x /= prim[i];
            cnt++;
        }
        if(cnt == 1)
            return 0;
    }
    long long xx = sqrt(x);
    long long yy = cbrt(x);
    
    if(yy * yy * yy == x)
        return 1;
    if(xx * xx == x)
        return 1;
    
    xx++;
    yy++;
    
    if(yy * yy * yy == x)
        return 1;
    if(xx * xx == x)
        return 1;
    
    return 0;
}
int main()
{
    
    cin >> c;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        cin >> v[i];
        
    // precalcularea nr prime <= 4000
    
    for(int i = 2; i <= 4000; i++)
    {
        bool ok = 1;
        for(int j = 2; j * j <= i; j++)
            if(i % j == 0)
                ok = 0;
        if(ok)
        {
            nrp++;
            prim[nrp] = i;
        }
    }
    
    int cnt = 0;
    for(int i = 1; i <= n; ++i)
    {
        long long radi = sqrt(v[i]);
        
        if(v[i] != 1 && 1LL * radi * radi == v[i])
            cnt++;
        else
        {
            if(isputernic(v[i]))
                cnt++;
            else
            {
                n2++;
                v2[n2] = v[i];
            }
        }
    }
    
    if(c == 1)
    {
        cout << cnt << '\n';
    }
    else
    {
            
        bool ok = 0;
        for(int i = 1; i <= n2 - i + 1; i++)
        {
            int nr2 = v2[n2 - i + 1];
            int p10 = 1;
            while(nr2)
            {
                p10 *= 10;
                nr2 /= 10;
            }
            
            long long new_val = 1LL * v2[i] * p10 + v2[n2 - i + 1];
            
            long long radi = sqrt(new_val);
            
            if(1LL * radi * radi == new_val || isputernic(new_val))
            {
                ok = 1;
                cout << v2[i] << " " << v2[n2 - i + 1] << '\n';
            }
        }
        if(ok == 0)
            cout << -1 << '\n';
    }
}