#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int tt;
    cin >> tt;
    while (tt--) {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> a(n);
        a[0] = x, a[n - 1] = y;
        int d = 1;
        for (int i = n - 2; i >= 1; --i) {
            a[i] = a[i + 1] - d;
            ++d;
        }
        bool ok = true;
        for (int i = 0; i + 1 < n; ++i) {
            if (a[i + 1] <= a[i]) {
                ok = false;
            }
        }
        for (int i = 0; i + 2 < n; ++i) {
            int p = a[i + 1] - a[i];
            int q = a[i + 2] - a[i + 1];
            if (p <= q) {
                ok = false;
            }
        }
        if (!ok) {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

}
