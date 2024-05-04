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
        ll n;
        cin >> n;
        vll a(n);
        vll a0(n);
        vll a1(n);
        ll n0 = 0, n1 = 0, sm = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                n0++;
                sm += n1;
            }
            else
            {
                n1++;
            }
            a0[i] = n0;
            a1[i] = n1;
        }
        ll mx = 0;
        n1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                mx = max(mx, n1 - a0[n-1] + a0[i]);
                n1++;
            }
        }
        n0 = 0;
        for (ll i = n-1; i > -1; i--)
        {
            if (a[i] == 0)
            {
                mx = max(mx, a0[n-1] - a0[i] - a1[i]);
                n0++;
            }
        }
        cout << sm + mx << endl;
    }
    return 0;
}