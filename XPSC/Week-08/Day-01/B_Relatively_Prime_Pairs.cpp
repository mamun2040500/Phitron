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
        ll l, r;
        cin >> l >> r;
        ll m = r - l + 1;
        cout << "YES" << endl;
        while (l < r)
        {
            cout << l << " " << l+1 << endl;
            l += 2;
        }
    }
    return 0;
}