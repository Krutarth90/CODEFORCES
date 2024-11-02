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
    int n;
    cin >> n;
    int ans = n;
    for(int i = 2; i <= n; i *= 2)
    {
        ans += (n / i);
    }
    cout << ans << endl;
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
