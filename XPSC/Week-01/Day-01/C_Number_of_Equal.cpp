#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long ans = 0;
    
    int l = 0, r = 0;
    
    while (l < n && r < m)
    {
        long long c1 = 0;
        long long c2 = 0;
        long long cur = a[l];
        while (l < n && a[l] == cur)
        {
            l++;
            c1++;
        }
        while (r < m && b[r] < cur)
        {
            r++;
        }
        while (r < m && b[r] == cur)
        {
            r++;
            c2++;
        }
        ans += c1 * c2;
    }
    
    cout << ans << endl;
    return 0;
}