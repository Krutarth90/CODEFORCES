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
    int n;
    cin >> n;
    
    ll a[n+1];
    flp(1, n + 1) 
        cin >> a[i];
    
    ll sum = 0;
    flp(2, n + 1)  
        sum += abs(a[i] - a[i-1]);
    
    ll ans = min(sum - abs(a[2] - a[1]), sum - abs(a[n] - a[n-1]));
    flp(2, n)   
        ans = min(ans, sum - abs(a[i + 1] - a[i]) - abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i - 1]));
    cout << ans << "\n";
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
