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
    ll n, k, ans = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<map<char, ll>> freq(k);
    if(k < 3)
    {
        flp(0, n)
        {
            freq[0][s[i]] ++;
        }
        ll m = 0;
        for(auto[x, y] : freq[0])
        {
            m = max(m, y);
        }
        cout << n - m << endl;
        return;
    }
    ll ma = k / 2, c = 0;
    if(k % 2)
        ma ++;
    bool f = 1;
    flp(0, n)
    {
        if(f)
            c ++;
        else
            c --;
        if(c > ma)
        {
            f = 0;
            c -= k % 2;
            c --;
        }
        else if(!c)
        {
            c = 1;
            f = 1;
        }
        freq[c][s[i]] ++;
    }
    flp(1, k / 2 + k % 2 + 1)
    {
        ll m = 0, sum = 0;
        for(auto[x, y] : freq[i])
        {
            sum += y;
            m = max(m, y);
        }
        ans += (sum - m);
    }
    
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
