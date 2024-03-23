#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (v != x)
        {
            cout << v << " ";
        }
    }
    
    return 0;
}