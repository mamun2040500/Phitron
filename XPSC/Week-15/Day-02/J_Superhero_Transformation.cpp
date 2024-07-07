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
    // cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        ll n1 = s1.size();
        ll n2 = s2.size();
        ll c = 0, v = 0;
        for (ll i = 0; i < n1; i++)
        {
            if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
            {
                s1[i] = 'a';
            }
            else
            {
                s1[i] = 'b';
            }
        }
        for (ll i = 0; i < n2; i++)
        {
            if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
            {
                s2[i] = 'a';
            }
            else
            {
                s2[i] = 'b';
            }
        }
        // sort(s1.begin(), s1.end());
        // sort(s2.begin(), s2.end());
        if (s1 == s2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}