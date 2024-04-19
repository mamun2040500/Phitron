#include "bits/stdc++.h"
using namespace std;
            
int main()
{
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> k;
    while(k--)
    {
        int l, r, ans = 0, x, y;
        cin >> l >> r;
        x = lower_bound(a.begin(), a.end(), l)-a.begin();
        y = upper_bound(a.begin(), a.end(), r)-a.begin();
        cout << y-x << " ";
        // cout << x << " " << y << endl;
    }

    return 0;
}