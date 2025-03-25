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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if(t == s)
    {
        bool f = 0;
        flp(1, n)
        {
            if(s[i] != s[0])
            {
                f = 1;
                break;
            }
        }
        if(!f)
        {
            NO;
            return;
        }  
    }
    if(s < t || k)
    {
        YES;
        return;
    }
    NO;
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
