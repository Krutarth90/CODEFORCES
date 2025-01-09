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
    int n, k, offset = 0;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> fa(27, 0), fb(27, 0);
    flp(0, n)
    {
        fa[a[i] - 'a'] ++;
        fb[b[i] - 'a'] ++;
    }

    flp(0, 26)
    {
        if(fa[i] == fb[i])
            continue;
        
        int dif = (fa[i] - fb[i]);
        if(dif < 0 || dif % k)
        {
            NO;
            return;
        }
        fa[i + 1] += dif;   
    }
    YES;
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
