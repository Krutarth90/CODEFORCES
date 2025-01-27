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
    int n, m, c5 = 0, c2 = 0;
    cin >> n >> m;
    int temp = n;
    while(!(temp % 5))
    {
        c5 ++;
        temp /= 5;
    }
    while(!(temp % 2))
    {
        c2 ++;
        temp /= 2;
    }
    int mul = 1;
    while(mul < m && c5 != c2)
    {
        if(c5 < c2)
        {
            if(mul * 5 <= m)
            {
                mul *= 5;
                c5 ++;
                continue;
            }
        }  
        else if(mul * 2 <= m)
        {
            mul *= 2;
            c2 ++;
            continue;
        }    
        break;
    }
    while(mul * 10 <= m)
    {
        mul *= 10;
    }
    if(mul == 1)
    {
        cout << n * m << endl;
        return;
    }
    for(int i = 9; i > 1; i --)
    {
        if(i * mul <= m)
            mul *= i;
    }
    cout << mul * n << endl;  
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
