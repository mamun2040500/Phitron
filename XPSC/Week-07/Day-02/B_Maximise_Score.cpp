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
        ll n, mn = INT_MAX;
        cin >> n;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            ll d;
            if (i == 0)
            {
                d = abs(a[i] - a[i+1]);
            }
            else if (i == n-1)
            {
                d = abs(a[i] - a[i-1]);
            }
            else
            {
                d = max(abs(a[i] - a[i-1]), abs(a[i] - a[i+1]));
            }
            mn = min(mn, d);
        }
        cout << mn << endl;
    }
    
    return 0;
}