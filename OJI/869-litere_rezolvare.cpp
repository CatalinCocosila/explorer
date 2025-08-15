	
#include <iostream>
#include <fstream>
 
using namespace std;
 
int c, n;
char x[20002];
 
char mat[501][501], mat2[501][501];
int main()
{
	ifstream cin("litere.in");
	ofstream cout("litere.out");
	
	cin >> c;
	cin >> n;
	
	for(int poz = 1; poz <= n; poz++)
		cin >> x[poz];
		
	int pas = 1;
	int total = 0;
	int operatii = 0;
	while(total < n)
	{
		total += pas;
		pas += 2;
		operatii++;
	}
	pas -= 2;
	
	if(c == 1)
	{
		cout << total - n << '\n';
		return 0;
	}
	
	int L = 1;
	int C = operatii;
	int C2 = operatii;
	while(n < total)
	{
		n++;
		x[n] = '*';
	} 
	
	int cnt = 1;
	while(L <= operatii)
	{
		for(int i = C; i <= C2; i++)
		{
			mat[L][i] = x[cnt];
			if(c == 2 && i == C && (x[cnt] != '*'))
				cout << x[cnt] << " ";
			cnt++;
		}
		C--;
		C2++;
		L++;
	}
	C++;
	C2--;
	for(int i = 1; i <= operatii; i++)
		for(int j = C; j <= C2; j++)
		{
			if(mat[i][j] == 0)
				mat[i][j] = '-';
		}
	
	// mergem pe ultima linie
	int Ls2 = 1;
	int Cs2 = operatii;
	for(int poz = C; poz <= C2; poz += 2)
	{
		int Ls = operatii;
		int Cs = poz;
		int Lp = Ls2;
		int Cp = Cs2;
		bool ok = 0;
		while(Ls > 0 && Cs <= C2 && mat[Ls][Cs] != '-')
		{
			mat2[Lp][Cp] = mat[Ls][Cs];
			if(ok == 0)
			{
				Cs++;
				Lp++;
				ok = 1;
			}
			else
			{
				Ls--;
				Cp++;
				ok = 0;
			}
		}
		Ls2++;
		Cs2--;
	}
	
	if(c == 3)
	{
		for(int i = 1; i <= operatii; cout << '\n', i++)
			for(int j = C; j <= C2; j++)
			{
				if(mat2[i][j] == 0)
					mat2[i][j] = '-';
				if(mat2[i][j] != '-' && mat2[i][j] != '*')
					cout << mat2[i][j] << " ";
			}
	}
	return 0;
}