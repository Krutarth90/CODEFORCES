#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n) for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n) for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout<<"\n"
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i: a) 
        cin >> i;
    vector<int> p[2];
    for (int i : a) 
        p[i%2].push_back(i);
    long long ans = 0;
    if (p[1].size())    
        ans += accumulate(p[0].begin(), p[0].end(), 0LL);
    sort(p[1].rbegin(), p[1].rend());
    int m = p[1].size();
    for (int i = 0; i < (m+1)/2; i++) 
        ans += p[1][i];
    cout << ans << '\n';
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int TC;
    cin >> TC;
    while (TC--) 
        solve();
    return 0;
}
