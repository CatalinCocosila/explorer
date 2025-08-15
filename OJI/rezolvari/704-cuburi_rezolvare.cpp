#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream cin("cuburi.in");
	ofstream cout("cuburi.out");
	
	int n;
	cin >> n;
	
	vector<int> v(n+1), consecs(n+1), consecd(n+1), mxs(n+1), mxd(n+1);
	
	vector<int> frq(11);
	
	for(int i = 1; i <= n; i++)
	{
		cin >> v[i];
		frq[v[i]]++;
	}
	
	for(int i = 1; i <= n; i++)
	{
		consecs[i] = 1;
		if(i > 1 && v[i] == v[i-1])
			consecs[i] += consecs[i-1];
		mxs[i] = max(mxs[i-1], consecs[i]);
	}
	
	for(int i = n; i >= 1; i--)
	{
		consecd[i] = 1;
		if(i != n && v[i] == v[i+1])
			consecd[i] += consecd[i+1];
		if(i == n)
			mxd[i] = consecd[i];
		else
			mxd[i] = max(mxd[i+1], consecd[i]);
	}
	
	int cnt = 0;
	int mx = 0;
	
	for(int i = 1; i <= 10; i++)
	{
		if(frq[i] > 0)
			cnt++;
		if(frq[i] > mx)
			mx = frq[i];
	}
	
	cout << cnt << '\n';
	for(int i = 1; i <= 10; i++)
		if(frq[i] == mx)
			cout << i << " ";
	cout << '\n';
	
	int mx2 = max(mxs[n], mxd[1]);
	for(int i = 1; i <= n; i++)
	{
		if(i == 1)
			mx2 = consecd[i+1];
		else
			if(i == n)
				mx2 = max(mx2, consecs[i-1]);
			else
			{
				if(v[i-1] == v[i+1])
					mx2 = max(mx2, consecs[i-1] + consecd[i+1]);
				else
					mx2 = max(mx2, max(consecs[i-1], consecd[i+1]));
			}
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(i == 1)
		{
			if(mxd[i+1] == mx2)
				cout << i << " ";
		}
		else
			if(i == n)
			{
				if(mxs[i-1] == mx2)
					cout << i << " ";
			}
			else
			{
				if(v[i-1] == v[i+1])
				{
					if(max(max(mxs[i-1], mxd[i+1]), consecs[i-1] + consecd[i+1]) == mx2)
						cout << i << " ";
				}
				else
				{
					if(max(max(mxs[i-1], mxd[i+1]), max(consecs[i-1], consecd[i+1])) == mx2)
						cout << i << " ";
				}
			}
	}
	cout << '\n';
	
}