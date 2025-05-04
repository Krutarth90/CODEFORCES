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
    bool f1 = 1;
    ll f2 = 0;
    ll x;
    ll bit = 1, ans = 0;
    cin >> x;
    while(bit <= x)
    {
        if(bit == x || bit - 1 == x)
        {
            cout << -1 << endl;
            return;
        }
            
        bit = bit << 1;
    }
    if(bit - 1 == x)
    {
        cout << -1 << endl;
        return;
    }
    bit = 1;
    while(bit < x)
    {
        if((bit & x) && f1)
        {
            ans += bit;
            f1 = 0;
        }
        else if(!(bit & x))
        {
            f2 = bit;
        }
        bit = bit << 1;
    }
    cout << ans + f2 << endl;
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
