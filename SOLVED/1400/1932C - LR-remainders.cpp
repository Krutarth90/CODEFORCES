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
    vector<int> a(n), ans;
    flp(0, n)
        cin >> a[i];
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    bool f = 0;
    flp(0, n - 1)
    {
        if(s[i] == 'L')
        {
            l ++;
            f = 1;
        }
        else
        {
            r --;
            f = 0;
        }  
    }
    ans.pb(a[l] % m);
    flm(0, n - 1)
    {
        if(s[j] == 'L')
        {
            l --;
            ans.pb((ans.back() * a[l]) % m);
        }
        else
        {
            r ++;
            ans.pb((ans.back() * a[r]) % m);
        }
        
    }
    flm(0, n)
        cout << ans[j] << " ";
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
