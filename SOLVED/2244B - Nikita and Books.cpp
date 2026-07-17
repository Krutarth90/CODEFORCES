#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void I_love_feblokas();

int32_t main() {
    int32_t tc = 1;
    cin >> tc;
    while (tc-- > 0) {
        I_love_feblokas();
    }
    return 0;
}

void I_love_feblokas() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    ll cur = 0;
    bool ok = true;
    for (ll i = 0; i < n; ++i) {
        cur += a[i];
        ll need = (i + 1) * (i + 2) / 2;
        if (cur < need) {
            ok = false;
        }
    }
    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
