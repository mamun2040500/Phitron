#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "=" << endl;
            continue;
        }
        else
        {
            int c1 = a.size();
            int c2 = b.size();
            int d1, d2;
            if (a[c1-1] == 'M')
            {
                d1 = 0;
            }
            else if (a[c1-1] == 'S')
            {
                d1 = -c1;
            }
            else
            {
                d1 = c1;
            }

            if (b[c2-1] == 'M')
            {
                d2 = 0;
            }
            else if (b[c2-1] == 'S')
            {
                d2 = -c2;
            }
            else
            {
                d2 = c2;
            }
            if (d1 > d2)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
        
    }
    
    return 0;
}