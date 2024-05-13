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
        ll n;
        cin >> n;
        vll a(n);
        bool ans = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            ans = false;
            for (ll j = 2; j <= i + 2; j++)
            {
                if (a[i] % j != 0)
                {
                    ans = true;
                    break;
                }
            }
            if (!ans)
            {
                break;
            }
        }
        
        if (ans) 
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