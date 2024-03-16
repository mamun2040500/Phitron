#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0, b = 0, c = 0;
        cin >> n;
        string s;
        vector<string> s1(n);
        vector<string> s2(n);
        vector<string> s3(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            mp[s]++;
            s1.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            mp[s]++;
            s2.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            mp[s]++;
            s3.push_back(s);
        }
        for (string it : s1)
        {
            if (mp[it] == 1)
            {
                a += 3;
            }
            else if (mp[it] == 2)
            {
                a ++;
            }
        }
        for (string it : s2)
        {
            if (mp[it] == 1)
            {
                b += 3;
            }
            else if (mp[it] == 2)
            {
                b ++;
            }
        }
        for (string it : s3)
        {
            if (mp[it] == 1)
            {
                c += 3;
            }
            else if (mp[it] == 2)
            {
                c ++;
            }
        }
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}