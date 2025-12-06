#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k, n) for(ll i = (ll) k; i < (ll) n; i ++)
#define flm(k, n) for(ll j = (ll) n - 1; j >= (ll) k; j --)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout << "\n"
#define SPACE << " " <<
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
ll mod(ll x)
{
    return x % (998244353);
}
 


void solve() 
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> dp;
    flp(0, n)
        cin >> a[i];
    flp(0, n)
        cin >> b[i];
    dp.pb({min(-a[0], b[0]), max(-a[0], b[0])});
    flp(1, n)
    {
        ll x = b[i] - min(dp.back().first, dp.back().second), y = max(dp.back().first, dp.back().second) - a[i], z = min(dp.back().first, dp.back().second) - a[i], e = b[i] - max(dp.back().first, dp.back().second);
        dp.pb({min({x, y, z, e}), max({x, y, z, e})});
    }
    cout << max(dp.back().first, dp.back().second) << endl;
}

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC = 1;
    cin >> TC;
    while(TC--)
        solve();
}
