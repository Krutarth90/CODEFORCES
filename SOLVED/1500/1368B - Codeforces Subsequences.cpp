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
	vector<pair<char, int>> a = {{'c', 1}, {'o', 1}, {'d', 1}, {'e', 1}, {'f', 1}, {'o', 1}, {'r', 1}, {'c', 1}, {'e', 1}, {'s', 1}};
	int k, c = 1;
	int i = 0;
	cin >> k;
	while(c < k)
	{
		if(i > 9)
			i = 0;
		c /= a[i].second;
		a[i].second ++;
		c *= a[i].second;

		i ++;
	}
	flp(0, 10)
		for(int j = 0; j < a[i].second; j ++)
			cout << a[i].first;
	NL;
}



signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    //cin >> TC ;
    while(TC--)
        solve() ;
}
