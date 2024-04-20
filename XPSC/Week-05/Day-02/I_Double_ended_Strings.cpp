#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long int n1, n2, m = 0, ans = 0;
        string a, b, s1, s2, s;
        cin >> a >> b;
        n1 = a.size();
        n2 = b.size();

        for (int i = 0; i < n2; i++)
        {
            for (int j = i; j < n2; j++)
            {
                s = b.substr(i,n2-j);
                if (a.find(s) < a.size())
                {
                    if (s.size() > m)
                    {
                        m = s.size();
                    }
                }
            }
        }
        cout << n1 + n2 - m * 2 << endl;
    }
    return 0;
}