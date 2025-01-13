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
    int n, prev, pp;
    vector<int> b, c;
    cin >> n;
    cin >> pp;
    cin >> prev;
    
    b.pb(__gcd(prev, pp));
    c.pb(0);
    flp(1, n - 1)
    {
        int x;
        cin >> x;
        b.pb(__gcd(x, prev));
        c.pb(__gcd(pp, x));
        pp = prev;
        prev = x;
    }
    
    bool f = 1;
    flp(0, b.size() - 1)
    {
        if(b[i] > b[i + 1])
        {
            if(i + 1 == n - 2)
            {
                YES;
                return;
            }
            if(i < 2 || b[i - 2] <= c[i])
            {
                bool won = 1;
                int temp = b[i];
                b[i] = c[i];
                for(int j = i + 1; j < (int)b.size(); j ++)
                {
                    if(b[j] < b[j - 1])
                    {
                        won = 0;
                        break;
                    }
                }
                if(won)
                {
                    YES;
                    return;
                }
                b[i] = temp;
                
            }
            if(!i || c[i + 1] >= b[i - 1])
            {
                bool won = 1;
                int temp = b[i + 1];
                b[i + 1] = c[i + 1];
                for(int j = i + 2; j < (int)b.size(); j ++)
                {
                    if(b[j] < b[j - 1])
                    {
                        won = 0;
                        break;
                    }
                }
                if(won)
                {
                    YES;
                    return;
                }
                b[i + 1] = temp;
            }
            if(i + 2 < c.size() && c[i + 2] >= b[i])
            {
                b[i + 2] = c[i + 2];
                for(int j = i + 3; j < b.size(); j ++)
                {
                    if(b[j] < b[j - 1])
                    {
                        NO;
                        return;
                    }
                }
                YES;
                return;
            }
            NO;
            
            return;
        }
    }
    YES;
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
