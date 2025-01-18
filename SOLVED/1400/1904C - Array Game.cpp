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
    int n, k, ans;
    cin >> n >> k;
    vector<int> a(n);
    flp(0, n)
    {
        cin >> a[i];
    }
    if(k > 2)
    {
        cout << 0 << endl;
        return;
    }

    sort(a.begin(), a.end());
    ans = a[0];
    flp(0, n - 1)
    {
        ans = min(ans, abs(a[i] - a[i + 1]));
    }
    if(k == 1)
    {
        cout << ans << endl;
        return;
    }
    flp(0, n - 1)
    {
        for(int j = i + 1; j < n; j ++)
        {
            int dif = abs(a[i] - a[j]);
            int lb = lower_bound(a.begin(), a.end(), dif) - a.begin();
            
            if(lb < n)
                ans = min(ans, abs(a[lb] - dif));
            if(lb) 
                lb --;
            ans = min(ans, abs(dif - a[lb]));
        }
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
