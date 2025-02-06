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
    int n, ans = 0, c = 0, sum = 0;
	cin >> n;
	priority_queue<int> pq;
	flp(0, n)
	{
		int x;
		cin >> x;
		if(x < 0)
		{
			pq.push(-1 * x);
		}
		sum += x;
		c ++;
		while(sum < 0 && pq.size())
		{
			int val = pq.top();
			sum += val;
			pq.pop();
			c --;
		}
		ans = max(ans, c);
	}
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
