#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<int> ms;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long int v;
            cin >> v;
            ms.insert(v);
            if (v == 0 && !ms.empty())
            {
                int k = *ms.rbegin();
                ans += k;
                ms.erase(prev(ms.end()));
            }
        }
        
        cout << ans << endl;
        
    }
    return 0;
}