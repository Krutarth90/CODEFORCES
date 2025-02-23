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
	ll n, a, b, c = 0, prev = 0, ans = LLONG_MAX;
	cin >> n >> a >> b;
	vector<ll> pref, arr (n + 1);
	pref.pb(0);
	arr[0] = 0;
	flp(1, n + 1)
	{
		ll x;
		cin >> x;
		arr[i] = x;
		pref.pb(pref.back() + x);
	}
	flp(0, n)
	{
		ll pa = (pref.back() - pref[i] - (n - i) * arr[i]) * b;
		pa += arr[i] * b + arr[i] * a;
		ans = min(ans, pa);
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
