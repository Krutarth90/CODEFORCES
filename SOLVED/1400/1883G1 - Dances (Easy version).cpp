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
    int n, m;
    cin >> n >> m;
    vector<int> b(n), a = {1};
    flp(0, n - m)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
    sort(a.begin(), a.end());
    flp(0, n)
        cin >> b[i];
    sort(b.begin(), b.end());
    int i = 0, ans = 0, j = 0;
    while(i + ans < n && j < n)
    {
        if(b[j] > a[i])
        {
            i ++;
            j ++;
        }
        else
        {
            ans ++;
            j ++;
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
