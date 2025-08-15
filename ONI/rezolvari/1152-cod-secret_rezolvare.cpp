#include<bits/stdc++.h>
 
using namespace std;

char mat[2001][6];

char s[2001];
int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ifstream cin("cod-secret.in");
	ofstream cout("cod-secret.out"); 
	
	
	
	cin.getline(s, 2001);
	char xx;
	if(s[0] == 'c' || s[0] == 'C')
		xx = 'c';
	else
		xx = 'd';
	int len = strlen(s);
	
	if(xx == 'c')
	{
		int lin = 0;
		int nr = 0;
		for(int i = 1; i < len; i++)
		{
			char x = s[i];
			if(x == ' ')
				x = '.';
			mat[lin][nr] = x;
			nr++;
			if(nr == 5)
				nr = 0, lin++;
		}
		
		for(int j = 0; j < 5; j++)
			for(int i = 0; i <= lin; i++)
			{
				if(mat[i][j] == 0)
					mat[i][j] = '.';
				cout << mat[i][j];
			}
	}
	else
	{
		int lin = (len-1) / 5;
		int poz = 1;
		for(int j = 0; j < 5; j++)
			for(int i = 0; i < lin; i++)
			{
				mat[i][j] = s[poz++];
				if(mat[i][j] == '.')
					mat[i][j] = ' ';
			}
		for(int i = 0; i < lin; i++)
			for(int j = 0; j < 5; j++)
				cout << mat[i][j];
	}
	return 0;
}