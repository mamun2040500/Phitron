#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        long long int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                cnt++;
                if (cnt >= k)
                {
                    ans += cnt - k + 1;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}