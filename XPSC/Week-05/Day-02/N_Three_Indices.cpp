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
        vector<int> a(n);
        vector<int> mnl(n);
        vector<int> mnr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ans = false;
        mnr[n-1] = a[n-1];
        for (int i = n-2; i > -1; i--)
        {
            mnr[i] = min(mnr[i+1], a[i]);
        }
        
        mnl[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            mnl[i] = min(mnl[i-1], a[i]);
        }
        int x, y, z;
        for (int i = 1; i < n-1; i++)
        {
            if (mnl[i-1] < a[i] && mnr[i+1] < a[i])
            {
                ans = true;
                y = i+1;
                int j = i-1;
                while (j > -1)
                {
                    if (a[i] > a[j])
                    {
                        x = j+1;
                        break;
                    }
                    j--;
                }
                int k = i+1;
                while (k < n)
                {
                    if (a[i] > a[k])
                    {
                        z = k+1;
                        break;
                    }
                    k++;
                }
                
                break;
            }
        }
        if (!ans)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}