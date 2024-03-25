#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n, k;
   cin >> n >> k;
   vector<long long int> v(n);
   multiset<long long int> ml;
   for (long long int i = 0; i < n; i++)
   {
      cin >> v[i];
   }
   long long int l = 0, r = 0, ans = 0;
   
   while (r < n)
   {
      ml.insert(v[r]);
      while (*(--ml.end()) - *ml.begin() > k)
      {
         auto it = ml.find(v[l]);
         ml.erase(it);
         l++;
      }
      
      if (*(--ml.end()) - *ml.begin() <= k)
      {
         ans += r - l + 1;
      }
      r++;
   }
   cout << ans << endl;
   return 0;
}