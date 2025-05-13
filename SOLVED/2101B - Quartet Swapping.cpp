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

bool fun(vector<ll> a)
{
    bool f = 0;
    ordered_set<ll> o;
    flp(0, a.size())
    {
        o.insert(a[i]);
        int inv =  i - o.order_of_key(a[i]);
        if(inv & 1)
            if(f)
                f = 0;
            else
                f = 1;
    }
    return f;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> o, e;
    flp(0, n)
    {
        ll x;
        cin >> x;
        if(i % 2)
            o.pb(x);
        else
            e.pb(x);
    }
    
    vector<ll> ans(n);
    bool f = fun(e) != fun(o);
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    flp(0, n)
    {
        if(i % 2)
            ans[i] = o[i / 2];
        else
            ans[i] = e[i / 2];
    }
    if(f)
        swap(ans[n - 1], ans[n - 3]);
    flp(0, n)
        cout << ans[i] << " ";
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
