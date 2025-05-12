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
    ll n, c, i = 0, j = 0, d = 0;
    cin >> n;
    c = n * n - 1;
    vector<vector<int>> a(n, vector<int> (n, -1));
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    while(c > -1)
    {
        a[i][j] = c --;
        i += dir[d].first;
        j += dir[d].second;
        if(i >= n || i < 0 || j >= n || j < 0 || a[i][j] != -1)
        {
            i -= dir[d].first;
            j -= dir[d].second;
            d ++;
            if(d > 3)
                d = 0;  
            i += dir[d].first;
            j += dir[d].second;
        }
    }
    flp(0, n)
    {
        for(int j = 0; j < n; j ++)
            cout << a[i][j] << " ";
        NL;
    }
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
