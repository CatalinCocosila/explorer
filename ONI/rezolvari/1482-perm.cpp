#include <fstream>
using namespace std;

ifstream cin("perm.in");
ofstream cout("perm.out");

int v[100001], fr[20001], arr[100001];

int main()
{
    int n, cnt = 0, last = 0, index = 0, p = 0, sm = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        sm += v[i];
        fr[v[i]]++;
        if (fr[v[i]] == 2)
        {
            p++;
            for (int j = last + 1; j <= index; j++)
            {
                fr[v[j]]--;
                sm -= v[j];
                arr[j] = p;
            }
            last = index;
        }
        if (sm == 1LL * (i - last) * (i - last + 1) / 2) index = i;
    }
    if (index != n)
    {
        cout << "NU";
        return 0;
    }
    p++;
    for (int i = last + 1; i <= n; i++) arr[i] = p;
    cout << p << '\n';
    for (int i = 1; i <= n; i++) cout << arr[i] << " ";
    return 0;
}