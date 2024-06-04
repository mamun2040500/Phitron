#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        ll ans = 0;
        vector<bool> ba(n+1, true);
        ba[0] = false;
        vector<bool> bl(n+1);
        bl[0] = false;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                bl[i+1] = true;
            }
            else
            {
                bl[i+1] = false;
            }
        }
        for (ll i = 1; i < n+1; i++)
        {
            if (bl[i])
            {
                continue;
            }
            for (ll j = 1; j*i <= n; j++)
            {
                if (bl[j * i])
                {
                    break;
                }
                
                if (ba[j * i] && !bl[j * i])
                {
                    ans += i;
                    ba[j*i] = false;
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}