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
    int n, x, y, c = 0;
    cin >> n >> x >> y;
    flp(0, n)
    {
        int t;
        cin >> t;
        if(t & 1)
            c ++;
    }
    if(c % 2)
    {
        if((x % 2) != (y % 2))
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    else
    {
        if((x % 2) == (y % 2))
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
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
