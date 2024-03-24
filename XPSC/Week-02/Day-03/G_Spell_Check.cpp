#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    string s1 = "Timur";
        sort(s1.begin(), s1.end());
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        sort(s.begin(), s.end());
        if (s1 == s)
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