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
        int cmp = 0, ans = 0;
        
        for (int i = 1; i < n + 1; i++)
        {
            cmp++;
            int val;
            cin >> val;
            if (val > cmp)
            {
                int d = val - cmp;
                ans += d;
                cmp = val;
            }
        }
        cout << ans << endl;
    }
    return 0;
}