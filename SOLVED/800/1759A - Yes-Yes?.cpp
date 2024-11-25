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
    if(s[0] != 'Y' && s[0] != 'e' && s[0] != 's')
    {
        NO;
        return;
    }
    flp(1, s.size())
    {
        if(s[i] == 'Y')
        {
            if(s[i - 1] != 's')
            {
                NO;
                return;
            }
        }
        else if(s[i] == 'e')
        {
            if(s[i - 1] != 'Y')
            {
                NO;
                return;
            }
        }
        else if(s[i] == 's')
        {
            if(s[i - 1] != 'e')
            {
                NO;
                return;
            }
        }
        else
        {
            NO;
            return;
        }
    }
    YES;
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
