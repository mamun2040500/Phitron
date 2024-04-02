#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        
        long long int sm = 0;
        vector<long long int> res;
        for (int i = 0; i < n; i++)
        {
            long long int d;
            if (s[i] == 'L')
            {
                d = i;
            }
            else
            {
                d = n - i - 1;
            }
            sm += d;
            res.push_back(n-1 - 2 * d);
        }
        sort(res.begin(), res.end());
        reverse(res.begin(), res.end());
        for (int it : res)
        {
            if (it > 0)
            {
                sm += it;
            }
            cout << sm << " ";
        }
        cout << endl;
        
    }
    return 0;
}