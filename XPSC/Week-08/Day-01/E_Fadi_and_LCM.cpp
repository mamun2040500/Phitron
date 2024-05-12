#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n;
        ll m = sqrt(n) + 1;
        while (m--)
        {
            ll a = m;
            ll b = n / m;
            if (a * b == n && __gcd(a, b) == 1)
            {
                cout << a << " " << b << endl;
                break;
            }
        }
    }
    return 0;
}