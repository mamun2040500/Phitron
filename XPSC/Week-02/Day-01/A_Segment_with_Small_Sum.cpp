#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0, l = 0;
    long long int s, sum = 0;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (sum <= s)
        {
            ans = max(ans, i - l + 1);
        }
        else
        {
            while (sum > s)
            {
                sum -= v[l];
                l++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}