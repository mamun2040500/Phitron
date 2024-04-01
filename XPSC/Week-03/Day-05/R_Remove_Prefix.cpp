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
        set <int> st;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = n-1; i >= 0; i--)
        {
            int a = st.size();
            st.insert(ar[i]);
            int b = st.size();
            if (a == b)
            {
                break;
            }
        }
        cout << n - st.size() << endl;
    }
    
    return 0;
}