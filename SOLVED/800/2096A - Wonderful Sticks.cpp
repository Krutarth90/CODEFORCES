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
    string s;
    cin >> s;

    int l = 1;
    int r = n;
    vector<int> a(n);
    for (int i = n - 2; i >= 0; i--) 
	{
        if (s[i] == '<') 
		{
            a[i + 1] = l;
            l++;
        }
        if (s[i] == '>') 
		{
            a[i + 1] = r;
            r--;
        }
    }
    a[0] = l;

    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
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
