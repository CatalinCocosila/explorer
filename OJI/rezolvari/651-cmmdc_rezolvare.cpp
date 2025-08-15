#include <bits/stdc++.h>

using namespace std;

ifstream in ("cmmdc.in");
ofstream out ("cmmdc.out");

long long lp[100001][20];

void pp (long long n)
{
    for (long long j=1; (1<<j) <= n; j++)
    {
        for (long long i=1; i+(1<<j)-1 <= n; i++)
        {
            lp[i][j] = __gcd(lp[i][j-1], lp[i+(1<<(j-1))][j-1]);
        }
    }
}

long long Query (long long l, long long r)
{
    if (l>r)
        return 0;

    long long j = int(log2(r-l+1));

    return __gcd(lp[l][j], lp[r-(1<<j)+1][j]);
}

int main()
{
    short cer;
    in >> cer;
    long long n;
    in >> n;
    for (long long i=1; i<=n; i++)
        in >> lp[i][0];

    pp(n);

    if (cer == 1)
        out << Query(1, n);

    else if (cer == 2)
    {
        long long maxim = -1;
        for (int i=1; i<=n; i++)
            maxim = max(maxim, __gcd(Query(1, i-1), Query(i+1, n)));
        out << maxim;
    }
    else
    {
        long long maxim = -1;

        for (int i=1; i<=n; i++)
        {
            for (int j=i+1; j<=n; j++)
            {
                long long GCD = __gcd(Query(i+1, j-1), Query(j+1, n));
                maxim = max(maxim, __gcd(Query(1, i-1), GCD));
                //out << __gcd(Query(1, i-1), GCD) << ' ';
            }
        }
        out << maxim;
    }
    return 0;
}