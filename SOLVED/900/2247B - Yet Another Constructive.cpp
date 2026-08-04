#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;

        if (k > m) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            cout << (i % k == 0 ? m - k + 1 : 1) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
