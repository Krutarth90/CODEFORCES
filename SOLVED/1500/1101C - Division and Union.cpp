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
    vector<pair<ll, pair<ll, ll>>> a(n);
    vector<bool> ans(n, false);
    flp(0, n)
    {
        ll l, r;
        cin >> l >> r;
        a[i] = {l, {r, i}};
    }

    sort(a.begin(), a.end(), [](pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b) {
        if(a.first == b.first)
            return a.second.first > b.second.first;
        return a.first < b.first;
    });

    ll l = a[0].first, r = a[0].second.first, oldR = -1;
    flp(0, n)
    {
        if((a[i].first >= l && a[i].first <= r) || (a[i].second.first >= l && a[i].second.first <= r))
        {
            l = min(l, a[i].first);
            r = max(r, a[i].second.first);
            if(oldR != -1)
                ans[a[i].second.second] = 1;
            continue;
        }
        oldR = r;
        l = a[i].first;
        r = a[i].second.first;
        ans[a[i].second.second] = 1;
    }
    if(oldR == -1)
    {
        cout << -1 << endl;
        return;
    }
    flp(0, n)
    {
        ll x = ans[i];
        x ++;
        cout << x << " ";
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
