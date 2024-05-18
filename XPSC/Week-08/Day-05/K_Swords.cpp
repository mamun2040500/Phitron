#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        vll b(n);
        ll mx = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        ll gc = 0;
        for (ll i = 0; i < n; i++)
        {
            b[i] = mx - a[i];
            gc = __gcd(gc, b[i]);
        }
        
        ll ans = 0;
        for (ll it : b)
        {
            ans += it / gc;
        }
        cout << ans << " " << gc;
    }
    return 0;
}