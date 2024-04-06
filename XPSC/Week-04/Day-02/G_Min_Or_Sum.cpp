#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n, ans = 0;
        cin >> n;
        vector<long long int> a(n);
        
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = ans | a[i];
        }
        cout << ans << endl;
    }
    return 0;
}