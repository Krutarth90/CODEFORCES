#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using vll = vector<long long>;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(a) long long(size_of(a))
#define fi first
#define pb push_back
#define se second               

void solve() {
	i64 n;
	cin >> n;
	vll a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
  cout << max(a[0] * a[1], a[n - 2] * a[n - 1]) << "\n";
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t --> 0) { 
  	solve();
  }

  return 0;
}
