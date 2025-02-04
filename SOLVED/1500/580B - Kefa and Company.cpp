#include <bits/stdc++.h>
using namespace std;
#define int                                 long long
#define flp(k,n)                            for(int i=(int)k;i<(int)n;i++)
#define flm(k,n)                            for(int j=(int)n-1;j>=(int)k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"
#define SPACE                               << " " << 


void solve()
{
    int n, d, ans = 0, c = 0;
	cin >> n >> d;
	map<int, int> ma;
	flp(0, n)
	{
		int x, y;
		cin >> x >> y;
		ma[x] += y;
	}
	vector<int> a, pref;
	pref.pb(0);

	for(auto [x, y] : ma)
	{
		if(!ans)
		{
			c = y;
			ans = y;
			a.pb(x);
			pref.pb(y);
			continue;
		}
		c += y;
		int ub = upper_bound(a.begin(), a.end(), x - d) - a.begin();
		if(ub == a.size())
			ans = max(ans, y);
		else
			ans = max(ans, c - pref[ub]);
		a.pb(x);
		pref.pb(c);
	}
	cout << ans << endl;

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
