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
    int n, oc = 0, prev = 0, ans = 0;
	cin >> n;
	flp(0, n)
	{
		int x, h;
		cin >> x >> h;
		if(!i)
		{
			ans ++;
			prev = x;
			continue;
		}
		if(oc)
		{
			if(oc < x)
			{
				ans ++; 
				prev = oc;
			}
				
			oc = 0;
		}
		if(x - h > prev)
		{
			ans ++;
		}
		else
		{
			oc = x + h;
		}
		prev = x;
	}
	if(oc)
		ans ++;
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
