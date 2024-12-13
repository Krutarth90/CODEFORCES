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
    int n = s.size(), ans = 0, c = 0, q = 0;
    int a[2] = {-1, -1};
    flp(0, n)
    {
        if(s[i] == '?')
        {
            q ++;
            c ++;
        }
        else
        {
            if(s[i] == '0')
            {
                if((a[0] > -1 && (a[0] % 2 != i % 2)) || (a[1] > -1 && (a[1] % 2 == i % 2)))
                {
                    c = 1;
                    c += q;
                    a[1] = -1;
                }
                else
                {
                    c ++;
                }
            }
            else
            {
                if((a[1] > -1 && (a[1] % 2 != i % 2)) || (a[0] > -1 && (a[0] % 2 == i % 2)))
                {
                    c = 1;
                    c += q;
                    a[0] = -1;
                }
                else
                {
                    c ++;
                }
            }
            q = 0;
            a[s[i] - '0'] = i;
        }
        ans += c;
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
