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
    bool f = 0;
    ll n, ind = 0;
    cin >> n;
    vector<ll> a(n);
    flp(0, n)
    {
        cin >> a[i];
        if(a[i] != a[0])
            f = 1;
        if(a[i] > a[ind])
            ind = i;
    }
    if(!f)
    {
        NO;
        return;
    }
    YES;
    flp(0, n)
    {
        if(i == ind)
            cout << 2 << " ";
        else
            cout << 1 << " ";
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
