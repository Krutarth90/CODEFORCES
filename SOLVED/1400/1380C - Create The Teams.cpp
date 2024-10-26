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
        int n, x, ans = 0, c = 1;
        cin >> n >> x;
        vector <int> a; 
        flp(0, n)
        {
            int t;
            cin >> t;
            if(t >= x)
                ans ++;
            else
                a.pb(t);
        }
        sort(a.begin(), a.end());
        n = a.size();
        flm(0, n)
        {
            if(a[j] * c >= x)
            {
                ans ++;
                c = 1;
            }
            else
            {
                c ++;
            }
        }
        cout << ans << endl;
    }
};
 
signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC = 1 ;
    cin >> TC ;
    while(TC--)
        solution::solve() ;
}
