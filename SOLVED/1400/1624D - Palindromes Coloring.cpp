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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n == k)
    {
        cout << 1 << endl;
        return;
    }

    vector<int> a(26, 0);
    flp(0, n)
        a[s[i] - 'a'] ++;
    int c = 0;
    flp(0, 26)
    {
        if(a[i] % 2)
            c ++;
    }
    int ans = (n - c) / 2;
    c += (ans % k) * 2;
    ans /= k;
    ans *= 2;

    cout << ans + (c >= k) << endl;
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
