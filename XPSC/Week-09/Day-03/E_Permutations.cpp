#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;
int main()
{
    ll t = 1; 
    // cin >> t;
    while (t--)
    {
        ll n ;
        cin >> n ;
        if (n < 4 && n != 1)
        {
            cout << "NO SOLUTION" << endl;
            continue;
        }
        
        for (ll i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}