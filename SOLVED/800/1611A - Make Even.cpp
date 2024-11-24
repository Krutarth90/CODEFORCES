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
    if((n % 2) == 0)
    {
        cout << 0 << endl;
        return;
    }
    string s = to_string(n);
    flp(0, s.size())
    {
        if(((s[i] - '0')) % 2 == 0)
        {
            if(i)
                cout << 2 << endl;
            else
                cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
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
