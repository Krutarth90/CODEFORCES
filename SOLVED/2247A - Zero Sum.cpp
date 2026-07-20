#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    int sm = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sm += x;
    }
    
    cout << (abs(sm) % 4 == 0 ? "YES\n" : "NO\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
