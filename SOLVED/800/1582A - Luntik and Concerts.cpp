#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b, c;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;
        cout << (a + c) % 2 << '\n';
    }

    return 0;
}
