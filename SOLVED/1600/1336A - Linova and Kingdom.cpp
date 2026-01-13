#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k, n) for(ll i = (ll) k; i < (ll) n; i ++)
#define flm(k, n) for(ll j = (ll) n - 1; j >= (ll) k; j --)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout << "\n"
#define SPACE << " " <<
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
ll mod(ll x)
{
    return x % (998244353);
}
 

vector<ll> adj[(ll)2e5 + 5];
vector<bool> vis((ll)2e5 + 5, 0);
vector<ll> vals((ll)2e5 + 5);

ll dfs(ll node, ll depth)
{
    ll child = 0;
    vis[node] = 1;
    for(auto x : adj[node])
    {
        if(vis[x])
            continue;
        child += dfs(x, depth + 1);
    }
    vals[node] = depth - child;
    return child + 1;
}


void solve() 
{
    ll n, k;
    cin >> n >> k;
    flp(0, n - 1)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    
    dfs(1, 0);
    sort(vals.begin() + 1, vals.begin() + n + 1, greater<int>());

    ll ans = 0;
    flp(1, n + 1)
    {
        if(!k)
            break;
        ans += vals[i];
        k --;
    }
    cout << ans << endl;
}

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC = 1;
    // cin >> TC;
    while(TC--)
        solve();
}
