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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> up, down, right, left;
    set<pair<ll, ll>> se;

    flp(0, n)
    {
        ll x, y;
        cin >> x >> y;
        se.insert({x, y});

        if(i)
        {
            if (x >= down[1].first)
            {
                swap(down[1], down[0]);
                down[1] = {x, y};
            }
            else if (x > down[0].first)
            {
                down[0] = {x, y};
            }
            else if(down[1] == down[0])
            {
                down[0] = {x, y};
            }
 
            if (x <= up[1].first)
            {
                swap(up[1], up[0]);
                up[1] = {x, y};
            }
            else if (x < up[0].first)
            {
                up[0] = {x, y};
            }
            else if(up[1] == up[0])
            {
                up[0] = {x, y};
            }
 
            if (y >= right[1].second)
            {
                swap(right[1], right[0]);
                right[1] = {x, y};
            }
            else if (y > right[0].second)
            {
                right[0] = {x, y};
            }
            else if(right[1] == right[0])
            {
                right[0] = {x, y};
            }
 
            if (y <= left[1].second)
            {
                swap(left[1], left[0]);
                left[1] = {x, y};
            }
            else if (y < left[0].second)
            {
                left[0] = {x, y};
            }
            else if(left[1] == left[0])
            {
                left[0] = {x, y};
            }
 
            continue;
        }

        left.pb({x, y});
        left.pb({x, y});

        right.pb({x, y});
        right.pb({x, y});

        up.pb({x, y});
        up.pb({x, y});

        down.pb({x, y});
        down.pb({x, y});
    }
    
    vector<pair<ll, ll>> extremes = {up[0], up[1], down[0], down[1], left[0], left[1], right[0], right[1]};
    ll ans = (down[1].first - up[1].first + 1) * (1 + right[1].second - left[1].second );
    
    for (auto sel : extremes)
    {
        ll minx = INT_MAX, miny = INT_MAX, may = INT_MIN, maxx = INT_MIN;
        for(auto rem : extremes)
        {
            if(sel == rem)
                continue;
            minx = min(rem.first, minx);
            miny = min(rem.second, miny);
            maxx = max(rem.first, maxx);
            may = max(rem.second, may);
        }
        ll x = (may - miny + 1), y = (maxx - minx + 1);
        ll cur = x * y;
        if(x * y < n)
        {
            cur = min({(x + 1) * y, (y + 1) * x});
        }
        if(cur >= n)
            ans = min(ans, max(0ll, cur));
    }

    cout << ans << '\n';
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
