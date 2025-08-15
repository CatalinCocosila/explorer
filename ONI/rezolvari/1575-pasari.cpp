#include <fstream>
#include <cassert>

using namespace std;

ifstream f("pasari.in");
ofstream g("pasari.out");

const int Nmax = 1005;

int Cer, N, L, A[Nmax][Nmax];

int V[Nmax], K;
int Nord[Nmax][Nmax], Sud[Nmax][Nmax], Vest[Nmax][Nmax], Est[Nmax][Nmax];

int Mars_L[Nmax][Nmax], Mars_C[Nmax][Nmax];

int main()
{
    f >> Cer >> N;
    assert(Cer == 1 || Cer == 2), assert(5 <= N && N <= 1e3);

    if (Cer == 1)
        f >> L, assert(1 <= L && L <= N);

    for(int i = 1 ; i <= N; ++i)
        for(int j = 1; j <= N; ++j)
            f >> A[i][j], assert(1 <= A[i][j] && A[i][j] <= 1e5);

    if(Cer == 1)
    {
        int c = 0, Max = 0;

        for(int C = 1; C <= N; ++C)
        {
            int nr = 1;

            for(int j = C - 1; j >= 1; --j)
                if(A[L][j] <= A[L][C])
                    nr++;
                else
                    break;

            for(int j = C + 1; j <= N; ++j)
                if(A[L][j] <= A[L][C])
                    nr++;
                else
                    break;

            for(int j = L - 1; j >= 1; --j)
                if(A[j][C] <= A[L][C])
                    nr++;
                else
                    break;

            for(int j = L + 1; j <= N; ++j)
                if(A[j][C] <= A[L][C])
                    nr++;
                else
                    break;

            if(nr > Max)
                Max = nr, c = C;
        }

        g << c << '\n';
        assert(c >= 1 && c <= N);
    }
    else
    {
        /// NORD + SUD:
        for(int j = 1; j <= N; ++j)
        {
            /// NORD:
            K = 0;

            for(int i = N; i >= 1; --i)
            {
                while(K && A[i][j] > A[V[K]][j])
                    Nord[V[K]][j] = i, --K;

                V[++K] = i;
            }
            ///

            /// SUD:
            K = 0;

            for(int i = 1; i <= N; ++i)
            {
                while(K && A[i][j] > A[V[K]][j])
                    Sud[V[K]][j] = i, --K;

                V[++K] = i;
            }

            for(int k = 1; k <= K; ++k)
                Sud[V[k]][j] = N + 1;
            ///
        }
        ///

        /// VEST + EST:
        for(int i = 1; i <= N; ++i)
        {
            /// VEST:
            K = 0;

            for(int j = N; j >= 1; --j)
            {
                while(K && A[i][j] > A[i][V[K]])
                    Vest[i][V[K]] = j, --K;

                V[++K] = j;
            }
            ///

            /// EST:
            K = 0;

            for(int j = 1; j <= N; ++j)
            {
                while(K && A[i][j] > A[i][V[K]])
                    Est[i][V[K]] = j, --K;

                V[++K] = j;
            }

            for(int k = 1; k <= K; ++k)
                Est[i][V[k]] = N + 1;
            ///
        }
        ///

        /// MARS:
        for(int i = 1; i <= N; ++i)
            for(int j = 1; j <= N; ++j)
            {
                ++Mars_L[i][Vest[i][j] + 1], --Mars_L[i][Est[i][j]];

                ++Mars_C[j][Nord[i][j] + 1], --Mars_C[j][Sud[i][j]];
            }

        for(int i = 1; i <= N; ++i)
            for(int j = 1; j <= N; ++j)
                Mars_L[i][j] += Mars_L[i][j - 1], Mars_C[i][j] += Mars_C[i][j - 1];
        ///

        int x = 0, y = 0, Max = 0;

        for(int i = 1; i <= N; ++i)
            for(int j = 1; j <= N; ++j)
            {
                int Val = Mars_L[i][j] + Mars_C[j][i] - 1;

                if(Val > Max)
                    Max = Val, x = i, y = j;
            }

        g << x << ' ' << y << '\n';
        assert(1 <= x && x <= N && 1 <= y && y <= N);
    }

    return 0;
}