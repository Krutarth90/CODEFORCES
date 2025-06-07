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
    return x % (998244353);
}
 


void solve()
{
    bool f = 0;
    ll n;
    cin >> n;
    vector<int> d(n);
    flp(0, n)
        cin >> d[i];
    vector<pair<int, int>> slab(n);
    vector<int> last;
    int low = 0, high = 0;
    flp(0, n)
    {
        cin >> slab[i].first >> slab[i].second;
        if(d[i] == -1)
        {   
            high ++;
        }
        else
        {
            low += d[i];
            high += d[i];
        }
        low = max(low, slab[i].first);
        high = min(high, slab[i].second);
        if(low > high)
        {
            f = 1;
        }
        slab[i] = {low, high};
    }
    if(f)
    {
        cout << -1 << endl;
        return;
    }
    int pos = high;
    flm(1, n)
    { 
        if(d[j] == -1)
        {
            if(pos <= slab[j - 1].second)
                d[j] = 0;
            else
            {    
                d[j] = 1;
                pos --;
            }
            continue;
        }
        pos -= d[j];
    }
    if(pos <= 0 && d[0] == -1)
        d[0] = 0;
    if(d[0] == -1)
        d[0] = 1;
    flp(0, n)
        cout << d[i] << " ";
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
