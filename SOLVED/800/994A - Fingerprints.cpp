#include <bits/stdc++.h>
using namespace std;

string to_string(string s) { return s; }
template <typename T> string to_string(T v) {
  bool first = true;
  string res = "[";
  for (const auto &x : v) {
    if (!first)
      res += ", ";
    first = false;
    res += to_string(x);
  }
  res += "]";
  return res;
}

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << to_string(H);
  dbg_out(T...);
}

#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

using i64 = long long;
const int inf = 1e9 + 7;

void solve() {
	int n, m; cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];	
	}
	set<int> s;
	for (int i = 0; i < m; i++) {
		int x; cin >> x; s.insert(x);
	}
	for (int i = 0; i < n; i++) {
		if (s.count(a[i])) {
			cout << a[i] << " ";
			s.erase(a[i]);
		}
	}
	cout << "\n";
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	int tc = 1;
    while (tc --) solve();
    return 0;
}
