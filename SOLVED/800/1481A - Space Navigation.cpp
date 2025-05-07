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
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    int u=0,d=0,l=0,r=0;
    for(int i = 0; i < s.length(); i ++)
    {
        if(s[i] == 'U')
            u ++;
        else if(s[i] == 'R')
            r ++;
        else if(s[i] == 'D')
            d ++;
        else 
            l ++;
    }
    if(x > 0 && r >= x )
        x = 0;
    if(x < 0 && l >= -x )
        x = 0;
    if(y > 0 && u >= y )
        y = 0;
    if(y < 0 && d >= -y )
        y = 0;
        
    cout<<((!x && !y)?"YES":"NO")<<endl;

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
