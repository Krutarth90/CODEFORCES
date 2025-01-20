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
    bool f = 0;
    int n, m, sum = 0;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
    flp(0, n)
        for(int j = 0; j < m; j ++)
        {
            cin >> a[i][j];
            a[i][m] += a[i][j];
            a[n][j] += a[i][j];
        }
    
    int i = 0, j = 0;
    for(int k = 0; k < (int)s.size(); k ++)
    {
        int x = s[k];
        if(x == 'D')
        {
            int val = sum - a[i][m];
            a[i][j] = val;
            a[n][j] += val;;
            i ++;
        }
        else
        {
            int val = sum - a[n][j];
            a[i][j] = val;
            a[i][m] += val;
            j ++;
        }
    }
    a[n - 1][m - 1] = -a[n][m - 1];
    flp(0, n)
    {   
        for(int j = 0; j < m; j ++)
            cout << a[i][j] << " ";
        NL;
    }
        
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
