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
        ll a, b, l, ans = 0;
        cin >> a >> b >> l;
        set<ll> st;
        ll x = 0, y = 0;
        ll d = 1;
        while (d <= l)
        {
            d = d * a;
            x++;
        }
        d = 1;
        while (d <= l)
        {
            d = d * b;
            y++;
        }
        
        ll ni = 1;
        for (ll i = 0; i <= x; i++)
        {
            ll nj = 1;
            for (ll j = 0; j <= y; j++)
            {
                ll m = ni * nj;
                if (l < m)
                {
                    break;
                }
                if (l % m == 0)
                {
                    ans++;
                    st.insert(m);
                }
                nj = nj * b;
            }
            ni = ni * a;
        }
        cout << st.size() << endl;
    }
    return 0;
}
