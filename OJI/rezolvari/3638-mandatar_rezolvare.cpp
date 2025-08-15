/// solutie oficiala ciur - Eugen Nodea
# include <bits/stdc++.h>
using namespace std;

ifstream  fcin("mandatar.in");
ofstream fcout("mandatar.out");

const int NM = 1e7;
int fp[3203];
bool P[NM+20], ok;
int b[100001];
int c, n, x, Max, N, MaxM, k, kmax;
int ma[] = {0,2,3,5,6,7};

void ciur()
{
    P[0] = P[1] = 1;
    for(int i=2; i*i <= NM; i++)
        if (!P[i])
            for(int j=2; i*j<= NM; j++)
                P[i*j] = 1;
    fp[1] = 2;
    N = 1;
    for(int i=3; i<=3200; i=i+2) ///pana la [sqrt(10^7)]
        if (!P[i])
            fp[++N] = i;
}
int mandatar(int x, int &k)
{
    int i = 1, p = 1;
    while (fp[i] * fp[i] <= x && i <= N)
    {
        if (x % fp[i] == 0)
        {
            k++;
            p *= fp[i];
            while (x % fp[i] == 0)
                x /= fp[i];
        }
        i++;
    }
    if (x > 1) k++, p *= x;

    return p;
}
int main()
{
    ciur();

    fcin >> c >> n;

    for(int i=1; i<=n; i++)
    {
        fcin >> x;
        k = 0;
        if (!P[x])
        {
            if (x > Max)
                Max = x;
        }
        b[i] = mandatar(x, k);

        if (k > kmax)
        {
            kmax = k; MaxM = b[i];
        }
        else if (k == kmax && b[i] > MaxM) MaxM = b[i];
    }

    if (c == 1) fcout << Max;
    else if (c == 2) fcout << MaxM;
    else
    {
        for(int j=1; j<=5; j++)
        {
            ok = k = 0;
            for(int i=1; i<=n; i++)
            {
                if (b[i] == ma[j])
                    ok = 1;
                if (b[i] % ma[j] == 0)
                    k++;
                else
                    k = 0, ok = 0;

                if(k > kmax && ok)
                    kmax = k;
            }
        }
        fcout << kmax;
    }
    return 0;
}