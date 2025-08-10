#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    const int MAX_SUM = 10001; 
    vector<int> weight(n), value(n);
    ll totalValue = 0;
    for (int i = 0; i < n; ++i) {
        cin >> weight[i] >> value[i];
        totalValue += value[i];
    }
    vector<vector<ll>> dp(n, vector<ll>(MAX_SUM, -1));  
    for (int i = 0; i < n; ++i) {
        for (int cnt = i; cnt >= 0; --cnt) {
            for (int l = 0; l + weight[i] < MAX_SUM; ++l) {
                if ((l == 0 && cnt == 0) || (cnt > 0 && dp[cnt - 1][l] != -1)) {
                    ll prev = (cnt ? dp[cnt - 1][l] : 0);
                    ll &dest = dp[cnt][l + weight[i]];
                    dest = max(dest, prev + value[i]);
                }
            }
        }
    }
    cout.setf(std::ios::fixed);
    cout.precision(9);
    for (int j = 0; j < n; ++j) {
        ll best = 0;
        for (int l = 0; l < MAX_SUM; ++l) {
            if (dp[j][l] != -1) {
                ll candidate = min<ll>(2LL * l, totalValue + dp[j][l]);
                if (candidate > best) best = candidate;
            }
        }
        cout << (best / 2.0) << (j + 1 == n ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int TC = 1;
    // cin >> TC;
    while (TC--) solve();
    return 0;
}
