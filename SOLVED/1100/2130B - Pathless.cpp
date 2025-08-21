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
    int n, s, zero = 0, one = 0, two = 0;
    cin >> n >> s;
    vector<int> a(n);
    flp(0, n)
    {
        cin >> a[i];
        if(a[i] == 0)
            zero ++;
        else if(a[i] == 1)
            one ++;
        else
            two ++;
        s -= a[i];
    }
    if(s == 0)
    {
        cout << -1 << endl;
        return;
    }
    if(s < 0)
    {
        flp(0, n)
            cout << a[i] << " ";
        NL;
        return;
    }
    flp(0, n)
    {
        if(i * 3 > s)
            break;
        if((s - i * 3) % 2)
            continue;
        cout << -1 << endl;    
        return;
    }

    for(int j = 0; j < zero; j ++)
        cout << 0 << " ";
    for(int j = 0; j < two; j ++)
        cout << 2 << " ";
    for(int j = 0; j < one; j ++)
        cout << 1 << " ";
    NL;

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
