#include<bits/stdc++.h>
 
using namespace std;


int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ifstream cin("prieteni.in");
	ofstream cout("prieteni.out");
	
	vector<int> v;
	
	vector<int> pr(70002);
	for(int i = 2; i <= 70000; i++)
		if(pr[i] == 0)	
		{
			v.push_back(i);
			for(int j = i+i; j <= 70000; j += i)
				pr[j] = 1;
		}
	
	vector<int> ans;
	int n;
	cin >> n;
	vector<int> val(n+1);
	
	for(int i = 1; i <= n; i++)
		cin >> val[i], pr[val[i]] = 1;
	
	for(int i = 1; i <= n; i++)
	{
		int xx = val[i], sc = 0;
		while(xx)
		{
			sc += xx%10;
			xx /= 10;
		}
		if(__gcd(sc, val[i]) == 1)
		{
			for(int j = sc; j <= val[i]; j++)
				if(pr[j] == 0)
					ans.push_back(j), pr[j] = 1;
		}
		ans.push_back(val[i]);
	}
	
	cout << ans.size() << '\n';
	
	for(auto x : ans)
		cout << x << " ";
	return 0;
}