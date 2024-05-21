#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;
int main()
{
    ll t = 1; 
    // cin >> t;
    while (t--)
    {
        string s, s1, s2, s3 ;
        cin >> s;
        ll n = s.size();
        ll n1 = 0;
        vector<ll> a(26, 0);
        char md = '0';
        for (char ch : s)
        {
            a[ch - 'A']++;
        }
        for (ll it : a)
        {
            if (it % 2 == 1)
            {
                n1++;
                md = 'A' + it;
            }
        }
        
        if (n1 > 1)
        {
            cout << "NO SOLUTION" << endl;
            continue;
        }
        for (ll i = 0; i < 26; i++)
        {
            if (a[i] % 2 == 1)
            {
                s3 = i + 'A';
            }
            
            a[i] /= 2;
            while (a[i]--)
            {
                s1 += i + 'A';
            }
        }
        s2 = s1;
        reverse(s1.begin(), s1.end());
        cout << s1 + s3 + s2 << endl;
    }
    return 0;
}