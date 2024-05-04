#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
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
        ll q, v;
        cin >> q;
        vll a(1);
        cin >> a[0];
        ll mn = a[0];
        ll mx = INT_MAX;
        cout << 1;
        bool ans = true;
        for (ll i = 1; i < q; i++)
        {
            cin >> v;
            if (!ans)
            {
                mn = v;
            }
            
            if (v >= *a.rbegin() && v <= mx && v >= mn)
            {
                a.push_back(v);
                cout << 1;
            }
            else if (v <= mn && ans)
            {
                cout << 1;
                mx = mn;
                mn = v;
                ans = false;
                a.push_back(v);
            }
            else if (v < *a.rbegin() && v <= mx && v >= mn)
            {
                cout << 0;
            }
            else
            {
                cout << 0;
            }
        }
        
        cout << endl;

    }
    return 0;
}