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
    ll n, x, k, ans = 0, mini = -1;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    vector<ll> pref;
    pref.pb(0);
    flp(0, n)
    {
        pref.pb(pref.back() + (s[i] == 'L' ? -1 : 1));
        if(mini == -1 && i && !pref.back())
            mini = i + 1;
    }
    if((x != 0))
    {
        flp(1, min(k + 1, n + 1))
        {
            if(pref[i] == -x)
            {
                x = 0;
                ans ++;
                k -= i;
                break;
            }
        }       
    }
    if(x || (mini == -1))
    {
        cout << ans << endl;
        return;
    }
    ans += (k / mini);
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
