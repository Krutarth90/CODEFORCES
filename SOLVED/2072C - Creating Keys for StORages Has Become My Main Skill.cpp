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
    ll n, x, c = 0, count = 0, i = 1;
    cin >> n >> x;
    if(n == 1)
    {
        cout << x << endl;
        return;
    }
    flp(0, n - 1)
    {
        if((i & x) == i && (i | x) == x)
        {
            c |= i;
            cout << i << " ";
            count ++;
        }
        else
        {
            cout << 0 << " ";
        }
    }
    if(x == c && count <= x && (count & x) == count && (count | x) == x)
        cout << count << endl;
    else
        cout << (x ^ c) << endl;
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
