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
        ll mn = min(x, y);
        ll mx = max(x, y);
        
        if (mx > 2 * mn)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (mx == 2 * mn)
        {
            cout << "YES" << endl;
            continue;
        }
        ll d = mx - mn;
        x -= d;
        y -= d;
        if (x > y)
        {
            x -= d;
        }
        else
        {
            y -= d;
        }
        
        if (x == y)
        {
            if (x % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }
        
        cout << 0 << endl;
    }
    return 0;
}