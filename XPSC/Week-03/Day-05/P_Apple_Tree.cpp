#include<bits/stdc++.h>
using namespace std;
long long int c1, c2;
long long int dfs(vector<long long int> ad[], long long int s, vector<bool> & vis, vector<long long int> & cnt)
{
    if ( ad[s].size() == 0)
    {
        cnt[s] = 1;
        return cnt[s];
    }
    long long int c = 0;
    for (long long int  it : ad[s])
    {
        if (!vis[it])
        {
            vis[it] = true;
            c += dfs(ad, it, vis, cnt);
        }
    }
    cnt[s] = c;
    return c;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> adj[n + 1];
        vector<long long int> ad2[n + 1];
        vector<bool> vis(n + 1, false);
        vector<bool> vis2(n + 1, false);
        vector<long long int> cnt(n + 1, 0);
        for (long long int i = 1; i < n; i++)
        {
            long long int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        long long int s = 1;
        vis[s] = true;
        
        
        
        queue<long long int> q;
        q.push(s);
        vis[s] = true;
        while (!q.empty())
        {
            long long int pr = q.front();
            q.pop();
            for (long long int  it : adj[pr])
            {
                if (!vis[it])
                {
                    q.push(it);
                    vis[it] = true;
                    ad2[pr].push_back(it);
                }
            }
        }
dfs(ad2, s, vis2, cnt);

long long int k; cin >> k;
        while (k--)
        {
            long long int x, y; cin >> x >> y;
            cout << cnt[x] * cnt[y] << endl;
        }
    }
    
    return 0;
}