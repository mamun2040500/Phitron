#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;
vector<ll> cop2 [1001];

int main()
{
    ll N = 1001;
    for (ll i = 1; i < N; i++)
    {
        for (ll j = 1; j < N; j++)
        {
            ll d = __gcd(i, j);
            if (d == 1)
            {
                cop2[i].push_back(j);
            }
        }
    }
    
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        bool ans = false;
        ll mx = -1;
        vector<ll> id[1001];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            id[a[i]].push_back(i+1);
        }
        for (ll i = 1; i < N; i++)
        {
            for (ll j : cop2[i])
            {
                if (!id[i].empty() && !id[j].empty())
                {
                    mx = max(mx, id[i].back() + id[j].back());
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}