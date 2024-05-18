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
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 2)
        {
            cout << 1 << endl;
        }
        else if (n % 2 == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            bool p1 = true;
            bool p2 = true;
            ll sq = sqrt(n);
            for (ll i = 3; i < sq + 1; i += 2)
            {
                if (n % i == 0)
                {
                    p1 = false;
                }
                if ((n-2) % i == 0)
                {
                    p2 = false;
                }
            }
            if (p1)
            {
                cout << 1 << endl;
            }
            else if (p2)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
    }
    return 0;
}