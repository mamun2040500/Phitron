#include <bits/stdc++.h>
#define ll long long int
using namespace std;
            
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll sum = 0, h = 0, i = 0;
        while (i < n)
        {
            if (x - (a[i] - h) * i >= 0)
            {
                
                x = x - (a[i] - h) * i;
                h = a[i];
            }
            else
            {
                break;
            }
            i++;
        }
        cout  << h + x / i * 1 << endl;
    }
    return 0;
}