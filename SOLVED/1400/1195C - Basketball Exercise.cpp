#include <bits/stdc++.h>
using namespace std;
#define flp(k,n)                            for(int i=k;i<n;i++)
#define flm(k,n)                            for(int j=n-1;j>=k;j--)
#define YES                                 cout<<"YES\n"
#define NO                                  cout<<"NO\n"
#define int                                 long long
#define endl                                "\n"
#define pb                                  push_back
#define ppb                                 pop_back
#define NL                                  cout<<"\n"


vector<int> prime;
class solution
{
    public:
    static void seive (int l)
    {
        vector<bool> check(l + 1, true);
        check[0] = 0;
        check[1] = 0;
        for(int i = 2 ; i * i <= l ; i ++)
        {
            if(check[i])
            {
                prime.pb(i);
                for(int j = i * i ; j <= l ; j += i)
                    check[j] = 0;
            }
        }
        for(int i = sqrt(l) + 1 ; i <= l ; i ++)
            if(check[i])
                prime.pb(i);
    }

    static int MOD(int n)
    {
        int mod = 1e9 + 7;
        if(n >= 0)
            return n % mod ;
        else
            return mod + n % mod ;
    }
    
    static bool comp(pair<int, int>a, pair<int, int>b) 
    {
        if(a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    }
    
    static int fact(int n)
    {
        int ans = 1;
        while(n > 1)
        {
            ans *= n;
            n --;
        }
        return ans;
    }
    
    static void solve()
    {
        int n;
        cin >> n;
        int a[n + 1], b[n + 1];
        flp(1, n + 1)
            cin >> a[i];
        flp(1, n + 1)
            cin >> b[i];
        vector<int> dp1(n + 1), dp2(n + 1);
        dp1[0] = 0;
        dp2[0] = 0;

        flp(1, n + 1)
        {
            dp1[i] = max(dp2[i - 1] + a[i], dp1[i - 1]); 
            dp2[i] = max(dp2[i - 1], dp1[i - 1] + b[i]);
        }
        cout << max(dp2[n], dp1[n]);
    }
};

signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    //cin >> TC ;
    while(TC--)
        solution::solve() ;
}
