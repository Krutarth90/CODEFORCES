#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k, x = -1;
        cin >> n >> k;
        for (int i = 0; i <= n; i++) {
            if (i * (i - 1) / 2 + (n - i) * (n - i - 1) / 2 == k) {
                x = i;
            }
        }
        if (x == -1)
            cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                if (i < x)
                    cout << 1 << ' ';
                else
                    cout << -1 << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
