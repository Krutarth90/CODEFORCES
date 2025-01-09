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
    int n, k, f = -1, l = -1, c = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    flp(0, n)
    {
        if(s[i] != '1')
            continue;
        if(f == -1)
            f = i;
        l = i;
        c ++ ;
    }
    int ans = 0;
    if(c && (k >= (n - 1 - l)))
    {
        k -= (n - 1 - l);
        c --;
        ans ++;
    }
    
    if(c && (k > -1 && k >= f))
    {
        c --;
        ans += 10;
    }
    
    ans += (11 * c);
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
