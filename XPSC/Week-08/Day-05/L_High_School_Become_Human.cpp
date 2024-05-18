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
        ll x, y;
        cin >> x >> y;

        if (log10(x) * y < x * log10(y)) 
        {
            cout << "<" << endl;
        }
        else if (log10(x) * y > x * log10(y)) 
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    return 0;
}