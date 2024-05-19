#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    vector<ll> prime;
    prime.push_back(2);
    ll N = 1e3;
    ll sqn = sqrt(N)+1;
    for (ll i = 3; i < sqn; i += 2)
    {
        bool ans = true;
        ll sq = sqrt(i);
        for (ll it : prime)
        {
            if (i % it == 0)
            {
                ans = false;
                break;
            }
            if (it > sq)
            {
                break;
            }
        }
        if (ans)
        {
            prime.push_back(i);
        }
    }
    
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        vll b(n);
        set<ll> st;
        ll mx = 0;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            for (ll ii = 0; ii < prime.size(); ii++)
            {
                if (a[i] % prime[ii] == 0)
                {
                    if (mp[prime[ii]] == 0)
                    {
                        mp[prime[ii]] = ++mx;
                    }
                    b[i] = mp[prime[ii]];
                    break;
                }
            }
        }
        
        cout << mx << endl;
        for (ll it : b)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}