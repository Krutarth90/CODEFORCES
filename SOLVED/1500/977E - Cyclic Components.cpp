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
#define SPACE                               << " " << 

vector<int> adj [2 * (int)1e5 + 1];
vector<bool> vis(2 * (int)1e5 + 1, 0);

bool dfs(int root, int node, int prev)
{
	if(vis[node] == true && node == root)
		return true;
	vis[node] = true;
	
	if(adj[node].size() != 2)
		return false;
	bool ans = 1;
	if(node == root)
		return dfs(root, adj[node].back(), node);
	
	for(auto x : adj[node])
	{
		if(x == prev)
			continue;	
		ans = ans && dfs(root, x, node);
		if(!ans)
			return false;
	}
	return true;
}

void solve()
{
    int n, m, ans = 0;
	cin >> n >> m;
	while(m --)
	{
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	
	flp(1, n + 1)
	{
		if(vis[i])
			continue;
		ans = ans + dfs(i, i, i);
	}


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
