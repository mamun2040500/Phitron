#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
   
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int ans = 0;
        map<char, int> mp;
        for (char it : s)
        {
            mp[it]++;
            if (mp[it] % 2 == 0)
            {
                mp[it]--;
                mp[it]--;
                ans--;
            }
            else
            {
                ans++;
            }
        }
        if (ans <= k + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}