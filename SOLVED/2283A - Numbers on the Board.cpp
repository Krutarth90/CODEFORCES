#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int t;cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        ll ans = (l > 0 || r < 0) ? r - l : max(0LL, abs(l + r) - 1);
        cout << ans << '\n';
    }}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
