#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
   
    while (t--)
    {
        int n;
        map<int , int> mp;
        cin >> n;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            mp[v]++;
            if (mp[v] > mx)
            {
                mx = mp[v];
            }
        }
        int diff = n - mx;
        int tk = mx;
        int stp = 0;
        while (tk < n)
        {
            tk *= 2;
            stp++;
        }
        
        cout << stp + diff << endl;
    }
    
    return 0;
}