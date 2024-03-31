#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string st[n][n];
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
            bool ans = false;
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i == j || i == k)
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
        cout << endl;
        
    }
    
    return 0;
}