#include<bits/stdc++.h>
using namespace std;
int fun (int num)
{
    int res = 0;
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            res++;
        }
        num /= 2;
    }
    return res;
}
int main()
{
    int n, m , k;
    cin >> n >> m >> k;
    vector<int> a(m+1);
    for (int i = 0; i < m+1; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int d = a[m] ^ a[i];
        int d1 = fun(d);
        if (d1 <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}