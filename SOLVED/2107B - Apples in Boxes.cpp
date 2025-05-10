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
    ll n, k, s = 0;
    cin >> n >> k;
    map<ll, ll> ma;
    flp(0, n)
    {
        ll x;
        cin >> x;
        s += x;
        ma[x] ++;
    }
    ll mx = (*ma.rbegin()).first, mi = (*ma.begin()).first;
    if(mx - mi <= k)
    {
        if(s % 2)
            cout << "Tom" << endl;
        else
            cout << "Jerry" << endl;
        return;
    }
    if(mx - mi - k == 1)
    {
        if(ma[mx] > 1)
            cout << "Jerry" << endl;
        else if(s % 2)
            cout << "Tom" << endl;
        else
            cout << "Jerry" << endl;
        return;
    }
    cout << "Jerry" << endl;
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
