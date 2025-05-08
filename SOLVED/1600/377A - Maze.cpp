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
ll n, m, k;
vector<int> adj[500 * 500 + 1];
vector<int> vis(500 * 500 + 10, 0);
ll dfs(ll i, ll c)
{
    if(vis[i])
        return c;
    if(c < 1)
        return 0;
    vis[i] = -1;
    
    for(auto x : adj[i])
    {
        if(c < 1)
            return 0;
        if(!vis[x])
            c = dfs(x, c - 1);
    }
    return c;
}

void solve()
{
    ll c = 0, x = 0;
    cin >> n >> m >> k;
    vector<string> as;
    vector<int> vi(n * m, 0);
    flp(0, n)
    {
        string s;
        cin >> s;
        for(int j = 0; j < m; j ++)
        {
            c ++;
            if(s[j] != '.')
            {
                vi[c - 1] = 1;
                continue;
            }
                
            if(j && s[j - 1] == '.')
            {
                adj[c - 1].pb(c - 2);
                adj[c - 2].pb(c - 1);
            }
            if(i && as.back()[j] == '.')
            {
                adj[c - 1].pb(c - 1 - m);
                adj[c - 1 - m].pb(c - 1);
            }
            x ++;
        }
        as.pb(s);
    }  
    vis = vi;
    if(k)
    {
       flp(0, n * m)
        {
            if(vi[i])
                continue;
            vis = vi;
            ll cont = dfs(i, x - k);
            if(!cont)
                break;
        } 
        flp(0, n * m)
        {
            if(vis[i] == 1)
                cout  << "#";
            else if(vis[i])
                cout << ".";
            else
                cout << "X";
            if(((i + 1) % m) == 0)
                NL;
        }
    }
    else
    {
       flp(0, n * m)
        {
            if(vis[i] == 1)
                cout  << "#";
            else
                cout << ".";
            if(((i + 1) % m) == 0)
                NL;
        }
        return;
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
