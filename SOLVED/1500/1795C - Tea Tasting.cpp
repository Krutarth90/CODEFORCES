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
	ll n, c = 0;
	cin >> n;
	ll a[n], b[n], ans[n];
	priority_queue<ll> pq;
	flp(0, n)
	{
		cin >> a[i];
	}
	flp(0, n)
	{
		cin >> b[i];
		ans[i] = 0;
	}
	vector<ll> pref;
	pref.pb(0);
	flp(0, n)
	{
		pq.push(-c - a[i]);
		while(pq.size() && ((-pq.top() - (c) <= b[i])))
		{
			ans[i] += (-pq.top() - (c));
			pq.pop();
		}
		
		ans[i] += (pq.size() * b[i]);

		c += b[i];
		pref.pb(c);

	}
	flp(0, n)
		cout << ans[i] << " ";
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
