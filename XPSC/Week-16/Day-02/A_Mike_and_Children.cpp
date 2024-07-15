#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define vbl vector<bool>
#define ll long long int
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define stll set<ll>

using namespace std;

int main()
{
    ll t = 1; 
    // cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vll a(n);
        cin >> a[0];
        mpll mp;
        for (ll i = 1; i < n; i++)
        {
            cin >> a[i];
            for (ll j= 0; j < i; j++)
            {
                ll d = a[i] + a[j];
                mp[d]++;
                ans = max(ans , mp[d]);
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}