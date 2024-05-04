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
        ll n, n0 = 0, n1 = 0;
        string s;
        cin >> n >> s;
        
        for (char it : s)
        {
            if (it == '0')
            {
                n0++;
            }
            else
            {
                n1++;
            }
        }
        ll d = min(n0, n1) % 2;
        if (d == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }
    
    return 0;
}