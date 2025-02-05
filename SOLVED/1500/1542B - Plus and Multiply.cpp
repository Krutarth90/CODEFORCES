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
    int n, a, b;
	cin >> n >> a >> b;
	if(a == 1)
	{
		n --;
		if(n % b)
			NO;
		else
			YES;
		return;
	}
	for(int i = 1; i <= n; i *= a)
	{
		if(n == i)
		{
			YES;
			return;
		}
		if((n - i) % b == 0)
		{
			YES;
			return;
		}
	}
	NO;
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
