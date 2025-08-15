#include <fstream>
using namespace std;

ifstream cin("remi.in");
ofstream cout("remi.out");

int a[10003], minim[10003], maxim[10003], n;

int idk()
{
    for (int i = 1; i <= n; i++)
    {
        if (minim[i] > maxim[i]) return 1;
        else if (minim[i] < maxim[i]) return 0;
    }
    return 1;
}

int main()
{
	int jollyjoker, i, mini, maxi, ok = 0, k;
    cin >> jollyjoker >> n;
    for (i = 1; i <= n; i++) cin >> a[i];
    for (i = 1; a[i] >= a[i + 1] && i <= n; i++) minim[i] = a[i];
    mini = i;
    for (; i + 1 <= n && a[i + 1] >= a[mini]; i++) minim[i] = a[i + 1];
    minim[i] = a[mini];
    i++;
    for (; i <= n; i++) minim[i] = a[i];
    for (i = 1; a[i] >= a[i + 1] && i <= n; i++);
    maxi = i;
    i++;
    for (; i <= n; i++)
        if (a[maxi] <= a[i]) maxi = i;
    for (i = 1; i <= n && a[i] >= a[maxi]; i++)
    {
        if (i == maxi) i++;
        maxim[++k] = a[i];
    }
    maxim[++k] = a[maxi];
    for (; i <= n; i++)
    {
        if (i == maxi) i++;
        maxim[++k] = a[i];
    }
    ok = idk();
    if (ok == 1)
    {
        for (i = 1; i <= n && minim[i] >= jollyjoker; i++) a[i] = minim[i];
        a[i] = jollyjoker;
        n++;
        i++;
        for (; i <= n; i++) a[i] = minim[i - 1];
    }
    else
    {
        for (i = 1; i <= n && maxim[i] >= jollyjoker; i++) a[i] = maxim[i];
        a[i] = jollyjoker;
        n++;
        i++;
        for (; i <= n; i++) a[i] = maxim[i - 1];
    }
    for (i = 1; i <= n; i++) cout << a[i];

    return 0;
}