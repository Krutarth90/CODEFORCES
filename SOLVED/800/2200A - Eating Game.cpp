#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i: a) cin >> i;
    
    int mx = 0, ans = 0;
    for (int i : a) mx = max(i, mx);
    for (int i : a) ans += i == mx;
    cout << ans << '\n';
}

signed main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}
