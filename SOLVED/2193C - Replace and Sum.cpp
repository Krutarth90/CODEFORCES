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
    ll n, q, m = 0;
    cin >> n >> q;
    vector<ll> a(n), b(n), pref(n + 1);
    flp(0, n)
        cin >> a[i];
    flp(0, n)
        cin >> b[i];
    flm(0, n)
    {
        m = max({m, a[j], b[j]});
        a[j] = m;
    }
    pref[0] = 0;
    flp(0, n)
        pref[i + 1] = pref[i] + a[i];
    while(q --)
    {
        ll l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1]<< " ";
    }
    NL;
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
