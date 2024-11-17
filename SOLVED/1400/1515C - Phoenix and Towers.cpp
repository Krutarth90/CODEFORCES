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
    int n, m, x;
    cin >> n >> m >> x;
    set<pair<int, int>> s;
    vector<pair<int, int>> a(n);
    vector<int> ans(n);
    flp(0, n)
    {
        cin >> a[i].first;
        a[i].second = i;
        

    }
    sort(a.begin(), a.end());

    flp(0, n)
    {
        if(i < m)
        {
            s.insert({a[i].first, i + 1});
            ans[a[i].second] = (i + 1);
        }
        else
        {
            pair<int, int> firs = *s.begin();
            s.erase(firs);
            s.insert({firs.first + a[i].first, firs.second});
            ans[a[i].second] = firs.second;
        }
    }
    if((*s.begin()).first - (*(--s.end())).first > x)
    {
        NO;
        return;
    }
    YES;
    flp(0, n)
        cout << ans[i] << " ";
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
