#include<bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> &v)
{
    int n = v.size();
    int m1 = -1, m2 = -1, m3 = -1;
    vector<int> res(3, -1);
    for (int i = 0; i < n; i++)
    {
        if (v[i] > m1)
        {
            m3 = m2;
            m2 = m1;
            m1 = v[i];
            res[2] = res[1];
            res[1] = res[0];
            res[0] = i;
        }
        else if (v[i] > m2)
        {
            m3 = m2;
            m2 = v[i];
            res[2] = res[1];
            res[1] = i;
        }
        else if (v[i] > m3)
        {
            m3 = v[i];
            res[2] = i;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        vector<int> ia, ib, ic;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        ia = fun(a);
        ib = fun(b);
        ic = fun(c);
        int ans = 0;
        for (int i1 : ia)
        {
            for (int i2 : ib)
            {
                for (int i3 : ic)
                {
                    if (i1 == i2 || i2 == i3 || i3 == i1)
                    {
                        continue;
                    }
                    ans = max(ans, a[i1] + b[i2] + c[i3]);
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}