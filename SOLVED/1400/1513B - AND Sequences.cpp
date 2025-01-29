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


int MOD(int x)
{
    return x % ((int)1e9 + 7);
}
void solve()
{
    int n, ans = 0, c = 1;
    cin >> n;
    vector<int> a(n);
    flp(0, n)
        cin >> a[i];
    sort(a.begin(), a.end());
    flp(1, n)
    {
        if(a[i] != a[0])
            break;
        c ++;
    }
    if(c < 2)
    {
        cout << 0 << endl;
        return;
    }
    flp(c, n)
    {
        if((a[i] & a[0]) != a[0])
        {
            cout << 0 << endl;
            return;
        }
    }
    ans = c * (c - 1);
    n -= 2;
    while(n)
    {
        ans = MOD(ans * MOD(n));
        n --;
    }
    cout << ans << endl;
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
