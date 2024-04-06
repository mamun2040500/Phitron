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
        vector<long long int> c;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long int k = 0;
        long long int ans = 0;
        c.push_back(0);
        long long int i = 0;
        while (i < n)
        {
            long long int kv = pow(2, k);
            if(a[i] < kv)
            {
                c[k]++;
                i++;
            }
            else
            {
                k++;
                c.push_back(0);
            }
        }
        for (long long int it : c)
        {
            ans += (it * (it - 1)) / 2;
        }
        
        cout << ans << endl;
    }
    return 0;
}