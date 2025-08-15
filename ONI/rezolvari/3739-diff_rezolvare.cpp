#include <bits/stdc++.h>
using namespace std;

ifstream  fin("diff.in");
ofstream fout("diff.out");
int fr[10], n, a[100006];
int d[100006];

int main()
{
    int task, i, j, c1, c2, difmax, minAp, maxAp;
    int ult, mn;
    fin >> task >> n;
    for (i = 1; i <= n; i++)
        fin >> a[i];
    if (task == 1)
    {
        int mx = 0;
        for (i = 1; i <= n; i++)
        {
            j = a[i];
            fr[j]++;
            mx = max(mx, fr[j]);
        }
        fout << mx << "\n";
    }
    else if (task == 2)
    {
        difmax = 0;
        for (i = 1; i <= n; i++)
        {
            fr[a[i]]++;
            minAp = 100001; maxAp = 0;
            for (j = 1; j < 10; j++)
                if (fr[j] > 0)
                {
                    minAp = min(minAp, fr[j]);
                    maxAp = max(maxAp, fr[j]);
                }
            difmax = max(difmax, maxAp - minAp);
        }
        fout << difmax << "\n";
    }
    else /// task == 3
    {
        difmax = 0;
        for (c1 = 1; c1 < 9; c1++)
            for (c2 = c1 + 1; c2 < 10; c2++)
            {
                ///----------------------------------------
                ult = mn = 0;
                for (i = 1; i <= n; i++)
                {
                    if (a[i] == c1)
                    {
                        d[i] = d[i - 1] + 1;
                        if (ult > 0) difmax = max(difmax, d[i] - mn);
                    }
                    else if (a[i] == c2)
                    {
                        d[i] = d[i - 1] - 1;
                        for (j = ult; j < i; j++)
                            if (mn > d[j]) mn = d[j];
                        ult = i;
                    }
                    else d[i] = d[i - 1];
                }
                ult = n + 1; mn = 0;
                for (i = n; i >= 1; i--)
                {
                    if (a[i] == c1)
                    {
                        d[i] = d[i + 1] + 1;
                        if (ult <= n) difmax = max(difmax, d[i] - mn);
                    }
                    else if (a[i] == c2)
                    {
                        d[i] = d[i + 1] - 1;
                        for (j = ult; j > i; j--)
                            if (mn > d[j]) mn = d[j];
                        ult = i;
                    }
                    else d[i] = d[i + 1];
                }

                swap(c1, c2);
                ult = mn = 0;
                for (i = 1; i <= n; i++)
                {
                    if (a[i] == c1)
                    {
                        d[i] = d[i - 1] + 1;
                        if (ult > 0) difmax = max(difmax, d[i] - mn);
                    }
                    else if (a[i] == c2)
                    {
                        d[i] = d[i - 1] - 1;
                        for (j = ult; j < i; j++)
                            if (mn > d[j]) mn = d[j];
                        ult = i;
                    }
                    else d[i] = d[i - 1];
                }
                ult = n + 1; mn = 0;
                for (i = n; i >= 1; i--)
                {
                    if (a[i] == c1)
                    {
                        d[i] = d[i + 1] + 1;
                        if (ult <= n) difmax = max(difmax, d[i] - mn);
                    }
                    else if (a[i] == c2)
                    {
                        d[i] = d[i + 1] - 1;
                        for (j = ult; j > i; j--)
                            if (mn > d[j]) mn = d[j];
                        ult = i;
                    }
                    else d[i] = d[i + 1];
                }
                swap(c1, c2);
                ///------------------------------------------
            }
        fout << difmax << "\n";
    }
    return 0;
}