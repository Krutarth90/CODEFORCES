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

ll mod(ll x)
{
    return x % ((ll)1e9 + 7);
}
ll n;
vector<ll> a(2e5 + 5);
vector<bool> vis(2e5 + 5);
vector<ll> adj[(ll)2e5 + 5];

void dfs(ll node, bool parity, ll os, ll es, ll mo, ll me)
{
    
    if(vis[node])
        return;
    vis[node] = 1;
    
    
    if(parity)
    {
        es += a[node];
        os -= a[node];
        me = min(es, me);
        mo = min(os, mo); 
        a[node] = max(a[node], es - me);
    }
    else
    {
        os += a[node];
        es -= a[node];
        mo = min(os, mo);
        me = min(es, me);  
        a[node] = max(a[node], os - mo);
    }
    
    for(auto x : adj[node])
    {
        if(vis[x])
            continue;
        dfs(x, !parity, os, es, mo, me);
    }
}

void solve()
{
    cin >> n;
    flp(0, n)
    {   
        cin >> a[i];
        vis[i] = 0;
        adj[i].clear();
    }
    flp(0, n - 1)
    {
        ll u, v;
        cin >> u >> v;
        u --;
        v --;
        adj[v].pb(u);
        adj[u].pb(v);
    }  
    dfs(0, 1, 0, 0, 0, 0);
    flp(0, n)
        cout << a[i] << " ";
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
