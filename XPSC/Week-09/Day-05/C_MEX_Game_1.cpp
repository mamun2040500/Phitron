#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a(n);
        vll b;
        set<ll> st;
        set<ll> ans;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
            mp[a[i]]++;
        }
        if (mp[0] == 0)
        {
            cout << 0 << endl;
            continue;
        }
        ll chk = -1;
        for (ll it : st)
        {
            if (it == chk + 1)
            {
                b.push_back(it);
                chk = it;
            }
            else
            {
                break;
            }
        }
        for (ll tt : st)
        {
            
            cout << tt << " ";
        }
        
        cout << endl;
        for (ll tt : st)
        {
            cout << mp[tt] << " ";
        }
        
        cout << endl;
        for (ll tt : b)
        {
            cout <<tt << " ";
        }
        ll i = 0, j = chk;
        while (i <= j)
        {
            if (mp[i] > 1)
            {
                ans.insert(j);
                mp[j]--;
                j--;
                mp[i]--;
            }
            else if (mp[i] == 1)
            {
                ans.insert(i);
                mp[i]--;
                i++;
                mp[i]--;
            }
            else
            {
                break;
            }
        }
        
        cout << endl;
        cout << i << " " << j << endl;
        for (ll tt : ans)
        {
            cout << tt << " ";
        }
        cout << endl;
        cout << endl;
    }
    return 0;
}