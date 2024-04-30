#include <bits/stdc++.h>
#define ll long long int
using namespace std;
            
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k, a, b;
        cin >> n >> k;
        a = k / (n-1);
        b = k % (n-1);
        if (b == 0)
        {
            cout  << a * n - 1 << endl;
        }
        else
        {
            cout  << a * n + b << endl;
        }
        
        
    }
    return 0;
}