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
    ll n, s = 0, mx = 0;
    cin >> n;
    vector<ll> a(n), ans(n), pref(n);
    flp(0, n)
    {
        cin >> a[i];
        s += a[i];
        pref[i] = s;
    }
    ans[n - 1] = s;
    mx = a[0];
    flp(1, n)
    {
        ans[n - i - 1] = s - pref[i - 1];
        mx = max(a[i], mx);
        if(mx > a[i])
            ans[n - i - 1] += mx - a[i];
    }
    flp(0, n)
        cout << ans[i] << " ";
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
