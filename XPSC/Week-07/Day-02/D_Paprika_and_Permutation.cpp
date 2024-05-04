#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define vbl vector<bool>
#define mlstll multiset<ll>
#define stll set<ll>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        vll a(n);
        vbl vis(n+1, false);
        vll b;
        bool ans  = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > n || vis[a[i]])
            {
                b.push_back(a[i]);
            }
            else
            {
                vis[a[i]] = true;
            }
            
        }
        sort(b.begin(), b.end());
        ll i = 0, j = 1;
        while (i < b.size() && j < n+1)
        {
            if (vis[j])
            {
                j++;
            }
            else
            {
                if (b[i] <= j*2)
                {
                    ans = false;
                }
                else
                {
                    cnt++;
                }
                i++;
                j++;
            }
            
        }
        if (ans)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}