#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define vbl vector<bool>
#define mlstll multiset<ll>
#define stll set<ll>
#define qllch queue<pair<ll, char>>
#define stllch stack<pair<ll, char>>
#define vprllch vector<pair<ll, char>>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        ll n;
        cin >> n >> s;
        s1 = s;
        reverse(s1.begin(), s1.end());
        if (s == s1)
        {
            cout << 0 << endl;
            continue;
        }
        bool fg = true;
        char c1, c2;
        ll l = 0, r = n-1, n1 = 0, n2 = 0;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                c1 = s[l];
                c2 = s[r];
                break;
            }
            l++;
            r--;
        }
        string p1, p2;
        stll st;
        while (l < r)
        {
            if (s[l] != s[r] && s[l] == c1)
            {
                n1++;
                l++;
                continue;
            }
            else if (s[l] != s[r] && s[r] == c1)
            {
                n1++;
                r--;
                continue;
            }
            else
            {
                p1 += s[l];
                p2 += s[r];
            }
            l++;
            r--;
        }
        if (p1 == p2)
        {
            st.insert(n1);
        }
        string q1, q2;
        l = 0, r = n-1;
        while (l < r)
        {
            if (s[l] != s[r] && s[l] == c2)
            {
                n2++;
                l++;
                continue;
            }
            else if (s[l] != s[r] && s[r] == c2)
            {
                n2++;
                r--;
                continue;
            }
            else
            {
                q1 += s[l];
                q2 += s[r];
            }
            l++;
            r--;
        }
        if (q1 == q2)
        {
            st.insert(n2);
        }
        if (st.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *st.begin() << endl;
        }
    }
    return 0;
}