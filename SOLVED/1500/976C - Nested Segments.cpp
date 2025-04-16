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
    vector<pair<ll, pair<ll, ll>>> a;
    flp(0, n)
    {
        ll x, y;
        cin >> x >> y;
        a.pb({x, {y, i}});
    }
    sort(a.begin(), a.end(), [](pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b){
        if(a.first == b.first)
            return a.second.first > b.second.first;
        return a.first < b.first;
    });
    vector<pair<ll, ll>> suf(n);
    ll mini = LLONG_MAX;
    flm(0, n)
    {
        if(a[j].second.first < mini)
        {
            mini = a[j].second.first;
            suf[j] = {mini, a[j].second.second};
        }
        else
        {
            suf[j] = suf[j + 1];
        }
    }
    flp(0, n - 1)
    {
        if(suf[i + 1].first <= a[i].second.first)
        {
            cout << suf[i + 1].second + 1 SPACE a[i].second.second + 1 << endl;
            return;
        }
    }
    cout << "-1 -1" << endl;

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
