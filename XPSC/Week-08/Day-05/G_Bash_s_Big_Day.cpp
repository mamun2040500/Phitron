#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
ll n;
    cin >> n;
    vll a(n);
    ll mx = 0;
    map<ll, ll> mp;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 1)
        {
            mp[a[i]]++;
        }
        ll sq = sqrt(a[i]);
        for (ll ii = 2; ii <= sq; ii++)
        {
            if (a[i] % ii == 0)
            {
                mp[ii]++;
                if (sq * sq == a[i])
                {
                    continue;
                }
                mp[a[i] / ii]++;
            }
        }
      
    }
    
    for (auto [x, y] : mp)
    {
        ans = max(ans , y);
    }
    if (ans == 0)
    {
        ans++;
    }
    
    cout << ans << endl;
    return 0;
}