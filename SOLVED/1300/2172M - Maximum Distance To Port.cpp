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
 
const ll N = 2e5 + 2;

vector<bool> vis(N, 0);
vector<ll> depth(N, -1);
vector<ll> adj[N + 1];
queue<ll> qu;

void bfs(ll d)
{
	while(qu.size())
	{
		ll node = qu.front();
		qu.pop();
		if(qu.size() == 0 && node == -1)
			break;
		if(node == -1)
		{
			d ++;
			qu.push(-1);
			continue;
		}
		
		depth[node] = d;
		vis[node] = 1;
		for(auto x : adj[node])
		{
			if(!vis[x])
				qu.push(x);
			vis[x] = 1;
		}
	}
}
void solve() 
{
	ll n, m, k;
	cin >> n >> m >> k;
	vector<set<ll>> a(k + 1);

	flp(0, n)
	{
		ll x;
		cin >> x;
		a[x].insert(i + 1); 
	}
	
	flp(0, m)
	{
		ll u, v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	qu.push(1);
	qu.push(-1);
	bfs(0);
	// flp(1, n + 1)
	// 	cout << depth[i] << " ";
	flp(1, k + 1)
	{
		ll dis = 0;
		for(auto x : a[i])
			dis = max(dis, depth[x]);
		cout << dis << " ";
	}
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
