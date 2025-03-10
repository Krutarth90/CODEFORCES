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
    ll n, ans = 0;
    cin >> n;
    vector<ll> w(n + 1), times(n + 1, 0);
    flp(1, n + 1)
    {
        cin >> w[i];
        ans += w[i];
    }
        
    flp(0, n - 1)
    {
        ll x, y;
        cin >> x >> y;
        times[x] ++;
        times[y] ++;
    }
    priority_queue<pair<ll, ll>> pq;
    flp(1, n + 1)
    {
        if(times[i] > 1)
            pq.push({w[i], times[i] - 1});
    }
    flp(0, n - 1)
    {
        cout << ans << " ";
        if(pq.size())
        {
            ans += pq.top().first;
            ll ti = pq.top().second, val = pq.top().first;
            pq.pop();
            if(ti > 1)
                pq.push({val, --ti});   
        }
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
