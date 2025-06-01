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
 
pair<ll, ll> fun(ll x, ll y)
{
    if(x < y)
        swap(x, y);
    if(x == y)  
        return {x + 1, -1};
    return {x, y};
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), ans(n), b(n);
    vector<ll> val(n + 2);
    ll v = 1;
    flp(0, n + 2)
    {
        val[i] = mod(v);
        v = mod(v * 2);
    }
    flp(0, n)
        cin >> a[i];
    ll m1 = 0, m2 = 0;
    flp(0, n)
    {
        cin >> b[i];
        if(a[i] > a[m1])
            m1 = i;
        if(b[i] > b[m2])
            m2 = i;
        auto x = max(fun(a[m1], b[i - m1]), fun(a[i - m2], b[m2]));
        ans[i] = val[x.first];
        if(x.second >= 0)
            ans[i] += val[x.second];
        
    }
    flp(0, n)
        cout << mod(ans[i]) << " ";
    NL;
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
