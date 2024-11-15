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
    int n, ans = INT_MAX;
    cin >> n;
    string s;
    cin >> s;
    flp(0, n - 1)
    {
        if(s[i] != 'a')
            continue;
        map<char, int> ma;
        ma['a'] ++;
        for(int j = i + 1; j < min(n, i + 7); j ++)
        {
            ma[s[j]] ++;
            if(ma['a'] > ma['b'] && ma['a'] > ma['c'])
            {
                ans = min (ans, j - i + 1);
                break;
            }
        }
        if(ans == 2)
            break;
    }
    if(ans > 7)
        cout << -1 << endl;
    else
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
