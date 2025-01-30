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
    int n, c = 0, odd = 0, even = 0, pos = 0, neg = 0;
    cin >> n;
    
    flp(0, n)
    {
        int x;
        cin >> x;
        
        if(c % 2 == 0)
        {   
            even ++;
        }    
        else   
        {
            odd ++;
        }    
        if(x < 0)
        {
            c ++;
        }
        if(c % 2 == 0)
        {
            pos += even;
            neg += odd;
        } 
        else
        {
            pos += odd;
            neg += even;
        }
        
    }
    cout << neg << " " << pos << endl;
}



signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    // cin >> TC ;
    while(TC--)
        solve() ;
}
