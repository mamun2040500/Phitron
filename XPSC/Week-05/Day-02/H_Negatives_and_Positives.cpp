#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t; cin >> t;
    while (t--)
    {
        long long int n; 
        cin >> n;
        
        vector<long long int>a(n);
        long long int sum = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        for (long long int i = 0; i < n-1; i+=2)
        {
            if (a[i+1] < 0)
            {
                sum = sum - 2 * a[i];
                sum = sum - 2 * a[i+1];
            }
            else if (a[i+1] < -a[i])
            {
                sum = sum - 2 * a[i];
                sum = sum - 2 * a[i+1];
            }
        }
        
        cout << sum << endl;
        
    }
    
    return 0;
}