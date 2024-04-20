#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long int a, b, n, sum, v; 
        cin >> a >> b >> n;
        sum = b;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            sum += min(a-1, v);
        }
        
        cout << sum << endl;
    }
    
    return 0;
}