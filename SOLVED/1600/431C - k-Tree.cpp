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
    return x % ((ll)1e9 + 7);
}
void solve()
{
    ll n, k, d;
    cin >> n >> k >> d;
    vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
    dp[0][0] = 1;
    flp(0, n)
    {
        for(ll j = 1; j <= k; j ++)
        {
            if(i + j > n)
                break;
            if(j >= d)
            {
                dp[j + i][1] = ((dp[j + i][1]) % ((ll)1e9 + 7) + (dp[i][0] % ((ll)1e9 + 7) + dp[i][1] % ((ll)1e9 + 7)) % ((ll)1e9 + 7)) % ((ll)1e9 + 7);
            }
            else
            {
                dp[j + i][1] = (dp[j + i][1] % ((ll)1e9 + 7) + dp[i][1] % ((ll)1e9 + 7)) % ((ll)1e9 + 7);
                dp[j + i][0] = (dp[j + i][0] % ((ll)1e9 + 7) + dp[i][0] % ((ll)1e9 + 7)) % ((ll)1e9 + 7);
            }
        }
    }
    cout << dp[n][1] << endl;
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
