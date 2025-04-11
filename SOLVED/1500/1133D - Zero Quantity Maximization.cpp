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


void solve()
{
    ll n, ans = 0, ex = 0;
    cin >> n;
    vector<int> a(n);
    flp(0, n)
        cin >> a[i];
    map<long double, ll> ma;
    flp(0, n)
    {
        ll x;
        cin >> x;
        if(!a[i])
        {
            if(!x)
                ex ++;
            continue;
        }
        if(!x)
        {
            ma[0] ++;
            ans = max(ans, ma[0]);
            continue;
        }
        ma[(long double)a[i] / x] ++;
        ans = max(ans, ma[(long double)a[i] / x]);
    }
    cout << ans + ex << endl;
}


signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    // cin >> TC ;
    while(TC--)
        solve() ;
}
