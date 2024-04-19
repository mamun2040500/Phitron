#include "bits/stdc++.h"
using namespace std;
            
int main()
{
    int t ; cin >> t;
    while (t--)
    {
        int n, k, s = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            a[i] = s;
        }
        while(k--)
        {
            int q;
            cin >> q;
            int x = lower_bound(a.begin(), a.end(), q)-a.begin();
            if (x+1 > n)
            {
                cout << -1 << endl;;
            }
            else
            {
                cout << x+1 << endl;;
            }
        }
    }
    return 0;
}