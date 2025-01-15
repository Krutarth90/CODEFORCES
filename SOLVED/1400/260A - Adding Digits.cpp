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
    int a, b, n;
    cin >> a >> b >> n;
    int temp = a * 10;
    int mod = temp % b;
    if(!mod)
        a = temp;
    else 
    {
        mod = b - mod;
        if(mod > 9)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            a = temp + mod;
        }    
    }
    
    cout << a;
    flp(0, n - 1)
        cout << 0;
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
