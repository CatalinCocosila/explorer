#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
int n, m, i, j, nc, ord, a, k, b, t, p, ok = 0, v[1002], w[1002];
ifstream f("galbeni.in");
ofstream g("galbeni.out");

int p10(int n)
{
    int a = 1;
    while(n)
    {
        a *= 10;
        n--;
    }
    return a;
}

int prodcf(int n)
{
    int a = 1;
    while(n)
    {
        if(n % 10 != 0)
            a *= n % 10;
        n /= 10;
    }
    return a;
}

int main()
{
    f >> n >> nc >> ord;
    k = p10(nc);
    v[n] = 1;
    w[1] = n;
    t = n;
    for(i = 2; i <= ord; i++)
    {
        n = (n * prodcf(n) * 8) / 9;
        n %= k;
        while(n < k / 10)
            n = n * 10 + 9;
        w[i] = n;
        if(v[n] != 0)
        {
            m = (ord - (v[n] - 1)) % (i - v[n]);
            if(m != 0)
                g << w[v[n] + m - 1];
            else
                g << w[i - 1];
            ok = 1;
            break;
        }
        v[n] = i;
    }
    if(ok == 0)
        g << n;
    return 0;
}
