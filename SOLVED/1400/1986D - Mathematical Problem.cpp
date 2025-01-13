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
    string s;
    int n, sum = 0, ans = INT_MAX;
    cin >> n;
    cin >> s;
    if(n == 2)
    {
        cout << stoi(s) << endl;
        return;
    }
    if(n == 3)
    {
        if(s[0] == '0' || s[2] == '0')
        {
            cout << 0 << endl;
            return ;
        }
        int v1 = s[0] - '0', v2 = s[1] - '0', v3 = s[2] - '0';
        cout << min({v1 * 10 + v2 + v3, (v1 * 10 + v2) * v3, v1 * ( 10 * v2 + v3), 10 * v2 + v3 + v1}) << endl;
        return;
    }
    flp(0, n)
    {
        int v = s[i] - '0';
        if(v == 0)
        {
            cout << 0 << endl;
            return;
        }
        if(v == 1)
            continue;
        sum += v;
    }
    flp(0, n - 1)
    {
        int ts = sum, v1 = s[i] - '0', v2 = (s[i + 1] - '0');
        
        if(v1 > 1)
            ts -= v1;
        if(v2 > 1)
            ts -= v2;
        ts += v1 * 10 + v2;
        ans = min(ans, ts);    
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
