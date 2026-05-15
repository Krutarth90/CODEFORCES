#pragma GCC optimize("Ofast")
#include "bits/stdc++.h"


#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
#define rep1n(i, n) for (int i = 1; i <= (n); ++i)
#define repr(i, n) for (int i = (n) - 1; i >= 0; --i)
#define pb push_back
#define eb emplace_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define each(x, a) for (auto &x : a)
#define ar array
#define vec vector
#define range(i, n) rep(i, n)

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;
using pi = pair<int, int>;
using pl = pair<ll, ll>;

using vi = vector<int>;
using vl = vector<ll>;
using vpi = vector<pair<int, int>>;
using vvi = vector<vi>;

int Bit(int mask, int b) { return (mask >> b) & 1; }

template<class T>
bool ckmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
bool ckmax(T &a, const T &b) {
    if (b > a) {
        a = b;
        return true;
    }
    return false;
}

// [l, r)
template<typename T, typename F>
T FindFirstTrue(T l, T r, const F &predicat) {
    --l;
    while (r - l > 1) {
        T mid = l + (r - l) / 2;
        if (predicat(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return r;
}


template<typename T, typename F>
T FindLastFalse(T l, T r, const F &predicat) {
    return FindFirstTrue(l, r, predicat) - 1;
}

const int INFi = 2e9;
const ll INF = 2e18;

void solve() {
    ll x; cin >> x;
    ll c = 1;
    while (x >= 4) {
        c *= 2;
        x /= 4;
    }
    cout << c << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(12) << fixed;
    int t = 1;
    cin >> t;
    rep(i, t) {
        solve();
    }
    return 0;
}
