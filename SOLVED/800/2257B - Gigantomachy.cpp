#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;


void solve() {
    int n, m;
    cin >> n >> m;
    ll a0, b0;
    cin >> a0;
    ll skip;
    for (int i = 1; i < n; ++i) {
        cin >> skip;
    }
    cin >> b0;
    for (int i = 1; i < m; ++i) {
        cin >> skip;
    }
    ll g1 = a0 + n;
    ll g2 = b0 + m;
    cout << ((g1 >= g2) ? 1 : 2);
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        solve();
        cout << '\n';
    }
    return 0;
}
