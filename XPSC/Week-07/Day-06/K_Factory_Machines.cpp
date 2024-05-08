#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
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
        ll n, q, v;
        cin >> n >> q;
        vll a(n);
       
        for (ll i = 0; i < n; i++)
        {
            cin >> v;
            a[i] = v;
        }
        // sort(a.begin(), a.end());
        ll l = 1, r = 1e18;
        ll ans = -1;
        while (l <= r)
        {
            ll md = (l+r)/2;
            ll sm = 0;
            for (ll it : a)
            {
                sm += md / it;
                if (sm >= q)
                {
                    break;
                }
            }
            // cout << ans << " " <<  sm << endl;
            if (sm >= q)
            {
                ans = md;
                r = md - 1;
            }
            else
            {
                l = md + 1;
            }

        }
        // cout <<  endl;
        cout << ans << endl;

    }
    return 0;
}