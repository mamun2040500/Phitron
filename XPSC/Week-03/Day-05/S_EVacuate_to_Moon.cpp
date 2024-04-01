#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, h, sum = 0;
        cin >> n >> m >> h;
        multiset <long long int> ce;
        multiset <long long int> po;
        
        for (long long int i = 0; i < n; i++)
        {
            long long int v;
            cin >> v;
            ce.insert(v);
        }
        
        for (long long int i = 0; i < m; i++)
        {
            long long int v;
            cin >> v;
            po.insert(v);
        }
        while (!ce.empty() && !po.empty())
        {
            sum += min(*ce.rbegin(), *po.rbegin() * h);
            ce.erase(prev(ce.end()));
            po.erase(prev(po.end()));
        }
        
        cout << sum << endl;
    }
    
    return 0;
}