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
    int n, m, c = 0, l = 1;
    cin >> n >> m;
    int ans = 0;
    vector<int> end(n + 1, n + 1);
    flp(0, m)
    {
        int x, y;
        cin >> x >> y;
        if(x < y)
            swap(x, y);
        end[y] = min(end[y], x);
    }
    flm(1, n)
    {
        end[j] = min(end[j], end[j + 1]);
    }
    flp(1, n + 1)
        ans += (end[i] - i);
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
