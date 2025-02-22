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
	string s;
	cin >> s;
	vector<ll> c = {0, 0};
	flp(0, n)
	{
		if(s[i] == '+')
			c[0] ++;
		else
			c[1] ++;
	}
	int tot = c[0] - c[1];
	int q;
	cin >> q;
	while(q --)
	{
		ll a, b;
		cin >> a >> b;
		if(!tot)
		{
			YES;
			continue;
		}
		if(a == b)
		{
			NO;
			continue;
		}
		ll top = tot * b, bot = b - a;
		if(top % bot)
		{
			NO;
			continue;
		}
		top /= bot;
		if(top >= -c[1] && top <= c[0])
			YES;
		else
			NO;
	}
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
