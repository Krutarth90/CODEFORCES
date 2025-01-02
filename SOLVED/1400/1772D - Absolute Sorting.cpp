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
    int n, mi = INT_MAX, ma = 0;
    cin >> n;
    vector<int> a;
    flp(0, n)
    {
        int x;
        cin >> x;
        if(a.empty() || a.back() != x)
            a.pb(x);
    }

    flp(1, a.size())
    {
        if(a[i - 1] < a[i])
        {
            mi = min(mi, (a[i - 1] + a[i]) / 2);
        }
        else
        {
            ma = max(ma, (a[i - 1] + a[i] + 1) / 2);
        }
    }
    if(ma > mi)
        cout << -1 << endl;
    else
        cout << ma << endl;
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
