#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define vbl vector<bool>
#define ll long long int
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mpll map<ll, ll>
#define stll set<ll>

using namespace std;

int main()
{
    ll t = 1; 
    cin >> t;
    while (t--)
    {
        string a, b;
        ll n, m;
        cin >> a >> b;
        char a1 = * a.begin();
        char a2 = * a.rbegin();

        char b1 = * b.begin();
        char b2 = * b.rbegin();

        if (a1 == b1)
        {
            cout << "YES" << endl;
            cout << a1 << "*" << endl;
        }
        else if (a2 == b2)
        {
            cout << "YES" << endl;
            cout << "*" << a2 << endl;
        }
        else
        {
            bool ans = false;
            map<string, ll> mp;
            string ab = "00";
            for (ll i = 1; i < a.size(); i++)
            {
                ab[0] = a[i-1];
                ab[1] = a[i];
                mp[ab]++;
            }
            for (ll i = 1; i < b.size(); i++)
            {
                ab[0] = b[i-1];
                ab[1] = b[i];

                if (mp[ab] > 0)
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
            {
                cout << "YES" << endl;
                cout << "*" << ab << "*" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}