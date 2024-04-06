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
        int a, b, d, ans = 0;
        int k = 0;
        while (pow(2, k) <= n)
        {
            k++;
        }
        k--;
        b = pow(2, k);
        a = n ^ b;
        d = abs(b - a);
        for (int i = a; i < b; i++)
        {
            int a1 = n ^ i;
            int d1 = abs(a1 - i);
            if (d1 == d && a1 <= n)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}