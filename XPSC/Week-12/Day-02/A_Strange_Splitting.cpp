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
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        string s;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s += 'B';
        }
        
        if (a[0] == a[n-1])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            s[n-1] = 'R';
            cout << s << endl;
        }
    }
    
    return 0;
}