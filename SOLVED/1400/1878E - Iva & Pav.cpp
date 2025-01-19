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
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(30));
    vector<int> b(n);
    flp(0, 31)
        a[0][i] = 0;
    flp(1, n + 1)
    {
        cin >> b[i - 1];
        for(int j = 0; j < 30; j ++)
        {
            if(b[i - 1] & (1 << j))
                a[i][j] = a[i - 1][j] + 1;
            else
                a[i][j] = a[i - 1][j];
        }
    }

    int q;
    cin >> q;
    while(q --)
    {
        int l, k, L, r = n + 1;
        cin >> L >> k;
        l = L - 1;
        if(b[l] < k)
        {
            cout << -1 << " ";
            continue;
        }
        while(l + 1 < r)
        {
            int m = l + (r - l) / 2;
            if(b[m - 1] < k)
            {
                r = m;
                continue;
            }
            int num = 0;
            flp(0, 30)
            {
                if(a[m][i] - a[L - 1][i] == m - L + 1)
                    num += (1 << i);
            }
            if(num >= k)
                l = m;
            else
                r = m;
        }
        if(l < L)
            cout << -1 << " ";
        else
            cout << l << " ";
    }
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
