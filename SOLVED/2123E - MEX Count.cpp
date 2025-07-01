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
    ll n, index = 0, mi = LLONG_MAX, maxi = LLONG_MIN;
    cin >> n;
    map<ll, ll> ma;
    set<ll> se;
    vector<ll> a(n);
    flp(0, n)
        cin >> a[i];
    sort(a.begin(), a.end());
    if(a[0] != 0)
    {
        flp(0, n + 1)
            cout << 1 << " ";
        NL;
        return;
    }
    flp(0, n)
    {
        ll x = a[i];
        if(i && a[i] != a[i - 1] + 1 && a[i] != a[i - 1])
            break;
        ma[x] ++;
        se.insert(x);
        maxi = max(x, maxi);
    }
    ll prev = -1;
    
    vector<ll> pref(n + 2, 0);
    se.insert(maxi + 1);
    // ma[maxi + 1] ++;
    for(auto x : se)
    {
        mi = min(mi, ma[x]);
        pref[ma[x]] ++;
        pref[n - index + 1] --;
        index ++;
    }
    // if(n - se.size() < n + 1)
    //     pref[n - se.size() + 1] --;
    ll c = 0;
    flp(0, n + 1)
    {
        c += pref[i];
        cout << c << " ";
    }
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
