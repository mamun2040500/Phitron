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
        ll x, y;
        cin >> x >> y ;
        ll d = max(x, y);
        ll ans = (d-1) * (d-1) +  d;
        if (d % 2 == 1)
        {
            cout << ans + y - x << endl;
        }
        else
        {
            cout << ans + x - y << endl;
        }
    }
    return 0;
}