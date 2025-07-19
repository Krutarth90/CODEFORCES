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
    long long x1, x2;
    int p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    int mn = min(p1, p2);
    p1 -= mn;
    p2 -= mn;
    if (p1 >= 7)
        cout << ">" << endl;
    else if (p2 >= 7)
        cout << "<" << endl;
    else
    {
        for (int i = 0; i < p1; ++i) 
            x1 *= 10;
        for (int i = 0; i < p2; ++i) 
            x2 *= 10;
        if (x1 < x2)
            cout << "<" << endl;
        else if (x1 > x2)
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }
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
