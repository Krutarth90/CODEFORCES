#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        bool possible = false;
        int atLeastTwo = 0;

        for (int i = 0; i < k; ++i) {
            long long c;
            cin >> c;

            if (c >= 3) {
                possible = true;
            }

            if (c >= 2) {
                ++atLeastTwo;
            }
        }

        if (atLeastTwo >= 2) {
            possible = true;
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
