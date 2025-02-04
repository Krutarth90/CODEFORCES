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
    int n, q, c = 0, ans = 0;
	cin >> n >> q;
	vector<int> a(n + 1), fr(n + 2, 0), val;
	flp(1, n + 1)
	{
		cin >> a[i];
	}
	while(q --)
	{
		int l, r;
		cin >> l >> r;
		fr[l] ++;
		fr[r + 1] --;
	}	

	for(auto x : fr)
	{
		c += x;
		if(c)
			val.pb(c);
	}
	sort(a.begin(), a.end());
	sort(val.rbegin(), val.rend());

	for(auto x : val)
	{
		ans += (x * a.back());
		a.pop_back();
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
