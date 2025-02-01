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
	vector<int> child[n + 1], parent(n + 1);
	vector<bool> respect(n + 1), cr(n + 1, 0);
	set<int> se;
	flp(0, n)
	{
		int x, y;
		cin >> x >> y;
		if(x == -1)
			x ++;
		child[x].pb(i + 1);
		parent[i + 1] = x;
		respect[i + 1] = (!y);
		cr[x] = respect[i + 1] || cr[x];
	}
	flp(1, n + 1)
	{
		if(cr[i] || respect[i])
			continue;
		se.insert(i);
	}
	if(!se.size())
	{
		cout << -1 << endl;
		return;
	}
	for(auto x : se)
		cout << x << " ";

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
