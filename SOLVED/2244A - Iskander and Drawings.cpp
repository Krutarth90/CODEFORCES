#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void I_love_feblokas();

int32_t main() {
    int32_t tc = 1;
    cin >> tc;
    while (tc-->0) {
        I_love_feblokas();
    }
    return 0;
}

void I_love_feblokas() {
    int32_t ans = 0, cnt = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (auto &c : s) {
        if (c == '*') {
            cnt = 0;
        } else {
            cnt++;
        }
        ans = max(ans, (cnt + 1) / 2);
    }
    cout << ans << '\n';
    return;
}
