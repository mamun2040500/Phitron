#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    set<string> st;
    vector<string> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }
    for (int i = t - 1; i >= 0; i--)
    {
        string ss = v[i].substr(v[i].length()-2);
        int sz = st.size();
        st.insert(v[i]);
        if (st.size() > sz)
        {
            s = s + ss;
        }
    }
    cout << s << endl;
    return 0;
}