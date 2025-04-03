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
    ll n, ans = 0;
	cin >> n;
	vector<ll> a(n + 1);
	vector<bool> f(n + 1, 0);
	map<ll, ll> ma;
	flp(1, n + 1)
	{
		cin >> a[i];
		ma[a[i]] = i;
	}
	flp(0, n)
	{
		ll d;
		cin >> d;
		if(a[d] == d)
		{	
			if(!f[d])
			{
				f[d] = 1;
				ans ++;
			}
			cout << ans << " ";
			continue;
		}
		ll index = d;
		while(1)
		{
			if(a[index] == index)
			{
				if(!f[index])
				{
					f[index] = 1;
					ans ++;
				}
				break;
			}
			if(f[index])
				break;
			ll ni = ma[a[a[index]]];
			a[index] = index;
			f[index] = 1;
			ans ++;
			index = ni;
		}
		cout << ans << " ";
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
}2
