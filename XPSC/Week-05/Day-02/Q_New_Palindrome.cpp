#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; 
        cin >> s;
        int n = s.size()/2;
        set<char>st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        
        if (st.size() > 1)
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