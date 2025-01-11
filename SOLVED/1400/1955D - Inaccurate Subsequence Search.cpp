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
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    map<int, int> fr, c;
    vector<int> a(n);
    flp(0, n)
    {
        cin >> a[i];
        if(i < m - 1)
            c[a[i]] ++;
    }

    flp(0, m)
    {
        int x;
        cin >> x;
        fr[x] ++;
    }
    
    int co = 0;
    for(auto [x, y] : fr)
    {
        co += min(c[x], y);
    }
    for(int i = 0; i + m - 1< n; i ++)
    {
        c[a[i + m - 1]] ++;
        if((fr.find(a[i + m - 1]) != fr.end()) && (fr[a[i + m - 1]] >= c[a[i + m - 1]]))
            co ++;
        if(co >= k)
        {
            ans ++;
        }

        c[a[i]] --;
        if((fr.find(a[i]) != fr.end()) && fr[a[i]] > c[a[i]] )
            co --;       
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
