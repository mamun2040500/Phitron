#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define vii vector<int>
#define mlstll multiset<ll>
#define stll set<ll>
using namespace std;
ll mod = 1e9 + 7;
            
int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll md = a[n/2];
        ll l = n/2;
        ll r = n/2 + 1;
        while (k > 0 && r < n)
        {
            if (a[l] < a[r])
            {
                k -= r-l;
                if (k < 0)
                {
                    break;
                }
                a[l]++;
            }
            else
            {
                r++;
            }
        }
        
        cout << a[l] + k/ (l+1) << endl;
    }
    return 0;
}