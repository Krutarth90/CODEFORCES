#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n) for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n) for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout<<"\n"
#define SPACE << " " <<
 
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
    string s;
    cin >> s;
    int n = (int) s.length();
    int l, r, bl = 0;
    flp(0, n)
        if (s[i] == 'a') 
        {
            bl = 1;
            l = i - 1;
            r = i + 1;
        }
    
    int c = 1;
    while (l >= 0 || r < n)
        if (l >= 0 && s[l] == char(c + 'a')) 
        {
            c++;
            l--;
        } else if (r < n && s[r] == char(c + 'a')) 
        {
            c++;
            r++;
        } 
        else 
        {
            bl = 0;
            break;
        }
    cout << (bl ? "YES" : "NO") << '\n';
}

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC = 1;
    cin >> TC;
    while(TC--)
        solve();
}
