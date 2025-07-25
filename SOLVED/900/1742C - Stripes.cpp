#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n) for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n) for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout<<"\n"
#define SPACE << " " <<

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll mod(ll x)
{
    return x % (998244353);
}

void solve()
{
    char g[8][8];
	vector<int> r;
	for (int i = 0; i < 8; i++) 
    {
		for (int j = 0; j < 8; j++) 
        {
			cin >> g[i][j];
			if (g[i][j] == 'R') 
                r.push_back(i);
		}
	}
	for (int i : r) 
    {
	    bool ok = true;
	    for (int j = 0; j < 8; j++) 
        {
	        if (g[i][j] != 'R') 
            {
                ok = false; 
                break;
            }
	    }
	    if (ok) 
        {
            cout << "R\n"; 
            return;
        }
	}
	cout << "B\n";
}

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC = 1;
    // cin >> TC;
    while(TC--)
        solve();
}
