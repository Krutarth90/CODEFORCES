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
    ll n, m, c = 0, k, ans = 0;
    cin >> n >> m >> k;
    vector<ll> row, col;
    flp(0, n)
    {
        int x;
        cin >> x;
        if(x == 1)
            c ++;
        else
        {
            row.pb(c);
            c = 0;
        }   
    }
    if(c)
        row.pb(c);
    c = 0;
    flp(0, m)
    {
        int x;
        cin >> x;
        if(x == 1)
            c ++;
        else
        {
            col.pb(c);
            c = 0;
        }
    }
    if(c)
        col.pb(c);
    
    vector<ll> ma(n + 1, 0), mb(m + 1, 0);

    for(auto x : row)
        flp(1, x + 1)
            ma[i] += x - i + 1;

    for(auto x : col)
        flp(1, x + 1)
            mb[i] += x - i + 1;

    flp(1, min(k + 1, n + 1))
    {
        if(k % i || k / i > m)
            continue;
        ans += (ma[i] * mb[k / i]);
    }
    cout << ans << endl;
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
