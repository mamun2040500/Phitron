#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            string st;
            int num;
            cin >> num >> st;
            int m = a[i];
            for(char ch : st)
            {
                if (ch == 'D')
                {
                    m++;
                }
                else
                {
                    m--;
                }
                // cout << m << " ";
            }
            m = m%10;
            m = m+10;
            m = m%10;
            cout << m << " ";
        }
        cout << endl;
    }
    
    return 0;
}