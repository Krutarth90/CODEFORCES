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
    int n, k, mex = 0;
    cin >> n >> k;
    map<int, vector<int>> ma;
    vector<int> se;
    vector<int> a(n);

    flp(0, n)
    {
        cin >> a[i];
        if(ma[a[i]].size() == k)
        {
            a[i] = 0;
        }
        else
            ma[a[i]].pb(i);
    }
    
    for(auto [x, y] : ma)
    {
        if(y.size() == k)
        {
            flp(0, k)
            {
                a[y[i]] = i + 1;
            }
        }
        else
        {
            for(int i = 0; i < (int)y.size(); i ++)
            {
                se.pb(y[i]);
            }
        }
    }
    int color = k + 1;
    flp(0, se.size())
    {
        if(color > k)
        {
            if((se.size() - i) < k)
            {
                a[se[i]] = 0;
                continue;
            }
            color = 1;
        } 
        a[se[i]] = color;
        color ++;
    }
    
    for(auto x : a)
        cout << x << " ";
    NL;   
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
