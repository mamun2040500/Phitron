#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long int n, mx = 0; 
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx , a[i]);
        }
        sort(a.begin(), a.end());
        if (mx == 0 || n == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
        // else
        // {
        //     for (int i = 2; i < n; i++)
        //     {
        //         fun();
        //     }
        // }
    }
    return 0;
}