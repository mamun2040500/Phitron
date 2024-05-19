#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n+1, 0);
        vll sm(n+1, 0);
        ll ans = 1;
        for (ll i = 1; i < n+1; i++)
        {
            cin >> a[i];
            a[i] += a[i-1];
        }
        ll mx = a[n];
        for (ll i = 1; i < n; i++)
        {
            ll gc = __gcd(a[i], mx - a[i]);
            ans = max(gc, ans);
        }
        cout << ans << endl;
        
    }
    return 0;
}