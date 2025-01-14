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
    vector<pair<int, int>> a(n);

    flp(0, n)
    {
        cin >> a[i].first;
    }
    flp(0, n)
    {
        cin >> a[i].second;
    }
    sort(a.begin(), a.end());
    flm(0, n)
    {
        if(ans >= a[j].first)
            break;
        ans = min(ans + a[j].second, a[j].first);
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
