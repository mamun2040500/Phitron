#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n;
        int mx = INT_MIN;
        vector<int> a(n+1);
        for (int i = 1; i < n+1; i++)
        {
            cin >> a[i];
        }
        a[0] = a[n];
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i] - a[i+1]);
        }
        for (int i = 1; i < n; i++)
        {
            mx = max(mx, a[n] - a[i]);
        }
        for (int i = 1; i < n+1; i++)
        {
            mx = max(mx, a[i] - a[1]);
        }
        cout << mx << endl;
    }
    
    return 0;
}