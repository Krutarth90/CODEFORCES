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
    int n, prev = -1;
	cin >> n;
	map<int, int> ma;

	flp(0, n)
	{
		int x;
		cin >> x;
		ma[x] ++;
	}

	vector<int> dp(ma.size() + 2, 0);
	auto it = ma.begin();
	flp(2, ma.size() + 2)
	{	
		int val = it->first * it->second;
		if(it->first - 1 != prev)
		{
			dp[i] = dp[i - 1] + val;
		}
		else
		{
			dp[i] = max(dp[i - 1], dp[i - 2] + val);
		}
		
		prev = it->first;
		it ++;
	}
	cout << dp.back() << endl;

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
