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
        ll n, k = 0;
        cin >> n;
        ll m = n/2 - 1;
        cout << n / 2 << '\n';
        for (ll i = 0; i < m; i++)
        {
            cout << 2 << " ";
        }
        if (n % 2 == 1)
        {
            cout << 3 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
    }
    return 0;
}