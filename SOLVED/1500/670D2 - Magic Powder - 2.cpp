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
    vector<pair<int, pair<int, int>>> a(n);
    flp(0, n)
    {
        cin >> a[i].second.second;
    }
    flp(0, n)
    {
        cin >> a[i].first;
        a[i].second.first = (a[i].first % a[i].second.second) - a[i].second.second;
        if(a[i].second.first)
        a[i].first /= a[i].second.second;
    }
    sort(a.begin(), a.end());
    int s = 0, rs = 0, prev = 0, as = 0,ans = a[0].first;
    //flp(0, n)
    //    cout << a[i].first << " " << a[i].second.first << " " << a[i].second.second << endl;
    //NL;
    flp(1, n + 1)
    {
        rs += a[i - 1].second.first;
        as += a[i - 1].second.second;
        //cout << i << " ";
        if(i == n || ans < a[i].first)
        {
            if(k >= s - rs)
            {
                //cout << rs << " " << as << " ";
                k -= (s - rs);
                ans ++;
                rs = 0;
                s += as;
                as = 0; 
                if(i == n)
                {
                    ans += k / s;
                    cout << ans << endl;
                    return;
                }
                int temp = min(k / s, a[i].first - ans);
                ans += temp;
                k -= temp * s;
                //cout << temp << " " << ans << " " << k;
            }
            else
            {
                //cout << k << endl;
                cout << ans << endl;
                return;
            }
        }
        //NL;
    }
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
