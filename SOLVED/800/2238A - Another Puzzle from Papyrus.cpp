#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, C;
        cin >> n >> C;
        int ans = 0;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        bool needReorder = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) needReorder = true;
            ans += a[i];
            ans -= b[i];
        }
        if (needReorder) {
            needReorder = false;
            ans += C;
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            for (int i = 0; i < n; ++i) {
                if (a[i] < b[i]) {
                    needReorder = true;
                }
            }
        }
        if (needReorder) cout << "-1\n";
        else cout << ans << "\n";
    }
}
