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
    string s;
    cin >> s;
    if(s[0] == 'm' || s[0] == 'w')
    {
        cout << 0 << endl;
        return;
    }
    vector<int> dp(s.size() + 1);
    dp[0] = 1;
    dp[1] = 1;
    flp(1, s.size())
    {
        if(s[i] == 'm' || s[i] == 'w')
        {
            cout << 0 << endl;
            return;
        }
        if((s[i] == 'u' || s[i] == 'n') && (s[i - 1] == s[i]))
            dp[i + 1] = dp[i] + dp[i - 1];
        else
            dp[i + 1] = dp[i];
        dp[i + 1] %= (int)(1e9+7);
    }
    cout << dp.back() << endl;
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
