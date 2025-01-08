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

void solve()
{
    int n, ans = 0;
    cin >> n;
    int a, b, c;
    cin >> b >> c;
    map<pair<int, int>, int> l, r, m;
    map<pair<int, pair<int, int>>, int> triple;
    flp(0, n - 2)
    {
        a = b;
        b = c;
        cin >> c;
        int beautiful = l[{a, b}] + m[{a, c}] + r[{b, c}] - 3 * triple[{a, {b, c}}];
        ans += beautiful;
        l[{a, b}] ++;
        m[{a, c}] ++;
        r[{b, c}] ++;
        triple[{a, {b, c}}] ++;
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
