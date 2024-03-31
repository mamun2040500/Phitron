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
        map <string, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mp[arr[i] + arr[j]]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] > 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
        
    }
    
    return 0;
}