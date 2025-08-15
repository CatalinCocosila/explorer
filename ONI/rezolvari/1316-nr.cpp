#include <stdio.h>
#include <math.h>

int v[9], vcif[9];

int main()
{
    FILE *fin = fopen("nr.in", "r");
    FILE *fout = fopen("nr.out", "w");

    int k, n, x, i = 1, nr = 0, nrcif = 0, cnt0 = 0, e = 0;
    fscanf(fin, "%d %d %d", &k, &n, &x);
    fprintf(fout, "%d\n", (int)pow(2, k - 1));

    while (n > 0) {
        if (n % 2 == 1) {
            nr = nr * 10 + i;
            if (nr == 0)
                cnt0++;
        } else {
            nr *= 10;
            if (nr == 0)
                cnt0++;
        }
        i++;
        n /= 2;
    }

    while (nr > 0) {
        fprintf(fout, "%d", nr % 10);
        nr /= 10;
    }

    for (i = 0; i < cnt0; i++)
        fprintf(fout, "0");
    fprintf(fout, "\n");

    if (x < 987654321) {
        while (x > 0) {
            v[nrcif] = x % 10;
            nrcif++;
            x /= 10;
        }
        for (i = nrcif - 1; i >= 0; i--) {
            if (v[i] < i + 1) {
                vcif[nrcif - i - 1] = 0;
                if (v[i] > 0) {
                    e = 1;
                    break;
                }
            } else if (v[i] == i + 1)
                vcif[nrcif - i - 1] = i + 1;
            else
                break;
        }
        if (i > -1)
            if (e == 1)
                i--;
        for (; i >= 0; i--)
            vcif[nrcif - i - 1] = i + 1;
        for (i = 0; i < nrcif && vcif[i] == 0; i++)
            ;
        for (; i < nrcif; i++)
            fprintf(fout, "%d", vcif[i]);
    } else {
        fprintf(fout, "987654321");
    }

    fclose(fin);
    fclose(fout);
    return 0;
}