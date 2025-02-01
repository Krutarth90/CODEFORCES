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

int n, m, ans = 0;
vector<bool> cat;
map<int, vector<int>> ma;

void dfs(int node, int prev, int count)
{
	int c = count;
	if(cat[node])
		c ++;
	else
		c = 0;
	if(c > m)
		return ;
	if(ma[node].size() == 1 && node > 1)
	{
		ans ++;
	}
	for(auto x : ma[node])
	{
		if(x == prev)
			continue;
		dfs(x, node, c);
	}
}

void solve()
{
    cin >> n >> m;
	cat.pb(0);
	flp(0, n)
	{
		int x;
		cin >> x;
		cat.pb(x);
	}
	flp(0, n - 1)
	{
		int x, y;
		cin >> x >> y;
		ma[x].pb(y);
		ma[y].pb(x);
	}
	dfs(1, 0, 0);
	cout << ans <<endl;
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
