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
    ll a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i < (1 << 7); ++i) 
    {
        int x = 0, y = 0, z = 0;
        for (int j = 1; j <= 7; ++j) 
        {
            if (i >> (j - 1) & 1) 
            {
                x += j & 1;
                y += j >> 1 & 1;
                z += j >> 2;
            }
        }
        if (x <= a && y <= b && z <= c)
            ans = max(ans, __builtin_popcount(i));
    }
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
