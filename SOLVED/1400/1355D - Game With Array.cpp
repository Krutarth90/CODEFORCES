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
    int n, s;
    cin >> n >> s;  
    if(s >= 2 * n)
    {
        YES;
        flp(0, n - 1)
            cout << 2 << " ";
        cout << s - (2 * (n - 1)) << endl << 1;
    }
    else
        NO;
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
