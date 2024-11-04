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
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    flp(0, n)
        cin >> a[i];
    vector<pair<int, int>> l(m), r(m);
    flp(0, m)
    {
        cin >> l[i].first >> r[i].first >> l[i].second;
        r[i].second = l[i].second;
        l[i].first --;
        r[i].first --;
    }
    int x[k], y[k];
    flp(0, k)
    {
        cin >> x[i] >> y[i];
        x[i] --;
        y[i] --;
    }
    sort(x, x + k);
    sort(y, y + k);
    int cur = 0, ri = 0, li = 0;
    flp(0, m)
    {
        while((li < k) && (i >= x[li]))
        {
            cur ++;
            li ++;
        }
        while((ri < k) && (i > y[ri]))
        {
            cur --;
            ri ++;
        }
        l[i].second *= cur;
        r[i].second *= cur; 
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    cur = 0;
    ri = 0;
    li = 0;
    flp(0, n)
    {
        while((li < m) && (i >= l[li].first))
        {
            cur += l[li].second;
            li ++;
        }
        while((ri < m) && (i > r[ri].first))
        {
            cur -= r[ri].second;
            ri ++;
        }
        cout << a[i] + cur << " ";
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
