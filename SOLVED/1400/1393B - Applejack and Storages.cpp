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
    int n, c2 = 0, c4 = 0, c6 = 0, c8 = 0;
    cin >> n;
    map<int, int> ma;
    flp(0, n)
    {
        int x;
        cin >> x;
        ma[x] ++;
        if(ma[x] == 2)
            c2 ++;
        else if(ma[x] == 4)
            c4 ++;
        else if(ma[x] == 6)
            c6 ++;
        else if(ma[x] == 8)
            c8 ++;
    }
    int q;
    cin >> q;
    while(q --)
    {
        char c;
        cin >> c;
        int x;
        cin >> x;
        if(c == '-')
        {
            if(ma[x] == 2)
                c2 --;
            else if(ma[x] == 4)
                c4 --;
            else if(ma[x] == 6)
                c6 --;
            else if(ma[x] == 8)
                c8 --;
            ma[x] --;
        }
        else
        {
            ma[x] ++;

            if(ma[x] == 2)
                c2 ++;
            else if(ma[x] == 4)
                c4 ++;
            else if(ma[x] == 6)
                c6 ++;
            else if(ma[x] == 8)
                c8 ++;
        }
        if(c8 || c4 > 1)
            YES;
        else if(c4 == 0)
            NO;
        else if((c2 > 1 && c6) || c2 >= 3)
            YES;
        else    
            NO;
    }
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
