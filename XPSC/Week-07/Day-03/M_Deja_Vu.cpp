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
        ll n, q;
        cin >> n >> q;
        
        vll a(n);
        vll x(q);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mn = 32;
        for (ll i = 0; i < q; i++)
        {
            cin >> x[i];
            if (x[i] >= mn)
            {
                continue;
            }
            else
            {
                mn = min(mn , x[i]);
            }
            ll d = pow(2, x[i]);
            for (ll j = 0; j < n; j++)
            {
                if (a[j] % d == 0)
                {
                    a[j] += d / 2;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        
        
    }
    return 0;
}