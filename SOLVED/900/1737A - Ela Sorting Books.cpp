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
    int n, k;
    string str;
    cin >> n >> k >> str;
    vector <int> count_char(26, 0);
    for (char c: str) count_char[c - 'a']++;
    string ans = "";
    for (int i = 0; i < min(25, n/k); i++) {
        while (k - ans.size() > count_char[i]) {
        ans.push_back(i + 'a');
        }
    }

    char c = 'a' + min(n / k, 25);
    while (k > ans.size()) {
        ans += c;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
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
