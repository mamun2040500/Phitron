#include<bits/stdc++.h>
using namespace std;
int ans;
void knap(vector<int> & a, int n, int m, int l, int r, int x, int sum, int mn, int mx)
{
    if (n == 0 && m > 1 && sum >= l && sum <= r && mx-mn >= x)
    {
        ans++;
    }
    if (n == 0)
    {
        return;
    }
    int mn1 = min(mn, a[n-1]);
    int mx1 = max(mx, a[n-1]);
    knap(a, n-1, m+1, l, r, x, sum + a[n-1], mn1 ,mx1);
    knap(a, n-1, m, l, r, x, sum, mn ,mx);
}
int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ans = 0;
    knap(a, n, 0, l, r, x, 0, INT_MAX/3 ,INT_MIN/3);
    cout << ans << "\n";
    return 0;
}