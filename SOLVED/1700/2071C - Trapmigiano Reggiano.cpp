#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n)                            for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n)                            for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"
#define SPACE                               << " " << 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds; 
  
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<ll> adj[(ll)1e5 + 1];
vector<bool> vis((ll)1e5 + 1, 0);

void dfs(ll n)
{
    vis[n] = 1;
    for(auto x : adj[n])
    {
        if(vis[x])
            continue;
        dfs(x);
    }
    cout << n << " ";
}
void solve()
{
    ll n, e;
    cin >> n >> e >> e;
    flp(1, n)
    {
        int u, v;
        cin >> u >> v;
        if(vis[u])
        {
            vis[u] = 0;
            adj[u].clear();
        }
        if(vis[v])
        {
            vis[v] = 0;
            adj[v].clear();
        }
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(e);
    NL;
}


signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    cin >> TC ;
    while(TC--)
        solve() ;
}
