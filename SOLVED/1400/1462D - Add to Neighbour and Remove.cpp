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
    int n, sum = 0;
    cin >> n;
    int a[n];
    flp(0, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    flp(0, n)
    {
        int rs = sum / (n - i);
        if(sum % (n - i))
            continue;
        int cs = 0;
        bool f = 1;
        for(int j = 0; j < n && f; j ++)
        {
            if(cs == rs)
                cs = 0;
            else if(cs > rs)
                f = 0;
            cs += a[j];    
        }
        if(f && (cs == rs))
        {
            cout << i << endl;
            return;
        }
    }
    cout << n - 1 << endl;   
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
