#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n) for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n) for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout<<"\n"
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


void solve()
{
    ll n, ans = 0;
	cin >> n;
	map<ll, vector<ll>> ma;
	vector<vector<ll>> dp(n + 1, vector<ll>(2));
	dp[0][0] = dp[0][1] = 0;
	flp(0, n)
	{
		ll x;
		cin >> x;
		dp[i + 1][0] = max(dp[i][1], dp[i][0]);
		ma[x].pb(i + 1);
		if(ma[x].size() >= x)
		{
			ll targetIndex = ma[x][ma[x].size() - x];
			dp[i + 1][1] = dp[targetIndex][0] + x;
		}
		else
		{
			dp[i + 1][1] = -1;
		}

		ans = max(dp[i + 1][0], dp[i + 1][1]);
	}
	cout << ans << endl;
}

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC = 1;
    cin >> TC;
    while(TC--)
        solve();
}
