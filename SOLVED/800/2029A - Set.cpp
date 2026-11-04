#include <bits/stdc++.h>
#define all(s) s.begin(), s.end()
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
const int _N = 1e5 + 5;
 
int T;
 
void solve() {
	int l, r, k; cin >> l >> r >> k;
	cout << max(r / k - l + 1, 0) << endl;
	return;
}
 
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> T;
	while (T--) {
		solve();
	}
}
