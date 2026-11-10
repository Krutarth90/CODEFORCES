#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s == "^") {
            cout << 1 << '\n';
            continue;
        }
        int ans = 0;
        if (s[0] == '_')
            ++ans;
        if (s.back() == '_')
            ++ans;
        for (int i = 0; i < (int) s.size() - 1; ++i) {
            if (s[i] == '_' && s[i + 1] == '_')
                ++ans;
        }
        cout << ans << '\n';
    }
}
