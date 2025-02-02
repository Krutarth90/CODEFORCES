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
    string s;
	cin >> s;
	int n = s.size(), ab = 0, ba = 0;
	flp(1, n)
	{
		if(s[i] == 'A' && s[i - 1] == 'B' && !ba)
			ba = 1, i ++;
		else if(ba && s[i] == 'B' && s[i - 1] == 'A')
		{
			YES;
			return;
		}
	}

	ab = 0, ba = 0;
	flp(1, n)
	{
		if(s[i] == 'B' && s[i - 1] == 'A' && !ab)
			ab = 1, i ++;
		else if(ab && s[i] == 'A' && s[i - 1] == 'B')
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
    // cin >> TC ;
    while(TC--)
        solve() ;
}
