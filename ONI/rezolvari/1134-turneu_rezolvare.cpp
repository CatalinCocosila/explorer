#include<bits/stdc++.h>
 
using namespace std;

int n, m, cnt[200002], mx;
int main()
{
	
	ifstream cin("turneu.in");
	ofstream cout("turneu.out");
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 1; i <= m; i++)
	{
		char x;
		int nr;
		cin >> x >> nr;
		cnt[nr]++;
		if(cnt[nr] > mx)
			mx = cnt[nr];
	}
	
	for(int i = 1; i <= n; i++)
		if(cnt[i] % 2 == 1)
			cout << i << " ";
	cout << '\n';
	
	for(int i = 1; i <= n; i++)
		if(cnt[i] == mx)
			cout << i << " ";
	cout << '\n';
	
	int x = 0;
	for(int i = 1; i <= n; i++)
		if(cnt[i] == 0)
			x++;
	cout << x << '\n';
	return 0;
}