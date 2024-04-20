#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    while (t)
    {
        int n, q;
        cin >> n >> q;
        if(n == 0 && q == 0) break;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << "CASE# " << t << ":" << endl;
        while (q--)
        {
            int x; cin >> x;
            if (find(a.begin(), a.end(), x) != a.end())
            {
                cout << x << " found at " << find(a.begin(), a.end(), x) - a.begin() + 1 << endl;
            }
            else
            {
                cout << x << " not found" << endl;
            }
        }
        t++;
    }
    return 0;
}