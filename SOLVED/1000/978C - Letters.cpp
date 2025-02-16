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
	ll n, m;
	cin >> n >> m;
	vector<ll> a(n), pref(n + 1);
	pref[0] = 0;
	flp(0, n)
	{
		cin >> a[i];
		pref[i + 1] = pref[i] + a[i];
	}
	flp(0, m)
	{
		ll x;
		cin >> x;
		ll index = upper_bound(pref.begin(), pref.end(), x) - pref.begin();
		if(x == pref[index - 1])
		{
			cout << index - 1 << " " << a[index - 2] << endl;
			continue;
		}
		cout << index << " " << x - pref[index - 1] << endl;
	}
}



signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    //cin >> TC ;
    while(TC--)
        solve() ;
}
