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
        ll n;
        string s;
        cin >> n >> s;
        ll cb = 0;
        ll l = -1;
        ll r = -1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (cb == 0)
                {
                    l = i;
                }
                cb++;
                r = i;
            }
        }
        if (cb < 2)
        {
            cout << cb << endl;
        }
        else
        {
            cout << r - l + 1 << endl;
        }
    }
    return 0;
}