#include <iostream>

using namespace std;

signed main() {
    (*cin.tie(0)).sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        cout << n + m + min(n, m) - 3 + min(max(n, m) - 1, 1) << "\n";
    }
    return 0;
}
