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
    int n; 
    cin >> n;
    vector<int> ans(2*n+1, 0);
    vector<bool> used(2*n+1, false);
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            int x; cin >> x;
            ans[i + j] = x;
            used[x] = true;
        }
    }
    for (int i = 1; i <= 2 * n; i++) 
    {
        if (ans[i] != 0) 
            cout << ans[i] << " ";
        else 
        {
            for (int j = 1; j <= n * 2; j++) 
            {
                if (!used[j]) 
                {
                    used[j] = true;
                    cout << j << " ";
                    break;
                }
            }
        }
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
