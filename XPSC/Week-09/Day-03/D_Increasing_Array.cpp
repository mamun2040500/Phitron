#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;
int main()
{
    ll t = 1; 
    // cin >> t;
    while (t--)
    {
        ll n ;
        cin >> n ;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll i = 1; i < n; i++)
        {
            if (a[i-1] > a[i])
            {
                ans += a[i-1] - a[i];
                a[i] = a[i-1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}