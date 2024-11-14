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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    flp(0, m)
    {
        int x;
        cin >> x;
        a[x - 1] ++;
    }
    int l = 0, r = m + 1;

    while(l + 1 < r)
    {
        int mid = (l + r) / 2, s = 0;

        flp(0, n)
        {
            if(a[i] <= mid)
                s -= (mid - a[i]) / 2;
            else
                s += (a[i] - mid);
        }
        if(s > 0)
            l = mid;
        else
            r = mid;
    }
    cout << r << endl;
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
