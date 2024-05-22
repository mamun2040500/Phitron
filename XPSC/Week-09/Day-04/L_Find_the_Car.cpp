#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vll a(k + 1, 0);
        vll b(k + 1, 0);
        for (ll i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= k; i++)
        {
            cin >> b[i];
        }
        while (q--)
        {
            ll d;
            cin >> d;
            ll h = lower_bound(a.begin(), a.end(), d) - a.begin();
            if (d == a[h])
            {
                cout << b[h] << " ";
            }
            else
            {
                ll d1 = a[h] - a[h-1];
                ll d2 = d - a[h-1];
                ll tm = b[h-1];
                ll t1 = b[h] - b[h-1];
                tm += (d2 * t1) / d1;
                cout << tm << " ";
            }
        }
        cout << endl;
    }
    return 0;
}