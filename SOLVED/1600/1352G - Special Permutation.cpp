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

ll mod(ll x)
{
    return x % ((ll)1e9 + 7);
}
void solve()
{
    ll n;
    cin >> n;
    if(n == 2 || n == 3)
    {
        cout << -1 << endl;
        return;
    }
    ll c = 0;
    
    if(n % 4 == 1)
    {
        cout << c + 1 SPACE c + 3 SPACE c + 5 SPACE c + 2 SPACE c + 4 << " ";
        c += 5;
    }
    else if(n % 4 == 2)
    {
        cout << c + 1 SPACE c + 3 SPACE c + 5 SPACE c + 2 SPACE c + 4 SPACE c + 6 << " ";
        c += 6;
    }
    else if(n % 4 == 3)
    {
        cout << c + 1 SPACE c + 3 SPACE c + 5 SPACE c + 2 SPACE c + 6 SPACE c + 4 SPACE c + 7 << " ";
        c += 7;
    }
    while(c < n)
    {
        cout << c + 2 SPACE c + 4 SPACE c + 1 SPACE c + 3 << " ";
        c += 4;
    }
    NL;
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
