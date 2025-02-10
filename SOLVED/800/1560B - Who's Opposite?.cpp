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
	int a, b, c;
	cin >> a >> b >> c;
	if(a < b)
		swap(a, b);
	if((((a - b) - 1) * 2 + 2) < max(c, a))
	{
		cout << -1 << endl;
		return;
	}
	int ans = (c + (a - b)) ;
	if(ans > (((a - b) - 1) * 2 + 2))
		ans -= (((a - b) - 1) * 2 + 2);
	cout << ans << endl;
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
