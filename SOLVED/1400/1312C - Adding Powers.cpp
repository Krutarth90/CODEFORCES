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
    int n, k, m = 0, c = 1;
    cin >> n >> k;
    vector<int> a;
    flp(0, n)
    {
        int x;
        cin >> x;
        if(!x)
            continue;
        a.pb(x);
        m = max(m, x);
    } 

    while(c < m)
        c *= k;

    while(c >= 1)
    {
        flp(0, a.size())
            if((a[i] > 0) && (a[i] >= c))
            {
                a[i] -= c;
                break;
            }

        c /= k;
    }

    flp(0, a.size())
        if(a[i])
        {
            NO;
            return;
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
