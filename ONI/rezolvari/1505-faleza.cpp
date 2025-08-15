#include <bits/stdc++.h>
using namespace std;
ifstream fin("faleza.in");
ofstream fout("faleza.out");
int n,sus[100005],jos[100005],cnts,cntj;
int main(){
    fin >> n;
    for (int i = 1; i <= n; i ++) {
        fin >> sus[i];
    }
    for (int i = 1; i <= n; i ++) {
        fin >> jos[i];
    }
    sus[0] = 1;
    jos[0] = 1;
    sus[n + 1] = 1;
    jos[n + 1] = 1;
    int ans  = 0;
    for (int i = 0; i <= n; i ++) {
        if (sus[i] == 1 && jos[i] == 0 && sus[i + 1] == 0) {
            ans ++;
            sus[i + 1] = 1;
        }
        else if (jos[i] == 1 && sus[i] == 0 && jos[i + 1] == 0) {
            ans ++;
            jos[i + 1] = 1;
        }
        else if (sus[i + 1] == 0 && jos[i + 1] == 0) {
            ans ++;
        }
    }
    fout << ans;
    return 0;
}