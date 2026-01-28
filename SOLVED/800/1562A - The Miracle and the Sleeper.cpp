#include <iostream>

using namespace std;

int l, r;

void solve() {
    if (r < l * 2) {
        cout << r - l << endl;
    }
    else {
        cout << (r - 1) / 2 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        solve();
    }
}
