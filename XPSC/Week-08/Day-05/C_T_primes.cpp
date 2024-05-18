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
    for (ll i = 3; i < 1e3; i += 2)
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
        if (n == 1 || (n % 2 == 0 && n != 4))
        {
            cout << "NO" << endl;
            continue;
        }
        else if (n == 4)
        {
            cout << "YES" << endl;
            continue;
        }
        
        ll m = sqrt(n);
        if (n != m*m)
        {
            cout << "NO" << endl;
            continue;
        }
        bool fg = true;
        ll sqm = sqrt(m);
        for (ll it : prime)
        {
            if (it > sqm)
            {
                break;
            }
            if (m % it == 0)
            {
                fg = false;
                break;
            }
        }
        
        if (fg) 
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