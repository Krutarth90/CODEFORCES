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
    int n;
    cin >> n;
    map<int, set<int>> ma;
    flp(0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        ma[x].insert(y);
        ma[y].insert(x);
    }
    if(n == 2)
    {
        cout << 0 << endl;
        return;
    }
    vector<pair<int, int>> fr(n);
    flp(0, n)
        fr[i].first = ma[i + 1].size(), fr[i].second = i + 1;
    sort(fr.begin(), fr.end());
    int ans = 0;
    for (int i = n - 1; i > -1; i--) 
    {
        for(int j = i - 1; j >= 0; j --)
        {
            if (ma[fr[i].second].find(fr[j].second) == ma[fr[i].second].end()) 
            {
                ans = max(ans, (int)(fr[i].first) + fr[j].first - 1);
                break;
            } 
            else 
            {
                ans = max(ans, (int)(fr[i].first) + fr[j].first - 2);
            }
        }
        
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
