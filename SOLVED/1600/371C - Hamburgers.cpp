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
    string s;
    cin >> s;
    ll a, b, c, pa, pfb, pc, A = 0, B = 0, C = 0, r;
    cin >> a >> b >> c >> pa >> pfb >> pc >> r;

    for(auto x : s)
    {
        if(x == 'B')
            A ++;
        else if(x == 'S')
            B ++;
        else
            C ++;
    }
    ll ans = LLONG_MAX;
    if(A)
        ans = min(ans, a / A);
    else
        a = 0;
    if(B)
        ans = min(ans, b / B);
    else
        b = 0;
    if(C)
        ans = min(ans, c / C);
    else
        c = 0;

    a -= ans * A;
    b -= ans * B;
    c -= ans * C;
    while(a + b + c && r)
    {
        if(A >= a)
        {
            if((A - a) * pa <= r)
            {
                r -= pa * (A - a);
                a = A;
            }
            else
                break;
        }
        if(B >= b)
        {
            if((B - b) * pfb <= r)
            {
                r -= pfb * (B - b);
                b = B;
            }
            else
                break;
        }   
        if(C >= c)
        {
            if((C - c) * pc <= r)
            {
                r -= pc * (C - c);
                c = C;
            }
            else
                break;
        }
        a -= A;
        b -= B;
        c -= C;
        ans ++;
    }
    if(r >= (A * pa + B * pfb + C * pc))
    {
        ans += r / (A * pa + B * pfb + C * pc);
    }
    cout << ans << endl;
}


signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    // cin >> TC ;
    while(TC--)
        solve() ;
}
