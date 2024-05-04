#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mlstll multiset<ll>
#define stll set<ll>
using namespace std;
ll mod = 1e9 + 7;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, v, ans = 0;
        cin >> n >> k;
        vll a;
        vll b;
        for (ll i = 0; i < n; i++)
        {
            cin >> v;
            if (v > 0)
            {
                a.push_back(-v);
            }
            else
            {
                b.push_back(v);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < a.size(); i += k)
        {
            ans -= 2 * a[i];
        }

        for (int i = 0; i < b.size(); i += k)
        {
            ans -= 2 * b[i];
        }

        ll n1 = 0, n2 = 0;

        if (!a.empty())
        {
            n1 -= a[0];
        }
        if (!b.empty())
        {
            n2 -= b[0];
        }
        
        cout << ans - max(n1, n2) << endl;
    }
    return 0;
}