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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> pref(n + 1);
    pref[0] = 0;
    flp(0, n)
    {
        ll x;
        cin >> x;
        pref[i + 1] = pref[i] + x;
    }
    ll l = -1, r = n * k + 2;
    while(l + 1 < r)
    {
        ll m = l + (r - l) / 2;
        ll s = pref.back() * k - (pref[m % n] + (m / n) * pref.back());
        if(s >= x)
            l = m;
        else    
            r = m;
    }
    cout << l + 1 << endl;
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
