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
    int n, m, k, prev = 0, first = 0;
	cin >> n >> m >> k;
	vector<int> a;
	flp(0, n)
	{
		int x;
		cin >> x;
		if(!i)
		{
			first = x;
		}
		else
		{
			a.pb(x - prev - 1);
		}
		prev = x;
	}
	if(k == 1)
	{
		cout << prev - first + 1 << endl;
		return;
	}
	sort(a.begin(), a.end());
	int ans = prev - first + 1;
	flp(1, k)
	{
		ans -= a.back();
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
