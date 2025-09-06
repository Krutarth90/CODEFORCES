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
	vector<int> a(n);
	flp(0, n)
	{
		cin >> a[i];
	}

	for(int i = 1; i < n; i += 2)
	{
		if(a[i - 1] > a[i])
		{
			ans += (a[i - 1] - a[i]);
			a[i - 1] = a[i];
		}
		if(a[i + 1] > a[i] && i + 1 < n)
		{
			ans += (a[i + 1] - a[i]);
			a[i + 1] = a[i];
		}
		int t = a[i - 1] - a[i];
		if(i + 1 < n)
			t += a[i + 1];
		if(t > 0)
		{
			a[i + 1] -= t;
			ans += t;
		}
			
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
