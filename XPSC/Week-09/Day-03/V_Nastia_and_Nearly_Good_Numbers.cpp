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
        ll a, b, x, y, z;
        cin >> a >> b;
        
        if (b == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
            cout << a << " "  << a * b << " " << a * (b + 1) << endl;
        }
    }
    return 0;
}