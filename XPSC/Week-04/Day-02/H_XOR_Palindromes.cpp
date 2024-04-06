#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "test case: " << i+1 << endl;
        int n;
        string s;
        cin >> n >> s;

        int eq = 0;
        int neq = 0;
        int sl = 0;
        int sr = n-1;
        
        while (sl < sr)
        {
            if (s[sl] == s[sr])
            {
                eq++;
            }
            else
            {
                neq++;
            }
            sl++;
            sr--;
        }
        vector<int> indx;
        for (int i = 0; i < eq + 1; i++)
        {
            indx.push_back(neq + i*2);
            if (n%2 == 1)
            {
                indx.push_back(neq + i*2 +1);
            }
        }
        
        string t(n+1, '0');

        for (int it : indx)
        {
            t[it] = '1';
        }

        cout << t << endl;
    }
}