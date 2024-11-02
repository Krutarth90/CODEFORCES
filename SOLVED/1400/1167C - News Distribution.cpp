#include <bits/stdc++.h>
using namespace std;
#define int                                 long long
#define flp(k,n)                            for(int i=(int)k;i<(int)n;i++)
#define flm(k,n)                            for(int j=(int)n-1;j>=(int)k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"
 
vector<int> adj[5 * (int)1e5 + 1], vis(5 * (int)1e5 + 1, -1);


void dfs(int n, set<int>& se)
{
    vis[n] = 1;
    se.insert(n);
    for(int per : adj[n])
    {
        if(vis[per] == -1)
            dfs(per, se);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    flp(1, m + 1)
    {
        int t, prev;
        cin >> t;
        for(int j = 0; j < t; j ++)
        {
            int x;
            cin >> x;
            if(j)
            {
                adj[prev].pb(x);
                adj[x].pb(prev) ;
            }
            prev = x;
        }
    }
    vector<int> dp(n + 1, -1);
    flp(1, n + 1)
    {
        if(vis[i] != -1)
        {
            cout << dp[i] << " ";
            continue;
        }
        set<int> se;
        dfs(i, se);
        for(int x : se)
            dp[x] = se.size();
        cout << dp[i] << " ";
    }
}

 
signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    //cin >> TC ;
    while(TC--)
        solve() ;
}
