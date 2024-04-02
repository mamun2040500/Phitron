#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> mp;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            string s1, s2;
            bool ans = false;
            int m = s[i].length();
            for (int j = 1; j < m; j++)
            {
                s1 = s[i].substr(0,j);
                s2 = s[i].substr(j, m-j);
                if (mp[s1] > 0 && mp[s2] > 0)
                {
                    ans = true;
                }
            }
            cout << ans ;
        }
        cout << endl;
    }
    return 0;
}