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
        ll n;
        cin >> n;
        vll a(n);
        vll b(n);
        bool ans  = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (ll i = 0; i < n; i++)
        {
            if (b[i] - a[i] > 1 || b[i] - a[i] < 0)
            {
                ans = false;
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