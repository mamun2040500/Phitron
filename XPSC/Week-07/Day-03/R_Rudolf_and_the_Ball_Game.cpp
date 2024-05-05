#include <bits/stdc++.h>
#define ll long long int
using namespace std;
            
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, x, v;
        cin >> n >> m >> x;
        vector<ll> a(m);
        set<ll> s;
        s.insert(x);
        for (int i = 0; i < m; i++)
        {
            ll v;
            char ch;
            cin >> v >> ch;
            set<ll> s1;
            for (ll it : s)
            {
                ll tpv1 = (it + v) % n;
                ll tpv2 = (it - v + n) % n;
                if (tpv1 == 0)
                {
                    tpv1 = n;
                }
                if (tpv2 == 0)
                {
                    tpv2 = n;
                }
                
                if (ch == '0' || ch == '?')
                {
                    s1.insert(tpv1);
                }
                if (ch == '1' || ch == '?')
                {
                    s1.insert(tpv2);
                }
            }
            s = s1;
        }
        
        
        cout << s.size() << endl;
        for (auto it : s)
        {

            cout << it << " ";
        }
        
        cout << endl;

    }
    return 0;
}