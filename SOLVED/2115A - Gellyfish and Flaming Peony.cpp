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
 
vector<int> a(5005);
vector<int> dp(5005);
int n;


void solve()
{
    int gcd, c = 0;
    cin >> n;
    queue<int> q;
    flp(0, n)
    {
        cin >> a[i];
        q.push(a[i]);
        if(i)
            gcd = __gcd(gcd, a[i]);
        else
            gcd = a[i];
    }
    sort(a.begin(), a.begin() + n);
    flp(0, n)
    {
        if(a[i] != gcd)
            break;
        c ++;
    }
    if(c)
    {
        cout << n - c << endl;
        return;
    }
 
    flp(0, a[n - 1])
        dp[i] = -1;
    flp(0, n)
        dp[a[i]] = 0;
    while(q.size())
    {
        int ele = q.front();
        q.pop();
        flp(0, n)
        {
            int val = __gcd(a[i], ele);
            if(dp[val] == -1)
            {
                dp[val] = dp[ele] + 1;
                q.push(val);
            }
        }
    }
    
    cout << dp[gcd] + n - 1 << endl;
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
