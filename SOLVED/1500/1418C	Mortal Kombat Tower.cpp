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

int dp[200005][2];
vector<int> a(200005);
int n;

int rec(int i, int f)
{
	if(i >= n)
		return dp[i][f] = 0;
	if(dp[i][f] != -1)
		return dp[i][f];
	
	int ans = 1e9;
	if(f)
	{
		if(i < n)
			ans = min(ans, rec(i + 1, f ^ 1)+ a[i]);
		if(i + 1 < n)
		{
			ans = min(ans, a[i] + a[i + 1] + rec(i + 2, f ^ 1));
		}
		return dp[i][f] = ans;
	}
	
	return dp[i][f] = min(rec(i + 1, f ^ 1), rec(i + 2, f ^ 1));

}
void solve()
{
	cin >> n;
	
	flp(0, n)
	{
		cin >> a[i];
		dp[i][0] = -1;
		dp[i][1] = -1;
	}
	rec(0, 1);
	cout << dp[0][1] << endl;
	
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
