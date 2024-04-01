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
        vector<int> res;
        int arr[n][n-1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                cin >> arr[i][j];
            }
        }
        map<int, int> mp;
        int a, b;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i][0]]++;
            if (arr[i][0] == arr[0][0])
            {
                a = i;
            }
            else
            {
                b = i;
            }
        }
        if (mp[arr[0][0]] > 1)
        {
            res.push_back(arr[a][0]);
            for (int i = 0; i < n-1; i++)
            {
                res.push_back(arr[b][i]);
            }
        }
        else
        {
            res.push_back(arr[b][0]);
            for (int i = 0; i < n-1; i++)
            {
                res.push_back(arr[a][i]);
            }
        }
        
        for (int it : res)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}