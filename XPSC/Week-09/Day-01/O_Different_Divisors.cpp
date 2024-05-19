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
    for (ll i = 3; i < 1e5; i += 2)
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
        ll d;
        cin >> d;
        ll d1 = *lower_bound(prime.begin(), prime.end(), d + 1);
        ll d2 = *lower_bound(prime.begin(), prime.end(), d1 + d);
        
        cout << d1 * d2 << endl;
        
    }
    return 0;
}