#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    bool ok = true;
    for (int i = 0; i < n; ++i)
        if (a[n + i] - a[i] < x) ok = false;
    cout << (ok ? "YES" : "NO") << "\n";
}

int main() {
    int tt; cin >> tt;
    while (tt--) solve();
}
