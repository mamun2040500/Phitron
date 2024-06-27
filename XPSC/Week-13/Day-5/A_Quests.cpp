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
    cin >> t;
    while (t--)
    {
        ll n, c, d;
        cin >> n >> c >> d;
        vll a(n);
        vll sm(n + 1, 0);
        
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        ll mx = a[0];
        for (ll i = 1; i <= n; i++)
        {
            sm[i] = sm[i - 1] + a[i - 1];
        }
        
        ll chk = min(d, n);

        if(mx * d < c)
        {
            cout << "Impossible" << endl;
        }
        else if(sm[chk] >= c)
        {
            cout << "Infinity" << endl;
        }
        else
        {
            ll ans = -1;
            for (ll i = 0; i < d; i++)
            {
                ll c1 = d / (i+1);
                ll id1 = min(i + 1, n);
                ll c2 = d % (i+1);
                ll id2 = min(c2, n);
                ll res = c1 * sm[id1] + sm[id2];
                if (res < c)
                {
                    break;
                }
                ans ++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}