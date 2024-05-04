#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mlstll multiset<ll>
#define stll set<ll>
using namespace std;

int main()
{
    ll n;
    cin >> n;
        
    for (ll i = 0; i < n; i++)
    {
        if (i % 4 < 2)
        {
            cout << 'a';
        }
        else
        {
            cout << 'b';
        }
    }
    cout << endl;
    
    return 0;
}