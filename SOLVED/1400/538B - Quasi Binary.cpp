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
    int n, in = 1;
    cin >> n;
    vector<int> a;
    while(n)
    {
        int digit = n % 10;
        
        flp(1, digit + 1)
        {
            if(a.size() < i)
            {
                a.pb(in * 1);
            }
            else
            {
                a[i - 1] = in + a[i - 1];
            }
        }
        n /= 10;
        in *= 10;
        
    }
    cout << a.size() << endl;
    flp(0, a.size())
        cout << a[i] << " ";
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
