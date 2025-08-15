#include <fstream>
#include <climits>
using namespace std;

ifstream cin("alarma.in");
ofstream cout("alarma.out");

int dist[100][100], lin[10], col[10];

int main()
{
	for (int i = 0; i < 10; i++) cin >> lin[i] >> col[i];
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			int nr = abs(lin[j] - lin[i]) + abs(col[j] - col[i]);
			dist[i][j] = dist[j][i] = nr;
		}
	}
	int a, mini = INT_MAX;
	cin >> a;
	int h1 = a / 100, m1 = a % 100;
	for (int i = 0; i <= 9999; i++)
	{
		int h2 = i / 100, m2 = i % 100;
		if (h2 % 24 == h1 && m2 % 60 == m1)
		{
			int nr = dist[h2 % 10][h2 / 10] + dist[h2 % 10][m2 / 10] + dist[m2 / 10][m2 % 10];
			if (nr < mini)
			{
				mini = nr;
				a = i;
			}
		}
	}
	cout << mini << '\n';
	if (a < 10) cout << "000" << a;
	else if (a < 100) cout << "00" << a;
	else if (a < 1000) cout << "0" << a;
	else cout << a;
	return 0;
}