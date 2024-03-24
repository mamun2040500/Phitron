#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
   
    while (t--)
    {
        int n, m, ans = INT_MAX;
        
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int diff = 0;
                string s1 = s[i];
                string s2 = s[j];
                for (int k = 0; k < m; k++)
                {
                    diff += abs(s1[k] - s2[k]);
                }
                ans = min(ans, diff);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}