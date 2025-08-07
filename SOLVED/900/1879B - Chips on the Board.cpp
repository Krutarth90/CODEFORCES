#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n) for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n) for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout<<"\n"
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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto& x : a) 
        cin >> x;
    for (auto& x : b) 
        cin >> x;
    ll mnA = *min_element(a.begin(), a.end());
    ll sA = accumulate(a.begin(), a.end(), 0LL);
    ll mnB = *min_element(b.begin(), b.end());
    ll sB = accumulate(b.begin(), b.end(), 0LL);
    ll ans = min(mnA * n + sB, mnB * n + sA);
    cout << ans << '\n';

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
