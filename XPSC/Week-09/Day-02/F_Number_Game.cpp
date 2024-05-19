#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k = 0;
        cin >> n;
        vll a(n);
        ll c1 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
              c1++;
            }
        }
        sort(a.begin(), a.end());
        k = min(c1, (n + 1) / 2);
        while (k > 0)
        {
            bool ok = false;
            for (ll i = 0; i < k; i++)
            {
                if (a[i + k-1] <= i+1)
                {
                    ok = true;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                break;
            }
            k--;
        }
        
        cout << k << endl;
    }
    return 0;
}