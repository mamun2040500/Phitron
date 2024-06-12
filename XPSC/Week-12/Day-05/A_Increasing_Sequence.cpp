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
        ll ans = 0;
        vll a(n);
        for (ll i = 0; i < n; i++)
        {
            ans ++;
            cin >> a[i];
            if (a[i] == ans)
            {
                ans ++;
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}