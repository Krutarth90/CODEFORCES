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
 

void solve()
{
    int n;
	cin >> n;
	map<string, int> mp;
	string a[3][n];
	for (int i = 0; i < 3; i++) 
    {
		for (int j = 0; j < n; j++) 
        {
			cin >> a[i][j];
			mp[a[i][j]]++;
		}
	}
	for (int i = 0; i < 3; i++) 
    {
		int tot = 0;
		for (int j = 0; j < n; j++) 
        {
			if (mp[a[i][j]] == 1) 
                tot += 3;
			else if (mp[a[i][j]] == 2) 
                tot++;
		}
		cout << tot << ' ';
	}
	cout << '\n';
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
