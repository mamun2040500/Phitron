#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
   
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        map<int, int> mp;
        set<int> st;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];;
            st.insert(a[i]);
        }
        int sz = st.size();

        // cout << sz << " ";

        if (sz < 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool ans = false;
            for (int ist : st)
            {
                vector<int> b;
                for (int it : a)
                {
                    if (it != ist)
                    {
                        b.push_back(it);
                    }
                }
                vector<int> c;
                c = b;
                reverse(c.begin(), c.end());
                if (b == c)
                {
                    ans = true;
                    break;
                }
            }
            if (ans)
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