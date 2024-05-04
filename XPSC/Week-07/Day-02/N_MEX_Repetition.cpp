#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define vii vector<int>
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
        ll n, q, d, k;
        cin >> n >> q;
        vll a(n);
        vector<bool> vis(n + 1, false);
        d = q % (n + 1);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            vis[a[i]] = true;
        }

        for (ll i = 0; i < n+1; i++)
        {
            if (!vis[i])
            {
                k = i;
                break;
            }
        }
        for (ll i = n - d + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        if (d > 0)
        {
            cout << k << " ";
        }
        for (ll i = d ; i < n; i++)
        {
            cout << a[i - d] << " ";
        }
        cout << endl;
    }
    return 0;
}