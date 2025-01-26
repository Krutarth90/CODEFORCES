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

int N = 2e5 + 1;
vector<vector<pair<int, int>>> a(N);
vector<int> it(N, INT_MAX), ind(N, -1);

void dfs(int node, int index)
{
    ind[node] = index;
    for(auto [x, y] : a[node])
    {
        if(ind[x] > -1)
            continue;
        if(y > index)
        {
            it[x] = it[node];
        }
        else
        {
            it[x] = it[node] + 1;
        }
        dfs(x, y);
    }
}

void solve()
{
    int n, ans = 1;
    cin >> n;
    
    it[1] = 1;
    ind[1] = 0;
    flp(0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        a[x].pb({y, i + 1});
        a[y].pb({x, i + 1});
    }
    dfs(1, 0);
    flp(1, n + 1)
    {
        ans = max(ans, it[i]);
        it[i] = INT_MAX;
        ind[i] = -1;
        a[i].clear();
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
