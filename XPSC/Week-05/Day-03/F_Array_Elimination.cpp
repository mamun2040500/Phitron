#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t; cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        vector<long long int> b;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (long long int i = 1; i <= 32; i++)
        {
            long long int m = 0;
            for (long long int j = 0; j < n; j++)
            {
                if ((1 << i) & a[j])
                {
                    m++;
                }
            }
            b.push_back(m);
        }
        for (long long int i = 1; i < n+1; i++)
        {
            bool ans = true;
            for (long long int j = 0; j < 32; j++)
            {
                if (b[j] % i != 0)
                {
                    ans = false;
                    break;
                }
            }
            if (ans)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}