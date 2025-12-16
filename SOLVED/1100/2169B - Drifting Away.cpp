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
 


void solve() 
{
	bool f = 0;
	string s;
	cin >> s;
	ll n = s.size();
	if(n == 1)
	{
		cout << 1 << endl;
		return;
	}
	flp(0, n)
	{
		if(s[i] == '*' || s[i] == '>' && !f)
		{
			for(ll j = i + 1; j < n; j ++)
			{
				if(s[j] == '*' || s[j] == '<')
				{
					cout << -1 << endl;
					return;
				}
			}
			f = 1;
		}
	}
	f = 1;
	ll ans = 0;
	flp(0, n)
	{
		if(s[i] == '<')
		{
			ans ++;
			for(ll j = i + 1; j < n; j ++)
			{
				if(s[j] == '>')
				{
					ll temp = 0;
					if(s[j - 1] == '*')
						temp ++;
					ans = max(ans, n - j + temp);
					cout << ans << endl;
					return;
				}
				else
					ans ++;
			}
			break;
		}
		else
			ans ++;
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
