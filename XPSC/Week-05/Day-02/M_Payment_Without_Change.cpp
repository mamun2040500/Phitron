#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, s, x , y;
        cin >> a >> b >> n >> s;
        x = s / n;
        if (x <= a && s % n <= b)
        {
            cout << "YES" << endl;
        }
        else if (x > a && s - a * n <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}