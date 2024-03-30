#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        string r;
        cin >> n >> s;
        int x;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        r = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i-1])
            {
                r += s[i];
            }
        }
        if (r == "meow")
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