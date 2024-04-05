#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n+1,0);
        vector<int> sm(n+1,0);
        int ans = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
            a[i] %= 2;
            sm[i] = sm[i-1] + a[i];
        }
        for (int i = k; i < n + 1; i++)
        {
            if (sm[i] - sm[i-k] > 0)
            {
                ans++;
            } 
        }
        cout << ans << endl;
        
    }
    return 0;
}