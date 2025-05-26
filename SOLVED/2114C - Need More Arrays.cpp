#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n)                            for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n)                            for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"
#define SPACE                               << " " << 

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds; 
  
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll mod(ll x)
{
    return x % ((ll)1e9 + 7);
}



void solve()
{
    ll n, ans = 1;
    cin >> n;
    vector<ll> a;
    a.pb(0);
    flp(0, n)
    {
        ll x;
        cin >> x;
        if(a.back() == x)
            continue;
        a.pb(x);
    }
    vector<ll> dp(a.size() + 2);
    dp[0] = 0;
    dp[1] = 1;
    flp(2, a.size())
    {
        ll add = dp[i - 2] + 1;
        if(a[i - 1] + 1 < a[i])
            add = max(add, dp[i - 1] + 1);
        dp[i] = add;
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}



signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    cin >> TC ;
    while(TC--)
        solve() ;
}
