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
    int n;
    cin >> n;
    vector<ll> x(n), y(n);
    flp(0, n)
    {
        cin >> x[i] >> y[i];
    } 
    if(n % 2)
    {
        cout << 1 << endl;
        return;
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    cout << (x[n / 2] - x[n / 2  - 1] + 1) * (y[n / 2] - y[n / 2 - 1] + 1) << endl;
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
