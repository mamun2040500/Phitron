#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, mn, mx, x , y, v, ans;
        cin >> n;
        set<ll> st1;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v;
            st1.insert(v);
            a[i] = v;
        }
        if (st1.size() < 4)
        {
            cout << 0 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        mn = *st1.begin();
        mx = *st1.rbegin();
        ll d = (mx - mn) / 6;
        ll l = 0, r = d + 1;
        while (l <= r)
        {
            ll md = (l + r) / 2;
            ll i = 0;
            ll chk;

            ll k = 3;
            while (k--)
            {
                if (i < n)
                {
                    chk = a[i] + md * 2;
                }
                while (i < n && a[i] <= chk)
                {
                    i++;
                }
            }
            
            if (i == n)
            {
                ans = md;
                r = md - 1;
            }
            else
            {
                l = md + 1;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}