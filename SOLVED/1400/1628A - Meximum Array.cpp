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
    int n, mex = 0;
    cin >> n;
    map<int, int> ma;
    vector<int> a(n), ans;
    flp(0, n)
    {
        cin >> a[i];
        ma[a[i]] ++;
    }
    set<int> se;
    flp(0, n)
    {
        se.insert(a[i]);
        ma[a[i]] --;
        while(se.find(mex) != se.end())
        {
            mex ++;
        }
        if(!ma[mex])
        {
            ans.pb(mex);
            mex = 0;
            se.clear();
        }
    }
    cout << ans.size() << endl;
    for(auto x: ans)
        cout << x << " ";
    NL;
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
