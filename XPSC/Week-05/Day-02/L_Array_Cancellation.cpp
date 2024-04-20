#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            if (sum + v < 0)
            {
                sum = 0;
            }
            else
            {
                sum += v;
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}