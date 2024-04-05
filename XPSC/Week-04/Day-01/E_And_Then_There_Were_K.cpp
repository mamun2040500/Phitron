#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n;
        k = 0;
        while (pow(2, k) <= n)
        {
            k++;
        }
        k--;
        k = pow(2, k) - 1;
        cout << k << endl;
    }
    return 0;
}