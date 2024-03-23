#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, s, x, y, z, c = 0;
    cin >> k >> s;
        for (int i = 0; i < k+1; i++)
        {
            for (int j = 0; j < k+1; j++)
            {
                int d = s - i - j;
                if (d <= k && d >= 0)
                {
                    c++;
                }
            }
        }
    cout << c << endl;

    return 0;
}