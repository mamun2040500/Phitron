#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        int a = 0, b = n;
        int mn = INT_MAX;
        int k = 0;
        while (pow(2, k) <= n)
        {
            k++;
        }
        k--;
        b = pow(2, k);
        a = n ^ b;
        
        cout << a << " " << b << endl;
    }
    return 0;
}