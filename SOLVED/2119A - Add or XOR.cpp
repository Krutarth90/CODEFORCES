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
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if(b + 1 == a)
    {
        if(a & 1)
            cout << y << endl;
        else
            cout  << -1 << endl;

        return; 
    }
    if(a == b)
    {
        cout << 0 << endl;
        return;
    }
    if(a > b)
    {
        cout << -1 << endl;
        return;
    }
    if(x <= y)
    {
        cout << (b - a) * x << endl;
        return;
    }
    ll ans = 0;
    while(a != b)
    {
        if(a & 1)
        {
            ans += x;
            a ++;
        }
        else
        {
            ans += y;
            a ++;
        }
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
