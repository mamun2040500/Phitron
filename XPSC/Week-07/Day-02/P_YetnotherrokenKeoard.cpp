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
        string s;
        cin >> s;
        stllch qa;
        stllch qb;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!qa.empty())
                {
                    qa.pop();
                }
            }
            else if (s[i] == 'B')
            {
                if (!qb.empty())
                {
                    qb.pop();
                }
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                qa.push({i, s[i]});
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                qb.push({i, s[i]});
            }
        }

        vprllch chpr;
        while (!qa.empty())
        {
            auto pr = qa.top();
            chpr.push_back({pr.first, pr.second});
            qa.pop();
        }
        while (!qb.empty())
        {
            auto pr = qb.top();
            chpr.push_back({pr.first, pr.second});
            qb.pop();
        }
        sort(chpr.begin(), chpr.end());
        for (auto it : chpr)
        {
            cout << it.second ;
        }
        cout << endl;
    }
    return 0;
}