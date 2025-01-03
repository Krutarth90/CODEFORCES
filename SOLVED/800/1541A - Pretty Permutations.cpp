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
    int n;
    cin >> n;
    if(n % 2 == 0)
    {
        flp(1, n + 1)
        {
            if(i % 2)
                cout << i + 1 << " ";
            else
                cout << i - 1 << " ";
        }
        NL;
    }
    else
    {
        flp(1, n - 2)
        {
            if(i % 2)
                cout << i + 1 << " ";
            else
                cout << i - 1 << " ";
        }

        cout << n << " " << n - 2 << " " << n - 1 << endl;
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
