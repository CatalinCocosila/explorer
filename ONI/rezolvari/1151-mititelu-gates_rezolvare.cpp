#include<bits/stdc++.h>
 
using namespace std;

int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ifstream cin("mititelu-gates.in");
	ofstream cout("mititelu-gates.out"); 
	
	long long n, s;
	cin >> n >> s;
	
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	
	while(s > 0)
	{
		cout << v.back() << " ";
		s -= v.back();
		v.pop_back();
	}
	return 0;
}