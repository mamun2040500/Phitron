#include "bits/stdc++.h"
using namespace std;
            
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; 
        cin >> s;
        int sz = s.size();
        vector<pair<char,int>>a;
        char c1 = s[0];
        char c2 = s[sz-1];
        for (int i = 1; i < sz-1; i++)
        {
            if ((s[i] <= c2 && s[i] >= c1) || (s[i] <= c1 && s[i] >= c2))
            {
                a.push_back({s[i], i});
            }
        }
        // sort(a.begin(), a.end(), greater<pair<char, int>>());
        sort(a.begin(), a.end());
        cout << abs(c1 - c2) << " " << a.size()+2 << endl;
        if (c1 > c2)
        {
            cout << 1 << " ";
            for (int i = a.size()-1; i > -1; i--)
            {
                cout << a[i].second + 1 << " ";
            }
            cout << sz << " ";
        }
        else
        {
            cout << 1 << " ";
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i].second + 1 << " ";
            }
            cout << sz << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}