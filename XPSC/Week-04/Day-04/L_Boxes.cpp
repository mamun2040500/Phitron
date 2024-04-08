#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        sort(a.rbegin(), a.rend());
        
        long long int ans = 1;
        long long int d = a[0];
        
        for (int i = 1; i < n; i++)
        {
            if (d < a[i])
            {
                ans++;
                d = a[i];
            }
            else
            {
                d = d ^ a[i];
            }
            
        }
        
        cout << ans << endl;
    }
    return 0;
}