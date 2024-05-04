#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mlstll multiset<ll>
#define stll set<ll>
using namespace std;

int main()
{
    ll mod = 1e9 + 7;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, ans = 0;
        cin >> n >> k;
        ll m = 1;
        while (k > 0)
        {
            if(k % 2 == 1)
            {
                ans += m;
            }
            m = (m * n) % mod;
            k = k / 2;
            ans %= mod;
        }
        
        cout << ans << endl;
    }
    return 0;
}