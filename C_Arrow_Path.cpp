#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1;
        string s2;
        cin >> n >> s1 >> s2;
        bool ans = true;
        for (int i = 0; i < n-1; i++)
        {
            if (s1[i] != '>' && s2[i] != '>')
            {
                ans = false;
            }
        }
        if (s2[n-1] ==  '<' && s2[n-2] ==  '<')
        {
            ans = false;
        }
        
        if (ans)
        {
            cout << "YES" << endl;
        } 
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}