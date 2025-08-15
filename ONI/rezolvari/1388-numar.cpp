#include <iostream>
#include <fstream>
using namespace std;

#ifdef LOCAL
#define fin cin
#define fout cout
#else
ifstream fin("numar.in");
ofstream fout("numar.out");
#endif

int vf[10], v[100];

bool circular(int n) {
    string a = to_string(n);
    int k = a.size();
    int poz = 0;
    for (int i=0; i<=5; i++) vf[i] = 0;
    for (int i=1; i<=k; i++) {
        poz = (poz + a[poz] - '0') % k;
        vf[poz]++;
    }
    if (poz != 0) return false;
    for (int i=0; i<k; i++) {
        if (vf[i] == 0) return false;
    }
    return true;
}

int main()
{
    int n, x, cx, maxbun=0, Max=0;
    bool bun;
    fin >> n;
    for (int i=1; i<=n; i++) {
        fin >> x;
        v[i] = x;
        Max = max(Max, x);
        cx = x;
        for (int j=0; j<=9; j++) vf[j] = 0;
        bun = false;
        while (cx > 0) {
            vf[cx % 10]++;
            if (vf[cx % 10] >= 2) {
                bun = true;
                break;
            }
            cx /= 10;
        }
        if (bun) maxbun = max(maxbun, x);
    }
    if (maxbun > 0) fout << maxbun;
    else fout << Max;
    fout << endl;
    for (int i=1; i<=n; i++) {
        x = 0;
        while (1) {
            if (circular(v[i] + x)) {
                fout << v[i] + x;
                break;
            }
            if (circular(v[i] - x)) {
                fout << v[i] - x;
                break;
            }
            x++;
        }
        fout << endl;
    }
}