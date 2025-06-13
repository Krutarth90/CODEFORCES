#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define flp(k,n) for(ll i=(ll)k;i<(ll)n;i++)
#define flm(k,n) for(ll j=(ll)n-1;j>=(ll)k;j--)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define NL cout<<"\n"
#define SPACE << " " << 

void solve() 
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    s="0"+s;
    int ans = 0, cur = s[0];
    for (int i = 1; i <= n; i++) 
    {
        int dig = s[i];
        if (cur != dig) 
           ans++;
        cur = dig;
    }
    if(ans >= 3)
        cout << ans - 2 + n << "\n";
    else if(ans == 2)
        cout << ans - 1 + n << "\n";
    else 
        cout << ans + n << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
    return 0;
}
