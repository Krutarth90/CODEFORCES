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
    vector<ll> a(n);
    set<ll> ans;
    ll mini = 0, maxi = 0, mi2 = 0, ma2 = 0, el = -1, sp = 0, sn = 0;
    ans.insert(0);
    flp(0, n)
    {
        cin >> a[i];
        if(abs(a[i]) != 1)
        {
            mi2 = mini;
            ma2 = maxi;
            el = i;
            mini = 0;
            maxi = 0;
            sp = 0;
            sn = 0;
            continue;
        }
        if(sp + a[i] <= 0)
        {
            sp = 0;
        }
        else
        {
            sp += a[i];
            maxi = max(maxi, sp);
        }
        if(sn + a[i] >= 0)
        {
            sn = 0;
        }
        else
        {
            sn += a[i];
            mini = min(mini, sn);
        }
    }
    flp(mini, maxi + 1)
        ans.insert(i);
    flp(mi2, ma2 + 1)
        ans.insert(i);
    if(el != -1)
    {
        ll mas = 0, cs = 0, mis = 0;
        flp(el + 1, n)
        {
            cs += a[i];
            mis = min(mis, cs);
            mas = max(mas, cs);
        }
        cs = 0;
        ll NAS = 0, NIS = 0;
        flm(0, el)
        {
            cs += a[j];
            NIS = min(NIS, cs);
            NAS = max(NAS, cs);
        }
        flp(NIS + mis + a[el], NAS + mas + 1 + a[el])
            ans.insert(i);
    }
    cout << ans.size() << endl;
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
