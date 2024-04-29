#include <bits/stdc++.h>
#define ll long long int
using namespace std;
            
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, a, b, id = 0, i , j, d;
        cin >> x;
        bool ans = false;
        
        j = cbrt(x);

        for (i = 1; i < j+1; i++)
        {
            d = cbrt(x - i*i*i);
            if (d > 0 && i*i*i + d*d*d == x)
            {
                ans = true;
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