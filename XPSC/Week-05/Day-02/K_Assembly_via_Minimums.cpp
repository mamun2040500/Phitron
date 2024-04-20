#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = n ;
        int k = (n * (n-1)) / 2 ;
        vector <int > a(k);
        int mx = INT_MIN;
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        
        sort(a.begin(), a.end());

        a.push_back(mx);

        int id  = 0;
            while (m--)
            {
                cout << a[id] << " ";
                id += m;
            }
            
        cout << endl;
    }
    return 0;
}