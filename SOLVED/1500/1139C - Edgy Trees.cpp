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


const ll N = 1e5 + 5;
ll k, ans = 0, mod = 1e9 + 7, c = 0;
vector<bool> vis(N, false);
map<ll, vector<ll>> adj;

void dfs(ll i)
{
    if(vis[i])
        return ;
    vis[i] = 1;
    c ++;
    for(auto x : adj[i])
    {
        dfs(x);
    }
}
ll mul(ll c)
{
    ll ans = 1;
    flp(0, k)
    {
        ans = (ans * c) % mod;
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n >> k;
    flp(0, n - 1)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if(z)
            continue;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    flp(1, n + 1)
    {
        if(vis[i])
            continue;
        c = 0;
        dfs(i);
        ans = (ans % mod + mul(c)) % mod;
    }
    ans = (mul(n) % mod - ans % mod) % mod;
    if(ans < 0)
        ans += 1e9 + 7;
    cout << ans << endl;
}


signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    // cin >> TC ;
    while(TC--)
        solve() ;
}
