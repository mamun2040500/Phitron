#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, a, b, c, p, q, ans = 0;
        cin >> n >> a >> b >> p >> q;
        c = max(p, q);
        ll lc = __gcd(a, b);
        lc = (a * b) / lc;
        ll nc = n / lc;
        ll na = n / a - nc;
        ll nb = n / b - nc;
        
        ans = na * p + nb * q + nc * max(p, q);
        cout << ans << endl;
        
    }
    return 0;
}