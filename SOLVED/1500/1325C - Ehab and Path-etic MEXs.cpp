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



void solve()
{
    ll n, c = 0, nc = 0;
    cin >> n;
    vector<ll> ans(n - 1, -1);
    map<ll, set<ll>> adj;
    flp(0, n - 1)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].insert(i);
        adj[v].insert(i);
        if(adj[u].size() == 3 && !nc)
        {
            for(auto x : adj[u])
            {
                ans[x] = c;
                c ++;
            }
            nc = 3;
        }
        if(adj[v].size() == 3 && !nc)
        {
            for(auto x : adj[v])
            {
                ans[x] = c;
                c ++;
            }
            nc = 3;
        }
    }
    flp(0, n - 1)
    {
        if(ans[i] != -1)
            cout << ans[i] << endl;
        else
        {
            cout << nc << endl;
            nc ++;
        }
    }
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
