#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char ch;
        string s;
        cin >> n >> ch >> s;
        bool st = false;
        int ans = -1;
        int fgidx = -1;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (fgidx == -1 && s[i] == 'g')
            {
                fgidx = i;
            }
            if (s[i] == ch)
            {
                q.push(i);
            }
            if (s[i] == 'g')
            {
                while (!q.empty())
                {
                    ans = max(ans, i - q.front());
                    q.pop();
                }
            }
        }
        while (!q.empty())
        {
            ans = max(ans, n + fgidx - q.front());
            q.pop();
        }
        cout << ans <<  endl;
    }
    return 0;
}