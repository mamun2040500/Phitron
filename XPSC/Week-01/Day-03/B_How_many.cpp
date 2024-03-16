#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, s, t, ans = 0;
    cin >> s >> t;
    for (int i = 0; i < s+1; i++)
    {
        for (int j = 0; j < s+1; j++)
        {
            if (i + j > s)
            {
                continue;
            }
            for (int k = 0; k < s+1; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                {
                    ans++;
                }
            }
        }
    }
    
    cout << ans << "\n";
    return 0;
}