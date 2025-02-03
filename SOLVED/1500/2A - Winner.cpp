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
    int n;
	cin >> n;
	map<string, int> ma;
	map<int, set<string>> rm;
	int ans = 0;
	int a[n];
	string s[n];
	flp(0, n)
	{
		cin >> s[i];
		cin >> a[i];
		ma[s[i]] = ma[s[i]] + a[i];	
	}
	for(auto [x, y] : ma)
	{
		ans = max(ans, y);
		rm[y].insert(x);
		ma[x] = 0;
	}
	flp(0, n)
	{
		ma[s[i]] += a[i];
		if(ma[s[i]] >= ans && (rm[ans].find(s[i]) != rm[ans].end()))
		{
			cout << s[i] << endl;
			return;
		}
	}
	
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
