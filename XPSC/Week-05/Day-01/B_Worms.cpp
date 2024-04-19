#include "bits/stdc++.h"
using namespace std;
            
int main()
{
    int n, k, s = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
        a[i] = s;
    }
    cin >> k;
    while(k--)
    {
        int q;
        cin >> q;
        int x = lower_bound(a.begin(), a.end(), q)-a.begin() + 1;
        cout << x << endl;;
    }
    return 0;
}