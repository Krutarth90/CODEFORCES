#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n;
    cin >> n;
    long long an = 0;
    for (int b = 1; b <= n; b++) {
        an += 1ll * (n / b) * (n / b);
    }
    cout << an << '\n';
}

signed main() {
    signed t_ = 1;
    cin >> t_;
    while (t_--) {
        solve();
    }
}
