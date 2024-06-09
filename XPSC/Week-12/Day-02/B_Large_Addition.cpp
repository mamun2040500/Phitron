#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
#define pll pair<ll, ll>
using namespace std;

int main()
{
    ll t;
    cin >> t;
        vll a(19);
        vll b(19);
        vll c(19);
        a[0] = 10;
        b[0] = 10;
        c[0] = 18;
        for (ll i = 1; i < 18; i++)
        {
            a[i] = a[i-1] * 10;
            b[i] = b[i-1] + a[i];
            c[i] = a[i] * 2 - 2;
            // cout << c[i] << endl;
        }
    while (t--)
    {
        ll n;
        cin >> n;
        ll rem = n % 10;
        ll d = log10(n);
        d--;
        // cout << d << endl;
        // cout << b[d] << endl;
        // cout << c[d] << endl;
        if (rem != 9 && (b[d] <= n && c[d] >= n))
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