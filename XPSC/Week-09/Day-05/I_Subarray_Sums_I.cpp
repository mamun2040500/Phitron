#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;
int main()
{
    ll t = 1; 
    // cin >> t;
    while (t--)
    {
        ll n, x, cnt = 0;
        cin >> n >> x;
        vll a(n+1, 0);
        for (ll i = 1; i < n+1; i++)
        {
            cin >> a[i];
            a[i] += a[i-1];
        }
        ll l = 0;
        ll r = 0;
        while (r <= n)
        {
            if (a[r] - a[l] < x)
            {
                r++;
            }
            else if (a[r] - a[l] == x)
            {
                cnt ++;
                l++;
            }
            else
            {
                l++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}