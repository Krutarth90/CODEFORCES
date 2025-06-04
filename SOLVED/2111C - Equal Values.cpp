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
    return x % (998244353);
}
 


void solve()
{
    ll n, x, prev = -1, c = 1, ans = LLONG_MAX;
    cin >> n;
    map<ll, ll> ma;
    flp(0, n)
    {
        cin >> x;
        if(i)
        {
            if(prev == x)
                c ++;
            else
                c = 1;
        }
        ma[x] = max(ma[x], c);
        prev = x;
    }
    for(auto [a, b] : ma)
    {
        ans = min(ans, a * (n - b));
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
