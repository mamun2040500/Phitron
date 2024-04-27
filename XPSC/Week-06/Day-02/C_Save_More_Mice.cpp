#include <bits/stdc++.h>
#define ll long long int
using namespace std;
            
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll i = 0, j = k-1, ans = 0;
        while (a[j] > i && j > -1)
        {
            i += n-a[j];
            ans++;
            j--;
        }
        cout  << ans << endl;
    }
    return 0;
}