#include <bits/stdc++.h>

using namespace std;


int frq[1000002];

int main()
{
	ifstream cin("pagini.in");
	ofstream cout("pagini.out");
	
	int n;
	cin >> n;
		
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		frq[x]++;
	}
	
	int cnt = 0;
	int mx = 0;
	int m = 0;
	
	for(int i = 1; i <= 1000000; i++)
	{
		if(frq[i] == 1)
			m++;
		else
			m = 0;
		
		if(m == 2)
			cnt++;
		
		if(m >= 2 && m > mx)
			mx = m;
	}
	
	cout << cnt << '\n';
	cout << mx << '\n';
	return 0;
}