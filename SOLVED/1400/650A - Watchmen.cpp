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
 

void solve()
{
    int n, ans = 0;
    cin >> n;
    map<int, int> a, b;
    map<pair<int, int>, int> c;
    flp(0, n)
    {
        int x, y;
        cin >> x >> y;
        ans += a[x];
        a[x] ++;
        ans += b[y];
        b[y] ++;
        ans -= c[{x, y}];
        c[{x, y}] ++;
    }
    cout << ans << endl;
}


 
signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    //cin >> TC ;
    while(TC--)
        solve() ;
}
