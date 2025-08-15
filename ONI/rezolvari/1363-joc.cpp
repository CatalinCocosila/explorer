#include <iostream>
#include <fstream>
using namespace std;
ifstream f("joc.in");
ofstream g("joc.out");
int n, x, y, i, j,a,bb;
bool r[40003], b[40003], t[40003];
int main() {
    f >> n >> x >> y; 
    i = 1;
    j = n + 1;
    t[1] = r[1] = b[1] = true;
    bool ok = true, ok1 = true, ok2 = true;
    int cnt1 = 0, cnt2 = 0;
   while (ok) {
       cnt2++;
        if(ok1)
            j = j - y;
        if(ok2)
            i = i + x;
        ok1 = ok2 = true;
        if (i != j) {
            if (!r[i]) {
                r[i] = true;
                t[i] = true;

            }
            else {
                ok = false;
                a = i;
                bb = j;
                break;
            }
            if (!b[j]) {
                b[j] = true;
                t[j] = true;
            }
            else {
                a = i;
                bb = j;
                ok = false;
                break;
            }
            if (i + x > n) {
                i = i + x - n;
                ok2 = false;
            }
               
            if (j - y < 1) {
                j = j - y + n;
                ok1 = false;
            }
        }
        else {
            t[i] = true;
            a = i;
            bb = j;
            break;
        }
    }
    for (i = 1; i <= n; i++)
        if (!t[i]) {
            cnt1++;
        }
    if (a > n) {
        a -= n;
    }
    if (bb < 1)
        bb = bb + n;
    g << cnt1 << ' ' << cnt2 << ' ' << a << ' ' << bb;

    return 0;
}