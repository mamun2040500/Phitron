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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        vll cnt(n + 1, 0);
        vll mx(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < n + 1)
            {
                cnt[a[i]]++;
            }
        }
        for (ll i = 1; i < n + 1; i++)
        {
            for (ll j = i; j < n+1; j += i)
            {
                mx[j] += cnt[i];
            }
        }
        sort(mx.begin(), mx.end());

        cout << mx[n] << endl;
    }
    return 0;
}