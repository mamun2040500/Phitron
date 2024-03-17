#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mnod = INT_MAX;
    long long sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        sum += val;
        if (val % 2 == 1)
        {
            mnod = min(mnod, val);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - mnod << endl;
    }
    
    return 0;
}