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
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a;
    set<int> s;
    flp(0, m * n)
    {
        int x;
        cin >> x;
        a.pb(x / d);
        s.insert(x % d);
        if(s.size() > 1)
        {
            cout << -1 << endl;
            return;
        }
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for(int x : a)
    {
        ans += abs(x - a[(n * m) / 2]);
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
