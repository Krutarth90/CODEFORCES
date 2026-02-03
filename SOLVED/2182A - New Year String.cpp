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
    bool f1 = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    flp(3, n)
    {
        if(s[i] == '6' && s[i - 1] == '2' && s[i - 2] == '0' && s[i - 3] == '2')
        {
            cout << 0 << endl;
            return;
        }
        if(s[i] == '5' && s[i - 1] == '2' && s[i - 2] == '0' && s[i - 3] == '2')
            f1 = 1;
    }
    cout << 0 + f1 << endl;
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
