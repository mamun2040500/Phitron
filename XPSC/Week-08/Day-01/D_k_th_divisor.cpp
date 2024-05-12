#include<bits/stdc++.h>
#define vi vector<int>
#define vll vector<ll>
#define ll long long int
#define pii pair<int, int>
using namespace std;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll m = sqrt(n);
        set<ll> st;
        for (ll i = 1; i < m + 1; i++)
        {
            if (n % i == 0)
            {
                st.insert(i);
                st.insert(n / i);
            }
        }
        ll sz = st.size();
        if (sz < k) 
        {
            cout << -1 << endl;
        }
        else
        {
            auto it = st.begin();
            advance(it, k - 1);
            cout << *it << endl;
        }
    }
    return 0;
}