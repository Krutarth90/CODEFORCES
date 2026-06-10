#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(b.rbegin(), b.rend());
    bool ok = true;
    for (int i = 0; i < n - 2; i++) {
        if (b[i + 2] != b[i] % b[i + 1]) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << b[0] << " " << b[1] << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
}
