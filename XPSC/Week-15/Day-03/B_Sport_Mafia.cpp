#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define vbl vector<bool>
#define ll long long int
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define stll set<ll>

using namespace std;

int main()
{
    ll t = 1; 
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        ll l = 1, r = n;
        while (1)
        {
            ll md = (l + r) / 2;
            ll sm = ((md + 1) * md) / 2 - (n - md);
            if (sm == k)
            {
                ans = n - md;
                break;
            }
            else if (sm < k)
            {
                l = md + 1;
            }
            else
            {
                r = md - 1;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}