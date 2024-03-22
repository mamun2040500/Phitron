#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, ans = INT_MAX, l = 0, i;
    long long int s, sum = 0;
    cin >> n >> s;
    vector<long long int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        while (sum >= s)
        {
            ans = min(ans, i - l + 1);
            sum -= v[l];
            l++;
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    
    return 0;
}