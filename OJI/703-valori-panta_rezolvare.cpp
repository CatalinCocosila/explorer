#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream cin("valori-panta.in");
	ofstream cout("valori-panta.out");
	
	int n;
	cin >> n;
	
	int maxi = -1;
	vector<int> pozitii;
	
	int val = 0;
	
	int mini = (1<<30);
	vector<int> pozitii2;
	
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		
		int x2 = x;
		
		vector<int> cifre;
		while(x)
		{
			cifre.push_back(x%10);
			x /= 10;
		}
		
		bool sorted = 1;
		for(int poz = 1; poz < cifre.size(); poz++)
			if(cifre[poz] < cifre[poz-1])
				sorted = 0;
				
		
		
		bool sorted2 = 1;
		for(int poz = 1; poz < cifre.size(); poz++)
			if(cifre[poz] > cifre[poz-1])
				sorted2 = 0;
		
		if(sorted || sorted2)
		{
			val++;
			if(x2 > maxi)
			{
				pozitii.clear();
				pozitii.push_back(i);
				maxi = x2;
			}
			else
				if(x2 == maxi)
					pozitii.push_back(i);
			
			if(x2 < mini)
			{
				pozitii2.clear();
				pozitii2.push_back(i);
				mini = x2;
			}
			else
				if(x2 == mini)
					pozitii2.push_back(i);
		}
	}
	
	cout << val << '\n';
	
	if(val == 0)
		cout << "NU EXISTA";
	else
	{
		cout << maxi << " ";
		for(int i = 0; i < pozitii.size(); i++)
			cout << pozitii[i] << " ";
		
		cout << '\n';
		
		cout << mini << " ";
		for(int i = 0; i < pozitii2.size(); i++)
			cout << pozitii2[i] << " ";
		
		cout << '\n';
	}
	return 0;
}