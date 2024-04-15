#include<bits/stdc++.h>
using namespace std;
vector<int> pal;   
void is_pal()
{
    for (long long int i = 0; i < 32768; i++)
    {
        string s1 = to_string(i);
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        if (s1 == s2)
        {
            pal.push_back(i);
        }
    }
}
void fun()
{
    long long int n;
    cin >> n;
    vector<int> a(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    long long int ans = 0;
    for (auto it1 : a)
    {
        mp[it1]++;
        for (auto it2 : pal)
        {
            ans += mp[it1 ^ it2];
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    is_pal();
    long long int t;
    cin >> t;
    while(t--)
    {
        fun();
    }
    return 0;
}