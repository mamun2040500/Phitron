#include<bits/stdc++.h>
using namespace std;
void fun(int n, int i, vector<string>& arr, vector<vector<string>> & st)
{
    bool ans = false;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    {
                        continue;
                    }
                for (int k = 0; k < n; k++)
                {
                    if (i == k)
                    {
                        continue;
                    }
                    if (arr[i] == st[j][k])
                    {
                        ans = true;
                    }
                }
            }
            cout << ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> arr(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<vector<string>> st(n, vector<string>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                st[i][j] = arr[i] + arr[j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                st[i][j] = arr[i] + arr[j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            fun(n, i, arr, st);
        }
        cout << endl;
    }
    return 0;
}