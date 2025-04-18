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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);

    flp(0, n)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [](pair<ll, ll> x, pair<ll, ll> y){
        if(x.first == y.first)
            return x.second > y.second;
        return x.first < y.first;
    });
    int e1 = -1, e2 = -1;
    flp(0, n)
    {
        ll l = a[i].first, r = a[i].second;
        if(l > e1)
        {
            e1 = r;
        }
        else if(l > e2)
        {
            e2 = r;
        }
        else
        {
            NO;
            return;
        }
    }
    YES;
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
