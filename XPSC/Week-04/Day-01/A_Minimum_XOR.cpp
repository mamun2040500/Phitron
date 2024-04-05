#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int xr = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            xr = a[i] ^ xr;
        }
        int xr1 = xr;
        for (int i = 0; i < n; i++)
        {
            xr1 = min(xr1, a[i] ^ xr);
        }
        cout << xr1 << endl;
    }
    return 0;
}