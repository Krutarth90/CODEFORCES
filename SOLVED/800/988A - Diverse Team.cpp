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
    int n, k;
	cin >> n >> k;
	set<int> el;
	vector<int> ans;
	for (int i = 0; i < n; ++i) 
    {
		int x;
		cin >> x;
		if (!el.count(x)) 
        {
			ans.push_back(i);
			el.insert(x);
		}
	}
	
	if (int(ans.size()) < k) 
    {
		cout << "NO\n";
	} 
    else 
    {
		cout << "YES\n";
		for (int i = 0; i < k; ++i)
			cout << ans[i] + 1 << " ";
		cout << endl;
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
