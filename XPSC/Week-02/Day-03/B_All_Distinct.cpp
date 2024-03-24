#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
   
    while (t--)
    {
        int n; cin >> n;
        multiset<int> s;
        set<int> ss;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
            ss.insert(val);
        }

        if ((s.size() - ss.size()) % 2 == 1)
        {
            cout << ss.size() -1 << endl;
        }
        else
        {
            cout << ss.size() << endl;
        }
    }
    
    return 0;
}