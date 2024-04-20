#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    cin >> q;

    while (q--)
    {
        int x; cin >> x;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for (auto it : a)
        {
            if (it < x)
            {
                mx = max(mx , it);
            }
            if (it > x)
            {
                mn = min(mn , it);
            }
        }
        if (mx == INT_MIN)
        {
            cout << "X ";
        }
        else
        {
            cout << mx << " ";
        }
        if (mn == INT_MAX)
        {
            cout << "X" << endl;
        }
        else
        {
            cout <<  mn << endl;
        }
    }
    return 0;
}