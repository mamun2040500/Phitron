#include "bits/stdc++.h"
using namespace std;
            
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, st; 
        cin >> n >> s;
        int m = n-1;
        while (m > -1)
        {
            int ts = s[m];
            int x = 0;
            int y = 0;
            if (ts == '0')
            {
                m--;
                ts = s[m];
                x = ts - '0';
                m--;
                ts = s[m];
                y = ts - '0';
                x = 10 * y + x;
            }
            else
            {
                x = ts - '0';
            }
            char ch = 'a' + x - 1;
            st = ch + st;
            m--;
        }
        cout << st << endl;
    }
    
    

    return 0;
}