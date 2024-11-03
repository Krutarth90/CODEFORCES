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
 
vector<int> adj[5 * (int)1e5 + 1], vis(5 * (int)1e5 + 1, -1);


int fun(int n)
{
    int c = 0;
    while(n % 3 == 0)
    {
        n /= 3;
        c ++;
    }
    return (-1 * c);
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    flp(0, n)
    {
        cin >> a[i].second;
        a[i].first = fun(a[i].second);
    }
    sort(a.begin(), a.end());
    flp(0, n)
        cout << a[i].second << " ";
    NL;
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
