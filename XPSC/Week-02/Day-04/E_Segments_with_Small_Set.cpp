#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n, k;
   cin >> n >> k;
   vector<long long int> v(n);
   long long int m = -1;
   for (long long int i = 0; i < n; i++)
   {
      cin >> v[i];
      m = max (m, v[i]);
   }
   vector<long long int> arr(m+1, 0);
   long long int l = 0, r = 0, ans = 0, uc = 0;
      while (r < n)
      {
         arr[v[r]]++;
         if (arr[v[r]] == 1)
         {
            uc++;
         }
         while (uc > k)
         {
            arr[v[l]]--;
            if (arr[v[l]] == 0)
            {
               uc--;
            }
            l++;
         }
         ans += r - l + 1;
         r++;
      }
      cout << ans << endl;
   return 0;
}