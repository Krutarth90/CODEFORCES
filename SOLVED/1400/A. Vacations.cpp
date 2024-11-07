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
    int idle[n + 1], gym[n + 1], con[n + 1];
    idle[0] = 0;
    con[0] = 0;
    gym[0] = 0;
    flp(1, n + 1)
    {
        int x;
        cin >> x;
        con[i] = x & 1;
        gym[i] = ((x & 2) != 0);
        idle[i] = 0;
        if(i == 1)
            continue;
        if(gym[i] == 1)
        {
            gym[i] += max(con[i - 1], idle[i - 1]);
        }
        else
        {
            gym[i] = max({gym[i - 1], con[i - 1], idle[i - 1]});
        }
        
        if(con[i] == 1)
            con[i] += max(gym[i - 1], idle[i - 1]);
        else
            con[i] = max({gym[i - 1], con[i - 1], idle[i - 1]});
        
        idle[i] = max({gym[i - 1], con[i - 1], idle[i - 1]});
    }
    
    cout << n - max(con[n], max(idle[n], gym[n])) << endl;   
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
