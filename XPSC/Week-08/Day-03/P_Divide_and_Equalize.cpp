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
        map<ll, ll> mp;
        double lg = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[1]++;
            ll m = sqrt(a[i]) + 1;
            for (ll j = 2; j < m; j++)
            {
                while (a[i] > 1 && a[i] % j == 0)
                {
                    mp[j]++;
                    a[i] /= j;
                }
            }
            if (a[i] > 1)
            {
                mp[a[i]]++;
            }
        }
        
        bool ans = true;
        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                ans = false;
                break;
            }
        }
        
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
