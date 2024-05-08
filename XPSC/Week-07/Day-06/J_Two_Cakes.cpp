#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, a, b, mn, mx, x , y;
        cin >> n >> a >> b;
        mn = min(a, b);
        mx = max(a, b);
        ll d = mx / mn;
        if (d >= n-1)
        {
            cout << mn << endl;
            continue;
        }
        ll d1 = n / (d + 1);
        if (d1 == 0)
        {
            d1++;
        }
        ll d2 = n - d1;
        ll ans = min(mn / d1, mx / d2);
        while (ans + 1 <= a && (n - a / (ans + 1)) * (ans + 1) <= b)
        {
            ans ++;
        }
        
        cout << ans << endl;
    }
    return 0;
}