#include <bits/stdc++.h>
#define	ss second
#define ff first
#define use_fast ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ret(n) return cout << n, 0
#define se(n) cout << setprecision(n) << fixed
#define pb push_back
#define ll long long
#define ld long double
//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
//#pragma GCC optimize("no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std; 

const int N = 3e5 + 100, OO = 1e9 + 7, T = 50, M = 1e9 + 7, P = 6151, SQ = 280, lg = 20;
typedef pair <int, int> pii;

void solve() {
	int n, c0, c1, t;
	string s;
	cin >> n >> c0 >> c1 >> t >> s;
	int ans = 0;
	for(auto u : s) {
		if(u == '0') 
			ans += min(c0, c1 + t);
		else 
			ans += min(c1, c0 + t);
	}
	cout << ans << endl;
}

int32_t main() {
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
