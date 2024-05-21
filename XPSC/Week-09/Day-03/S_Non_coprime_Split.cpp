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
    for (ll i = 3; i < 1e4; i += 2)
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
        ll l, r, a, b;
        cin >> l >> r;
        if (r < 4) 
        {
            cout << -1 << endl;
            continue;
        }
        
        bool fg = true;
        if (r == l)
        {
            for (ll it : prime)
            {
                if (it >= r)
                {
                    break;
                }
                
                if (r % it == 0)
                {
                    a = it;
                    b = r - it;
                    fg = false;
                    break;
                }
            }
        }
        else if (r % 2 == 0)
        {
            a = 2;
            b = r - 2;
            fg = false;
        }
        else
        {
            a = 2;
            b = r - 3;
            fg = false;
        }
        
        if (fg) 
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
    return 0;
}