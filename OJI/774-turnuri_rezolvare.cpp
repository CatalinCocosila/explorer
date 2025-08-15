#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream cin("turnuri.in");
	ofstream cout("turnuri.out");
	
	int n, m;
	cin >> n >> m;
	
	int v[1021][1021];
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
			cin >> v[i][j];
	}
	
	int h[1021] = {0};
	
	for(int i = 1; i <= m; i++)
	{
		int cnt = 0;
		for(int j = n; j >= 1; j--)
			cnt += v[j][i];
		h[i] = cnt;
	}
	
	int mx = 0;
	for(int i = 1; i <= m; i++)
	{
		mx = max(mx, h[i]);
		if(i + 1 <= m)
			if(h[i] + h[i+1] <= n)
				mx = max(mx, h[i] + h[i+1]);
		cout << h[i] << " ";
	}
	cout << '\n';
	
	cout << mx << '\n';
	
	int cnt = 0;
	for(int i = 1; i <= m; i++)
	{
		if(h[i] == mx)
			cnt++;
		else
		{
			if(i+1 <= m && h[i] + h[i+1] == mx)
			{
				cnt++;
				i++;
			}
		}
	}
	cout << cnt << '\n';
}
