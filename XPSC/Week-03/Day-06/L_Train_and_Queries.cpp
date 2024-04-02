#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> station(n);
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> station[i];
            if (mp.count(station[i]))
            {
                mp[station[i]].second = i;
            }
            else
            {
                mp[station[i]].first = i;
                mp[station[i]].second = i;
            }
        }
        
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            
            if (mp.count(a) && mp.count(b) && (mp[a].first < mp[b].second))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}