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
    ll n, k1, k2, ans = 0;
    cin >> n >> k1 >> k2;
    vector<ll> a(n);
    priority_queue<ll> pq;
    flp(0, n)
    {
        cin >> a[i];
    }
    flp(0, n)
    {
        ll x;
        cin >> x;
        a[i] = abs(a[i] - x);
        pq.push(a[i] * a[i]);
    }
    ll k = k1 + k2;
    while(k)
    {
        ll x = pq.top();
        pq.pop();
        k --;
        x = sqrt(x);
        x --;
        x *= x;
        pq.push(x);
    }
    flp(0, n)
    {
        ll x = pq.top();
        pq.pop();
        ans += x;
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
