#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n+2][m+2];
        memset(arr, 0, sizeof(arr));
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                cin >> arr[i][j];
            }
        }
        
        int mx = -1;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                int sum = arr[i][j];
                int i1, j1;
                i1 = i - 1;
                j1 = j - 1;
                while (i1 > 0 && j1 > 0 && i1 < n + 1 && j1 < m + 1)
                {
                    sum += arr[i1][j1];
                    i1--;
                    j1--;
                }
                i1 = i + 1;
                j1 = j + 1;
                while (i1 > 0 && j1 > 0 && i1 < n + 1 && j1 < m + 1)
                {
                    sum += arr[i1][j1];
                    i1++;
                    j1++;
                }
                i1 = i - 1;
                j1 = j + 1;
                while (i1 > 0 && j1 > 0 && i1 < n + 1 && j1 < m + 1)
                {
                    sum += arr[i1][j1];
                    i1--;
                    j1++;
                }
                i1 = i + 1;
                j1 = j - 1;
                while (i1 > 0 && j1 > 0 && i1 < n + 1 && j1 < m + 1)
                {
                    sum += arr[i1][j1];
                    i1++;
                    j1--;
                }
                mx = max(sum, mx);
            }
        }
        
        cout << mx << endl;
    }
    
    return 0;
}