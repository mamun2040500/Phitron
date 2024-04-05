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
        int xr = 0;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            xr = xr ^ v;
        }
        
        if (n % 2 == 0 && xr != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << xr << endl;
        }
    }
    return 0;
}