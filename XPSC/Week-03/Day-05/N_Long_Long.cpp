#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        bool f = true;
        cin >> n;
        long long int sum = 0, v;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            sum += abs(v);
            if (v < 0 && f)
            {
                c++;
                f = false;
            }
            
            if (v > 0)
            {
                f = true;
            }
        }
        cout << sum << " " << c << endl;
    }
    
    return 0;
}