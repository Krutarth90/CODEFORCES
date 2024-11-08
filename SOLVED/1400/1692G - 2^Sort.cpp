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
    int n, k, c = 0, prev = 0, ans = 0;
    cin >> n >> k;
    k ++;
    flp(0, n)
    {
        int x;
        cin >> x;
        if(2 * x > prev)
            c ++;
        else
            c = 1;
        if(c >= k)
            ans ++;
        prev = x;
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
