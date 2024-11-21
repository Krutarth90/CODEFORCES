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
    bool five = 0, zero = 0, other = 0;
    int n;
    cin >> n;
    int a[n];
    set<int> z, f, o;
    flp(0, n)
    {
        cin >> a[i];
        if((a[i] % 10) == 5)
        {
            five = 1;
            f.insert(a[i]);
        }  
        else if((a[i] % 10) == 0)
        {
            zero = 1;
            z.insert(a[i]);
        } 
        else
        {
            other = 1;
            while((a[i] % 10) != 2)
            {
                a[i] += (a[i] % 10);
            }
            o.insert(((a[i] / 10) % 10) % 2);
        }       
    }
    if((zero || five) && other)
    {
        NO;
        return;
    }
    if(other)
    {
        if(o.size() == 1)
        {
            YES;
            return;
        }
        NO; 
        return;    
    }
    if(((z.size() == 1) && (!f.size())) || ((f.size() == 1) && (!z.size())))
    {
        YES;
        return;
    }
    if(((z.size() == 1) && (f.size() == 1)) && ((*f.begin()) + 5 == (*z.begin())))
    {
        YES;
        return;
    }
    NO;
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
