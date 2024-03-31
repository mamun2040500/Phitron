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
        set<int> st;
        map <int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            st.insert(v);
            mp[v]++;
        }
        int ans = 0;

        while (!st.empty())
        {
            int its = *st.begin();
            int it = its;
            while (mp[it] > 0)
            {
                mp[it]--;
                if (mp[it] == 0)
                {
                    st.erase(it);
                }
                it++;
            }
            ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}