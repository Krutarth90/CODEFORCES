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
    int n;
    cin >> n;
    vector<pair<int, int>> ans;
    priority_queue<pair<int, int>> a;
    flp(1, n + 1)
    {
        int x;
        cin >> x;
        if(x)
        {
            a.push({x, i});
        }
    }
    while(1)
    {
        if(a.size() < 2)
            break;
        int e1 = a.top().first, p1 = a.top().second;
        a.pop();
        int e2 = a.top().first, p2 = a.top().second;
        a.pop();
        if(!(e1 && e2))
            break;
        ans.pb({p1, p2});
        if(e1 > 1)
            a.push({e1 - 1,p1});
        if(e2 > 1)
            a.push({e2 - 1,p2});
    }
    cout << ans.size() << endl;
    for(auto x : ans)
        cout << x.first << " " << x.second << endl;
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
