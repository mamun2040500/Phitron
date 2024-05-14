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
        ll n, m;
        cin >> n >> m;
        
        for (ll i = 1; i < n; i += 2)
        {
            ll d;
            for (ll j = 1; j <= m; j++)
            {
                cout << i * m + j << " ";
            }
            cout << endl;
        }
        for (ll i = 0; i < n; i += 2)
        {
            ll d;
            for (ll j = 1; j <= m; j++)
            {
                cout << i * m + j << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
