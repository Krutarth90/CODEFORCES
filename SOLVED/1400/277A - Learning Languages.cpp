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
 
vector<int> ladj[101], eadj[101];
vector<int> vis(201, -1);

void fun(int n, bool f)
{
    if(f)
    {
        vis[n] = 1;
        for(int x :eadj[n])
        {
            if(vis[100 + x] == -1)
                fun(x, 0);
        }
    }
    else
    {
        for(int x :ladj[n])
        {
            vis[100 + n] = 1;
            if(vis[x] == -1)
                fun(x, 1);
        }
    }
}

void solve()
{
    bool f = 1;
    int n, m;
    cin >> n >> m;
    flp(1, n + 1)
    {
        int t;
        cin >> t;
        while(t --)
        {
            int x;
            cin >> x;
            if(x)
                f = 0;
            eadj[i].pb(x);
            ladj[x].pb(i);
        }
    }
    int ans = 0;
    flp(1, n + 1)
    {
        if(vis[i] == -1)
        {
            ans ++;
            fun(i, 1);
        }    
    }
    if(f)
        ans ++;
    cout << ans - 1 << endl;

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
