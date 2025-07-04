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

ll mod(ll x)
{
    return x % (998244353);
}
 


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    int mx = 0, cnt_mx = 0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
        {
            cin >> a[i][j];
            if (a[i][j] > mx)
                mx = a[i][j], cnt_mx = 1;
            else if (a[i][j] == mx) 
                cnt_mx++;
        }
    vector<int> r(n), c(m);
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            if (a[i][j] == mx) 
            {
                r[i]++;
                c[j]++;
            }
    int flag = 0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            if (r[i] + c[j] - (a[i][j] == mx) == cnt_mx) 
                flag = 1;
    cout << mx - flag << '\n';
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
