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
	int a[n], dp[n + 1];
	dp[n] = 0;
	flp(0, n)
		cin >> a[i];
	for(int j = n - 1; j >= 0; j --)
	{
		if(a[j] > n - 1 - j)
			dp[j] = dp[j + 1] + 1;
		else if(a[j] == n - 1 - j)
			dp[j] = 0;
		else
			dp[j] = min(1 + dp[j + 1], dp[j + a[j] + 1]);
	}
	cout << dp[0] << endl;
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
