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
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vll a(n);
        vll b(q);
        vll c;
        ll sm = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < q; i++)
        {
            cin >> b[i];
        }
        c = b;
        sort(b.begin(), b.end());
        map<ll, ll> mp;
        ll i = 0, j = 0;
        while (i < n)
        {
            while (a[i] > b[j] && j < q)
            {
                mp[b[j]] = sm;
                j++;
            }
            sm += a[i];
            i++;
        }
        while (j < q)
        {
            mp[b[j]] = sm;
            j++;
        }
        for (ll it : c)
        {
            cout << mp[it] << " ";
        }
        
        cout << endl;
    }
    return 0;
}