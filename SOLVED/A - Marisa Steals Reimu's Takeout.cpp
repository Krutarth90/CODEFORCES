#include <bits/stdc++.h>

using namespace std; 

void solve() {
    int n; 
    cin >> n; 
    int c0 = 0, c1 = 0, c2 = 0; 
    for (int i = 0; i < n; ++i) {
        int x; cin >> x; 
        if (x == 0) c0++;
        else if (x == 1) c1++;
        else if (x == 2) c2++;
    }

    int pairs = min(c1, c2);
    int rem = (c1 - pairs) + (c2 - pairs);

    int ans = c0 + pairs + rem / 3; 
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t; 
    while (t--) {
        solve();
    }

    return 0; 
}
