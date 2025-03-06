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
    ll n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    priority_queue<ll> pq;
    flm(0, n)
    {
        if(s[j] == '1')
        {
            pq.push(j + 1);
        }
        else
        {
            ans += j + 1;
            if(pq.size())
                pq.pop();
        }
    }
    if(pq.size())
    {
        ll ex = pq.size() / 2;
        flp(0, ex)
            pq.pop();
        while(pq.size())
        {
            ans += pq.top();
            pq.pop();
        }
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
