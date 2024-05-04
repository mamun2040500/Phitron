#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mlstll multiset<ll>
#define stll set<ll>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        vll b(n);
        stll st1;
        stll st0;
        bool ans  = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] < b[i])
            {
                ans = false;
            }
            if (b[i] == 0)
            {
                st0.insert(a[i] - b[i]);
            }
            else
            {
                st1.insert(a[i] - b[i]);
            }
        }
        if (ans && st1.size() > 1)
        {
            ans = false;
        }
        if (ans && st1.size() == 1 && st0.size() > 0)
        {
            ll x = *st1.begin();
            ll y = *st0.rbegin();
            if (x < y)
            {
                ans = false;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}