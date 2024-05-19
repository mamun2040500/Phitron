#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll gc0 = a[0];
        ll gc1 = a[1];
        for (ll i = 0; i < n; i += 2)
        {
            gc0 = __gcd(gc0, a[i]);
        }
        bool t0 = false;
        bool t1 = false;
        for (ll i = 1; i < n; i += 2)
        {
            gc1 = __gcd(gc1, a[i]);
            if (a[i] % gc0 == 0)
            {
                t0 = true;
            }
        }
        
        for (ll i = 0; i < n; i += 2)
        {
            if (a[i] % gc1 == 0)
            {
                t1 = true;
            }
        }
        if (t0 && t1)
        {
            cout << 0 << endl;
        }
        else if (t0)
        {
            cout << gc1 << endl;
        }
        else
        {
            cout << gc0 << endl;
        }
        
        // cout << endl;
    }
    return 0;
}