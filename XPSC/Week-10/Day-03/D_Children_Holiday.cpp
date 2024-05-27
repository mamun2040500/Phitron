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
        ll n, m;
        cin >> m >> n;
        vll a(n);
        vll b(n);
        vll c(n);
        vll d(n);
        
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i] >> c[i];
            d[i] = a[i] * b[i] + c[i];
        }
        ll ans = 0;
        ll l = 0, r = 1e10;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll sm = m;
            for (ll i = 0; i < n; i++)
            {
                ll n1 = mid / d[i];
                n1 *= b[i];
                ll n2 = mid % d[i];
                n2 = n2/a[i];
                n2 = min(n2, b[i]);
                sm -= min(sm, n1 + n2);
            }
            if (sm > 0)
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid-1;
            }
        }
        cout << ans << endl;
            ll sm = m;
            for (ll i = 0; i < n; i++)
            {
                ll n1 = ans / d[i];
                n1 *= b[i];
                ll n2 = ans % d[i];
                n2 = n2/a[i];
                n2 = min(n2, b[i]);
                cout << min(sm, n1 + n2) << " ";
                sm -= min(sm, n1 + n2);
            }
    }
    return 0;
}