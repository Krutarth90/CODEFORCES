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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> a(n);
    ll ms = INT_MIN, cs = 0;
    flp(0, n)
    {
        cin >> a[i];
        if(s[i] == '0')
        {
            ms = max(ms, cs);
            cs = 0;
        }
        else
        {
            if(cs + a[i] >= 0)
            {
                cs += a[i];
                ms = max(ms, cs);
            }  
            else
            {
                ms = max(ms, cs);
                cs = 0;
            }
        }
    }
    if(cs)
    {
        ms = max(ms, cs);
    }
        
    if(ms == k)
    {
        YES;
        flp(0, n)
        {
            if(s[i] == '0')
                cout << -(ll)1e18 << " ";
            else
                cout << a[i] << " ";
        }    
        NL;
        return;
    }
    if(ms > k)
    {
        NO;
        return;
    }
    ll index = -1;
    flp(0, n)
    {
        if(s[i] == '0' && index == -1)
        {
            index = i;
        }
        else if(s[i] == '0')
            a[i] = -(ll)1e18;
    }
    if(index == -1 && ms != k)
    {
        NO;
        return;
    }
    cs = 0;
    ms = 0;
    ll mp = 0;
    flp(index + 1, n)
    {
        if(s[i] == '0')
            break;
        cs += a[i];   
        mp = max(mp, cs);
    }
    cs = 0;
    flm(0, index)
    {
        cs += a[j];
        ms = max(ms, cs);
    }
    a[index] = k - (max(0ll, ms) + max(0ll, mp));

    YES;
    flp(0, n)
        cout << a[i] << " ";
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
