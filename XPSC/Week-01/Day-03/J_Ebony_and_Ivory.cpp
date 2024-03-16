#include<bits/stdc++.h>
using namespace std;

bool ans;
bool fun(int a, int b, int c, vector<int> & dp)
{
    
    if (c < 0)
    {
        return false;
    }
    else if (ans || c == 0)
    {
        return true;
    }
    if (dp[c] != -1)
    {
        return dp[c];
    }
    bool op1 = fun(a, b, c - a, dp);
    bool op2 = fun(a, b, c - b, dp);
    return dp[c] = op1 || op2;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> dp(c+1, -1);
    ans = false;
    ans = fun(a, b, c, dp);

    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}