#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int total = 1LL * (n * (n + 1)) / 2;
    
    for (int i = 0; i < n - 1; i++)
    {
        long long int  val;
        cin >> val;
        total -= val;
    }
    cout << total << endl;
    
    return 0;
}