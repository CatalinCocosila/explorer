#include <fstream>
using namespace std;

ifstream cin("divizori.in");
ofstream cout("divizori.out");

int ciur1[100005], r, prime[100005];

void ciur()
{
    for (int i = 2; i <= 100005; i++)
    {
        if (ciur1[i] == 0)
        {
            r++;
            prime[r] = i;
            for (int j = i * 2; j <= 100005; j += i) ciur1[j] = 1;
        }
    }
}

int nrdiv(int n)
{
    int d = 1, cnt = 1;
    while (n > 1 && prime[d] * prime[d] <= n)
    {
        int exp = 1;
        while (n % prime[d] == 0)
        {
            exp++;
            n /= prime[d];
        }
        cnt *= exp;
        d++;
    }
    if (n != 1) return cnt * 2;
    else return cnt;
}

int nrcif(long long n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

char a[1000005];

int main()
{
    long long n, i, nr = 0, nr1 = 0, maxi = -1, mini = 1000000000, q = 0, k, x, ok = 0;
    cin >> n >> k;
    ciur();
    for (i = n; i >= 1; i--) cin >> a[i];
    for (i = n; i >= n - k + 1; i--) nr = nr * 10 + a[i] - '0';
    if (nrdiv(nr) > maxi)
    {
        maxi = nrdiv(nr);
        mini = nr;
    }
    else if (nrdiv(nr) == maxi && nr < mini) mini = nr;
    while (i >= 1)
    {
        nr1++;
        if (nrdiv(nr) > maxi)
        {
            maxi = nrdiv(nr);
            mini = nr;
        }
        else if (nrdiv(nr) == maxi && nr < mini) mini = nr;
        nr = nrdiv(nr);
        q = nrcif(nr);
        while (q < k && i >= 1)
        {
            nr = nr * 10 + a[i] - '0';
            i--;
            q++;
        }
        if (i == 0)
        {
            ok = 1;
            x = nr;
        }
    }
    while (ok == 1)
    {
        nr = nrdiv(x);
        if (nr == x) break;
        if (nr > maxi)
        {
            maxi = nr;
            mini = x;
        }
        else if (nr == maxi && x < mini) mini = x;
        x = nr;
        nr1++;
    }
    nr1++;
    cout << nr1 << '\n' << maxi << '\n' << mini;
    return 0;
}