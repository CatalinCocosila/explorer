#include <fstream>
#include <set>
using namespace std;

int v[1001][1001];

int main()
{
   ifstream cin ("tinta.in");
   ofstream cout ("tinta.out");
   short n, i, j, lin = 1, col = 1;
   cin >> n;
   int k = 2;
   set<int> sume8;
   set<int> :: iterator itr;
   v[1][1] = 1;
   do
   {
      v[lin][++col] = k++;
      for (; col>1; )
         v[++lin][--col] = k++;
      if (lin == n and col == 1)
         break;
      v[++lin][col] = k++;
      for (; lin>1; )
         v[--lin][++col] = k++;
   }
   while (col != n);
   if (n % 2)
   {
      v[++lin][col] = k++;
      for (; lin<n; )
         v[++lin][--col] = k++;
   }
   v[lin][++col] = k++;
   do
   {
      for (; col<n; )
         v[--lin][++col] = k++;
      v[++lin][col] = k++;
      for (; lin<n; )
         v[++lin][--col] = k++;
      v[lin][++col] = k++;
   }
   while (col != n);


   for (i=2; i<n; ++i)
   {
      for (j=2; j<n; ++j)
      {
         sume8.insert(
                 v[i-1][j-1] + v[i-1][j] +
                 v[i-1][j+1] + v[i][j-1] +
                 v[i][j+1] + v[i+1][j-1] +
                 v[i+1][j] + v[i+1][j+1]
                     );
      }
   }
/// 1
   for (i=1; i<=n; ++i)
   {
      for (j=1; j<=n; ++j)
         cout << v[i][j] << ' ';
      cout << '\n';
   }
/// 2
   cout << sume8.size() << '\n';
/// 3
   for (itr = sume8.begin(); itr != sume8.end(); ++itr)
      cout << *itr << ' ';
   return 0;
}