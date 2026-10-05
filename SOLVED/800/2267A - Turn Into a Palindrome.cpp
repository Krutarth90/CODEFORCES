#include <bits/stdc++.h>

using namespace std;

signed main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        char c; cin >> c;
        string s; cin >> s;
        int ans = 0;
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] == s[n - i - 1]) continue;
            if (s[i] == c || s[n - i - 1] == c) ans++;
            else ans+=2;
        }
        cout << ans << '\n';
    }
}
