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

const int N = 1e5 + 5;
int  ans = 0;
vector<int> adj[N];
vector<bool> vis(N, 0);
ll dfs(int i)
{
    vis[i] = 1;
    if(adj[i].size() == 1 && vis[adj[i][0]])
        return 1;
    ll ex = 1;
    for(auto x : adj[i])
    {
        if(vis[x])
            continue;
        int c = dfs(x);
        if(c % 2 == 0)
        {
            ans ++;
        }
        else 
        {
            ex += c;
        }
    }
    return ex;
}
void solve()
{
    ll n;
    cin >> n;
    flp(1, n)
    {
        ll x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    if(n % 2)
    {
        cout << -1 << endl;
        return; 
    }   
    dfs(1);
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
