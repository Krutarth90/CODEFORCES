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
    int n, k, c = 0, m = 0;
    cin >> n >> k;
    if(k > n)
    {
        NO;
        return;
    }
    if(k == n)
    {
        YES;
        flp(0, n)
            cout << 1 << " ";
        NL;
        return;
    }

    map<int, int> ma;
    for(int i = 1; i <= n; i = (i << 1))
    {
        if(i & n)
        {
            ma[i] ++;
            m = i;
            c ++;
        }     
    }
    if(c > k)
    {
        NO;
        return;
    }
    for(int i = m; i > 0; i /= 2)
    {
        while(c < k && ma[i])
        {
            ma[i] --;
            ma[i / 2] += 2;
            c ++;
        }
    }
    YES;
    for(int i = m; i > 0; i /= 2)
    {
        for(int j = ma[i]; j > 0; j --)
            cout << i << " ";
    }
    NL;
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
