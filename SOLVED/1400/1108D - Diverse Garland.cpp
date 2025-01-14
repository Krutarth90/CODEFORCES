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
    int n, c = 0;
    string s;
    cin >> n;
    cin >> s;
    flp(0, n - 1)
    {
        if(s[i] == s[i + 1])
        {
            c ++ ;
            map<char, bool> ma;
            ma['R'];
            ma['G'];
            ma['B'];
            ma[s[i]] = 1;
            if(i + 2 < n)
                ma[s[i + 2]] = 1;
            for(auto [x, y] : ma)
            {
                if(!y)
                {
                    s[i + 1] = x;
                    break;
                }
            }
        }
    }
    cout << c << endl;
    cout << s << endl;
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
