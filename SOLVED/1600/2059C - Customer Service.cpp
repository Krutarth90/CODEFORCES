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
    vector<vector<ll>> a(n, vector<ll> (n));
    multiset<int> m;
    flp(0, n)
    {
        int c = 0;
        for(int j = 0; j < n; j ++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                c ++;
            }
            else
                c = 0;
        }
        if(c)
            m.insert(c);   
    }
    int ans = 1;
    while(m.size())
    {
        if(ans == n)
            break;
        int x = *m.begin();
        if(x >= ans)
            ans ++;
        m.extract(x);
    }
    cout << ans << endl;
        
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
