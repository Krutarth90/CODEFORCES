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

bool check(vector<pair<int, int>> a, int k)
{
    int l = k, r = 0;
    for(int j = 0; j < (int)a.size(); j ++)
    {
        l -= k;
        r += k; 
        if(l > a[j].second || r < a[j].first)
            return false;
        l = max(l, a[j].first);
        r = min(r, a[j].second);      
    }
    return true;
}

void solve()
{
    int n, l = -1, r = 1e9;
    cin >> n;
    vector<pair<int, int>> a(n);
    flp(0, n)
    {
        cin >> a[i].first >> a[i].second;
    }
    while(l + 1 < r)
    {
        int m = (l + r) / 2;
        if(check(a, m))
            r = m;
        else
            l = m;
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
