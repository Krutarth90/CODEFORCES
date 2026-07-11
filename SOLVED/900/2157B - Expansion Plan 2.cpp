#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define nf endl
#define ll long long
#define pb push_back
#define _ << ' ' <<

#define INF (ll)1e18
#define mod 998244353
#define maxn 110

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #if !ONLINE_JUDGE && !EVAL
        ifstream cin("input.txt");
        ofstream cout("output.txt");
    #endif

    ll t; cin >> t;
    while (t--) {
        ll n, x, y; cin >> n >> x >> y;
        string s; cin >> s; s = '#' + s;
        ll a = 0, b = 0;
        for (ll i = 1; i <= n; i++) {
            a += (s[i] == '4');
            b += (s[i] == '8');
        }

        x = abs(x); y = abs(y);
        if (a + 2 * b < x + y) cout << "NO" << nl;
        else if (a + b < max(x, y)) cout << "NO" << nl;
        else cout << "YES" << nl;
    }

    return 0;
}
