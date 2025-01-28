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
    int n, m, ans = 0;
    cin >> n >> m;
    map<int, vector<int>> row, col;
    flp(0, n)
    {
        for(int j = 0; j < m; j ++)
        {
            int x;
            cin >> x;
            row[x].pb(i);
            col[x].pb(j);
        }
    }
    for(auto [x, y] : row)
    {
        int sum = 0, c = 0;
        for(auto it = y.rbegin(); it != y.rend(); it ++)
        {
            int val = *it;
            ans += sum - val * c;
            c ++;
            sum += val;
        }
    }

    for(auto [x, y] : col)
    {
        sort(y.begin(), y.end());
        int sum = 0, c = 0;
        for(auto it = y.rbegin(); it != y.rend(); it ++)
        {
            int val = *it;
            ans += sum - val * c;
            c ++;
            sum += val;
        }
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
