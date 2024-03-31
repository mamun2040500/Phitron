#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        string s;
        cin >> n >> s;

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        
        long long int sm = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sm += i;
            }
            else
            {
                sm += n - i - 1;
            }
        }
        long long int l = 0, r = n - 1;
        vector<long long int> res;
        while (l < r)
        {
            if (s[l] == 'L')
            {
                sm += - l + n - l - 1;
                res.push_back(sm);
            }
            l++;
            
            if (s[r] == 'R')
            {
                sm += r - n + r + 1;
                res.push_back(sm);
            }
            r--;
        }
        
        long long int m = n - res.size();
        for (long long int it : res)
        {
            cout << it << " ";
        }
        for (long long int i = 0; i < m; i++)
        {
            cout << res[n - m - 1] << " ";
        }
        cout << endl;
        
    }
    return 0;
}