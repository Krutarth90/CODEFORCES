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


int cost(string& a, string& b) 
{
    int val = 0;
    for(int i = 0; i < a.size(); ++i)
        val += abs(a[i] - b[i]);
    return val;
}

void solve()
{
    int n, m; cin >> n >> m;
    vector<string> s(n);
    for(int i = 0; i < n; ++i)
        cin >> s[i];
    int ans = INT_MAX;
    for(int i = 0; i < n; ++i) 
        for(int j = i + 1; j < n; ++j)
            ans = min(ans, cost(s[i], s[j]));
    cout << ans << "\n";
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
