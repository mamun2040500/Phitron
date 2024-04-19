#include "bits/stdc++.h"
using namespace std;
            
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(k--)
    {
        int q;
        cin >> q;
        int ans = -1;
        int l = 0, r = n-1;
        
        while (l <= r)
        {
            int mid = (l+r)/2;
            if (a[mid] > q)
            {
                r = mid-1;
                ans = r;
            }
            else
            {
                l = mid+1;
                ans = mid;
            }
        }
        cout << ans+1 << endl;
    }

    return 0;
}