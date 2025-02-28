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
	int n, m, ans = 0;
	cin >> n >> m;
	int a[n + 1][m + 1];
	set <int> color;
	flp(1, n + 1)
	{
		a[i][0] = 0;
		for(int j = 1; j < m + 1; j ++)
		{
			a[0][j] = 0;
			cin >> a[i][j];
			color.insert(a[i][j]);
		}
	}
	if(color.size() == 1)
	{
		cout << 0 << endl;
		return;
	}
		
	set <int> se;
	flp(1, n + 1)
	{
		for(int j = 0 + 1; j < m + 1; j ++)
		{
			if(a[i][j] == a[i - 1][j] || a[i][j] == a[i][j - 1])
			{
				if(se.find(a[i][j]) != se.end())
				{
					a[i][j] = -1;
					continue;
				}
				se.insert(a[i][j]);
				a[i][j] = -1;
				ans ++;
			}
		}
	}
	
	cout << se.size() + color.size() - 1 - (se.size() > 0) << endl;
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
