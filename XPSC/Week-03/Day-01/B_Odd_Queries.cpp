#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n+1);
        v[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> v[i];
            v[i] = v[i - 1] + v[i] % 2;
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int d = r - l + 1;
            d = d % 2;
            k = k % 2;
            int sum = v[n] - v[r] + v[l-1] + k * d;
            if (sum % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        } 
    }
    
    return 0;
}