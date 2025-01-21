#include <bits/stdc++.h>
using namespace std;
#define int                                 long long
#define flp(k,n)                            for(int i=(int)k;i<(int)n;i++)
#define flm(k,n)                            for(int j=(int)n-1;j>=(int)k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"
#define SPACE                               << " " << 

pair<int, int> f(int l, int r, int k)
{
    int m = l + (r - l) / 2;
    if(r - l + 1 < k)
        return {0, 0};
    if((r - l + 1) & 1)
    {
        auto v = f(l, m - 1, k);
        return {m + v.first * 2 + m * v.second, v.second * 2 + 1};
    }
    else
    {
        auto v = f(l, m, k);
        return {v.first * 2 + v.second * m, v.second * 2};
    }
    
}
void solve()
{
    int n, k;
    cin >> n >> k;
    auto ans = f(1, n, k);
    
    cout << ans.first << endl;
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
