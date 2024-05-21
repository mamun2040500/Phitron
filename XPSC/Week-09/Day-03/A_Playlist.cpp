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
    map<ll, ll> mp;
    ll ans = 0;
    ll l = 0, r = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (r < n)
    {
        mp[a[r]]++;
        while ( mp[a[r]] > 1)
        {
            mp[a[l]]--;
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    
    cout << ans << endl;
    return 0;
}