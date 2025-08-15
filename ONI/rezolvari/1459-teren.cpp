#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("teren.in");
ofstream fout ("teren.out");

int cer, n, m, t, r, c;
int matrice[185][185];
int maxim;

bool nerevendicata (int i, int j, int x, int y) {
    if (matrice[x][y] - matrice[i - 1][y] - matrice[x][j - 1] + matrice[i - 1][j - 1])
        return true;
    return false;
}

int main() {
    fin >> cer >> n >> m >> t >> r >> c;
    for (int i = 1; i <= t; i++) {
        int a, b, e, d;
        fin >> a >> b >> e >> d;
        for (int x = a; x <= e; x++) {
            for (int y = b; y <= d; y++) {
                matrice[x][y]++;
                maxim = max(maxim, matrice[x][y]);
            }
        }
    }
    if (cer == 1)
        fout << matrice[r][c];
    if (cer == 2)
        fout << maxim;
    if (cer == 3) {
        maxim = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                matrice[i][j] += matrice[i - 1][j] + matrice[i][j - 1] - matrice[i - 1][j - 1];
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int x = i, y = j;
                while (x <= n && y <= m && nerevendicata(i, j, x, y) == false)
                    x++, y++;
                maxim = max(maxim, (x - i) * (x - i));
            }
        }
        fout << maxim << "\n";
    }
    return 0;
}