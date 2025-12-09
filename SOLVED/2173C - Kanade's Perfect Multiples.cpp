#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k, n) for(ll i = (ll) k; i < (ll) n; i ++)
#define flm(k, n) for(ll j = (ll) n - 1; j >= (ll) k; j --)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout << "\n"
#define SPACE << " " <<
 
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
    ll n, k;
    cin >> n >> k;
    set<ll> se, del;
    flp(0, n)
    {
        ll x;
        cin >> x;
        se.insert(x);
    }
    for(auto x : se)
    {
        if(del.find(x) == del.end())
            flp(2, INT_MAX)
            {
                ll y = x * i;
                if(y > k)
                    break;
                if(se.find(y) != se.end())
                {
                    del.insert(y);
                    se.erase(y);
                }
                else if(del.find(y) == del.end())
                {
                    cout << -1 << endl;
                    return;
                }
            }
    }
    cout << se.size() << endl;
    for(auto x : se)
        cout << x << " ";
    NL;
}

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC = 1;
    cin >> TC;
    while(TC--)
        solve();
}
