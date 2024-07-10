#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define vbl vector<bool>
#define ll long long int
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define stll set<ll>

using namespace std;

int main()
{
    ll t = 1; 
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 1 && n > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << n - i << " ";
                }
                else
                {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}