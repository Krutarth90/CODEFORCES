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
    ll n;
    cin >> n;
    vector<ll> li(n), fi(n, 0), lasti(n, -1);
    flp(0, n)
    {
        int x;
        cin >> x;
        if(!fi[x - 1])
        {
            fi[x - 1] = i + 1; 
            li[x - 1] = fi[x - 1];
        }
        else
            li[x - 1] = max(li[x - 1], (i + 1) - lasti[x - 1]);
        lasti[x - 1] = i + 1;
    }
    vector<ll> ans(n, -1);
    flp(0, n)
    {
        if(!fi[i])
            continue;
        li[i] = max(li[i], n - lasti[i] + 1);
        for(ll j = li[i] - 1; j < n; j ++)
        {
            if(ans[j] == -1)
                ans[j] = i + 1;
            else
                break;
        }
    }
    for(auto x : ans)
        cout << x << " ";

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
