#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mlstll multiset<ll>
#define stll set<ll>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d = 2;
        cin >> n;
        
        for (ll i = 1; i < n+1; i++)
        {
            cout << i * d << " ";
        }
        cout << endl;
    }
    return 0;
}