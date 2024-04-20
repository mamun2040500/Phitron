#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long int n, c, ans = 0;
        cin >> n >> c;
        vector<long long int> a(n);
        multiset<long long int> st;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i] + i + 1);
        }
        for (long long int it : st)
        {
            c -= it;
            if (c < 0)
            {
                break;
            }
            else
            {
                ans++;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}