#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n, v, n0 = 0, n1 = 0;
        string s;
        cin >> s;
        n = s.size();
        for (auto it : s)
        {
            if (it == '0')
            {
                n0++;
            }
            if (it == '1')
            {
                n1++;
            }
        }
        for (auto it : s)
        {
            if (n0 == 0 && it == '1')
            {
                break;
            }
            if (n1 == 0 && it == '0')
            {
                break;
            }
            if (it == '0')
            {
                n1--;
            }
            if (it == '1')
            {
                n0--;
            }
        }
        
        cout << n0 + n1 << endl;
    }
    return 0;
}