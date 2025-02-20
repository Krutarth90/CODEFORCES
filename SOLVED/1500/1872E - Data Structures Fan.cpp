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
	int n;
	cin >> n;
	int a[n], x[2] = {0, 0}, pref[n + 1];
	pref[0] = 0;
	flp(0, n)
	{
		cin >> a[i];
		pref[i + 1] = a[i] ^ pref[i]; 
	}
	string s;
	cin >> s;
	flp(0, n)
	{
		x[s[i] - '0'] ^= a[i];	
	}
	int q;
	cin >> q;
	while(q --)
	{
		int type;
		cin >> type;
		if(type == 2)
		{
			int y;
			cin >> y;
			cout << x[y] << " ";
			continue;
		}
		int l, r;
		cin >> l >> r;
		x[0] ^= (pref[l - 1] ^ pref[r]);
		x[1] ^= (pref[l - 1] ^ pref[r]);
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
