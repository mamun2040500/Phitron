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
        bool ans = false;
        int l = 0, r = n-1;
        
        while (l <= r)
        {
            int mid = (l+r)/2;
            if (a[mid] == q)
            {
                ans = true;
                break;
            }
            else if (q < a[mid])
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}