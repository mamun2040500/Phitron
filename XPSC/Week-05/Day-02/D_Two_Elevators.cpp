#include "bits/stdc++.h"
using namespace std;
            
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        
        cin >> a >> b >> c;
        a--;
        d = abs(b - c) + abs(c-1);
        if (a < d)
        {
            cout << 1 << endl;
        }
        else if (a > d)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}