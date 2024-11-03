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
    int n, k, q, mi = INT_MAX, ma = INT_MIN;
    cin >> n >> k >> q;
    vector<int> l(n), r(n);
    flp(0, n)
    {
        cin >> l[i] >> r[i];
        mi = min(mi, l[i]);
        ma = max(ma, r[i]);
    }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    int pref[ma - mi + 3] = {0};
    int cur = 0, lindex = 0, rindex = 0;
    flp(mi, ma + 1)
    {
        while(i >= l[lindex] && lindex < n)
        {
            cur ++;
            lindex ++;
        }
        while(i > r[rindex] && rindex < n)
        {
            cur --;
            rindex ++;
        }
        if(cur >= k)
            pref[i - mi + 1] = pref[i - 1 - mi + 1] + 1;
        else
            pref[i - mi + 1] = pref[i - 1 - mi + 1];
    }
    while(q --)
    {
        int a, b;
        cin >> a >> b;
        if(a > ma || b < mi)
        {
            a = 0;
            b = 0;
        }
        else
        {
            b = pref[min(b, ma) - mi + 1]; 
            if(a < mi)
                a = 0;  
            else
                a = pref[a - 1- mi + 1];
        }
        cout << b - a << endl;
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
