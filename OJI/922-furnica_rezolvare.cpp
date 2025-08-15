using namespace std;
#ifdef EZ
   #include "./ez/ez.h"
   const string FILE_NAME = "test";
#else
   #include <bits/stdc++.h>
   const string FILE_NAME = "furnica";
#endif
#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define cin fin
#define cout fout
ifstream fin (FILE_NAME + ".in");
ofstream fout (FILE_NAME + ".out");



int main()
{
   int cer, n, t;
   cin >> cer >> n;  if (cer == 3)  cin >> t;
   vector<pair<ll, ll>> v(n+2);
   for (int i = 1; i <= n; ++i)
      cin >> v[i].fi >> v[i].se;

   if (cer == 1)
   {
      ll ans = v[1].se * 5;

      for (int i = 1; i <= n; ++i)
      {
         ans += v[i].fi * 3;
         if (v[i+1].se < v[i].se)
            ans += (v[i].se - v[i+1].se) * 2;
         else
            ans += (v[i+1].se - v[i].se) * 5;
      }

      cout << ans;
   }

   else if (cer == 2)
   {
      ll ans = 0, c = 0;
      for (int i = 1; i <= n; ++i)
      {
         if (v[i-1].se <= v[i].se)
         {
            c += v[i].fi;
            c += v[i].se - v[i-1].se;
         }
         else
         {
            c = v[i].fi;
         }
         ans = max(ans, c);
      }

      cout << ans;
   }

   else if (cer == 3)
   {
      ll sum = v[1].se * 3;
      int which = 1;

      for (int i = 1; i <= n; ++i)
      {
         sum += v[i].fi * 3;
         if (t <= sum)
            break;
         
         if (v[i+1].se < v[i].se)
         {
            sum += (v[i].se - v[i+1].se) * 2;
            if (t <= sum)
               break;
            which++;
         }
         else
         {
            which++;
            sum += (v[i+1].se - v[i].se) * 5;
            if (t <+ sum)
               break;
         }
      }

      cout << which;
   }
}