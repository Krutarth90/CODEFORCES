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
    int n;
    cin >> n;
    map<int, pair<int, vector<int>>> ma;
    int u[n];
    flp(0, n)
        cin >> u[i];
    flp(0, n)
    {
        int x;
        cin >> x;
        ma[u[i]];
        ma[u[i]].first += x;
        ma[u[i]].second.pb(x);
    }
    int ans[n + 1] = {0};

    for(auto x : ma)
    {
        sort(x.second.second.begin(), x.second.second.end());

        vector<int> pref(x.second.second.size() + 1, 0);
        flp(1, x.second.second.size() + 1)
        {
            pref[i] = pref[i - 1] + x.second.second[i - 1];
        }
        flp(1, n + 1)
        {
            int ta = x.second.first;
            ta -= pref[x.second.second.size() % i];
            if(i > x.second.second.size())
                break;
            ans[i] += ta;
        }
    }
    flp(1, n + 1)
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
