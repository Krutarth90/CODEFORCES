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

ll n;
int t;
vector<ll> facts = {6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200};

ll count(ll x)
{
    ll bit = 1, ans = 0;
    while(bit <= x)
    {
        if(bit & x)
            ans ++;
        bit <<= 1;
    }
    return ans;
}

ll fun(ll c, ll x, int I)
{
    if(c == 0)
    {
        return count(x) + t;
    }
    ll ans = 1e12;
    flp(I, facts.size())
    {
        if(facts[i] > x)
            break;
        ans = min(ans, fun(c - 1, x - facts[i], i + 1));
    }
    return ans;
}


void solve()
{
    ll ans;
	cin >> n;
    ans = count(n);
	for(t = 1; t <= facts.size(); t ++)
	{
        ans = min(fun(t, n, 0), ans);
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
