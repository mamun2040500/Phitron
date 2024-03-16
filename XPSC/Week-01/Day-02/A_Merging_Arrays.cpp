#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int l = 0, r = 0;
    while (l < n)
    {
        while (r < m && v2[r] <= v1[l])
        {
            cout << v2[r] << " ";
            r++;
        }
        cout << v1[l] << " ";
        l++;
    }
    while (r < m)
    {
        cout << v2[r] << " ";
        r++;
    }
    
    
    return 0;
}