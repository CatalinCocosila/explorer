using namespace std;
#ifdef EZ
   #include "./ez/ez.h"
   const string FILE_NAME = "test";
#else
   #include <bits/stdc++.h>
   const string FILE_NAME = "ciocolata";
#endif
#define mp make_pair
#define mt make_tuple
#define ll long long
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define cin fin
#define cout fout
ifstream fin (FILE_NAME + ".in");
ofstream fout (FILE_NAME + ".out");

const int nMAX = 100e3;

int c, n;
int v[nMAX + 1];

int main()
{
   cin >> c >> n;
   for (int i = 1; i <= n; ++i)
      cin >> v[i];

   if (c == 1)
   {
      vector<int> fv(10001);
      for (int i = 1; i <= n; ++i)
         fv[v[i]]++;
      
      int ans = 0;
      for (int i = 1; i <= 10000; ++i)
         if (fv[i] > fv[ans])
            ans = i;
      
      cout << ans;
   }
   
   else if (c == 2)
   {
      int ansmin = INT_MAX;
      int a = 1, b = n-1;
      int A = 0, B = v[n];

      while (A + v[a] < B)
         A += v[a++];
      
      while (a < b)
      {
         A += v[a++];

         while (a < b && A >= B + v[b])
            B += v[b--];

         ansmin = min(ansmin, A-B);
      }

      cout << ansmin;
   }
}