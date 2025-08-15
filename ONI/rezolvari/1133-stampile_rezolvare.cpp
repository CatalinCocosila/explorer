#include<bits/stdc++.h>
 
using namespace std;

const int mod = 998244353;

int n, fr[11], fr2[11], ans[100002], n2;
int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ifstream cin("stampile.in");
	ofstream cout("stampile.out");
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		int x2 = x;
		for(int cif = 0; cif <= 9; cif++)
			fr2[cif] = 0;
		while(x2)
		{
			fr[x2%10]++;
			fr2[x2%10]++;
			x2 /= 10;
		}
		int dif = 0;
		for(int cif = 0; cif <= 9; cif++)
			if(fr2[cif])
				dif++;
		if(dif == 2)
			ans[++n2] = x;
	}
	int mini = 0;
	for(int i = 1; i <= 9; i++)
		if(fr[i] < fr[mini])
			mini = i;
	
	cout << mini << '\n';
	
	for(int stp = 0; stp <= 9; stp++)
	{
		int maxi = -1;
		for(int cif = 0; cif <= 9; cif++)
			if(maxi == -1 && fr[cif] != -1)
				maxi = cif;
			else
				if(maxi != -1 && fr[cif] != -1 && fr[cif] > fr[maxi])
					maxi = cif;
		cout << maxi << " ";
		fr[maxi] = 0;
	}
	cout << '\n';
	
	for(int i = 1; i <= n2; i++)
		cout << ans[i] << " ";
	return 0;
}