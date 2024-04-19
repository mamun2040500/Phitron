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
    }
    sort(a.begin(), a.end());
    cin >> k;
    while(k--)
    {
        int q;
        cin >> q;
        int x = upper_bound(a.begin(), a.end(), q)-a.begin();
        cout << x << endl;;
    }
    return 0;
}