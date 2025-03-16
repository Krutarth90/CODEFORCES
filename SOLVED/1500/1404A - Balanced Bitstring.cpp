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
    ll n, k, c = 0, ex = 0;
    cin >> n >> k;
    vector<char> of(k, '*');
    string s;
    cin >> s;
    flp(0, k)
    {
        if(s[i] == '?')
        {
            for(int j = i + k; j < n; j += k)
            {
                if(s[j] != '?')
                {
                    s[i] = s[j];
                    break;
                }
            }
        }
        if(s[i] == '1')
            c ++;
        else if(s[i] == '0')
            c --;
        else
            ex ++;
    }
    if(ex < c || (ex - c) % 2)
    {
        NO;
        return;
    }
    flp(0, k)
    {
        if(s[i] == '?')
        {
            if(c > 0)
            {
                ex --;
                c --;
                s[i] = '0';
            }
            else
            {
                ex --;
                c ++;
                s[i] = '1';
            }
        }
        of[i % k] = s[i];
    }
    if(c)
    {
        NO;
        return;
    }
    flp(0, n)
    {
        if(of[i % k] == '*')    
            of[i % k] = s[i];
        if(s[i] != of[i % k])
        {
            if(s[i] == '?')
                continue;
            NO;
            return;
        }
        of[i % k] = s[i];
    }
    YES;


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