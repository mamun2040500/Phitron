#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b;
        bool ans = false;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int d = a[i] & k;

            if (d == k)
            {
                b.push_back(a[i]);
            }
            if (a[i] == k)
            {
                ans = true;
            }
        }
        if (b.size() > 1)
        {
            int c = b[0];
            for (int i = 1; i < b.size(); i++)
            {
                c = c & b[i];
            }
            if (c == k)
            {
                ans = true;
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
    return 0;
}