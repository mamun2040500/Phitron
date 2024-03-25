#include<bits/stdc++.h>
using namespace std;
bool ans;
void fun(int x, vector<int> &a)
{
    vector<int> b;
    vector<int> c;
    for (int i : a)
    {
        if (i != x)
        {
            b.push_back(i);
            c.push_back(i);
        }
    }
    reverse(b.begin(), b.end());

    if (b == c)
    {
        ans = true;
    }
}
int main()
{
    int t; cin >> t;
   
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ans = true;
        for (int i = 0, j = n-1; i < j; i++, j--)
        {
            int x = a[i];
            int y = a[j];
            if (x != y)
            {
                ans = false;
                fun(x, a);
                if (!ans)
                {
                    fun(y, a);
                }
                break;
            }
        }

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        } 
    }
    return 0;
}