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
	int n;
	cin >> n;
	vector<int> a(n);
	flp(0, n)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll c = 0, ans = 0, r = n - 1;
	flp(0, n)
	{
		if(i < r)
		{
			c += a[i];
			if(c >= a[r])
			{
				ans ++;
				ans += a[r];
				c -= a[r];
				a[r] = 0;
				r --;
			}
			
		}
		else if(i == r)
		{
			if(c >= a[r])
			{
				ans ++;
				ans += a[r];
				c -= a[r];
				a[r] = 0;
				r --;
			}
			else
			{
				c += a[r];
				if(c == 1)
					ans ++;
				else
					ans += c / 2 + 1 + (c % 2); 	
				c = 0;
			}
			break;
		}
		else
			break;
	}
	if(c == 1)
		ans ++;
	else if(c)
		ans += (c / 2 + 1 + (c % 2));
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
