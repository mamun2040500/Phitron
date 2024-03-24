#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
   
    while (t--)
    {
        int n, a = 0, b = 0;
        string s;
        cin >> n >> s;
        
        for (char it : s)
        {
            if (it == '(')
            {
                a++;
            }
            else
            {
                if (a > 0)
                {
                    a--;
                }
                else
                {
                    b++;
                }
            }
            
        }
        cout << b << endl;
    }
    
    return 0;
}