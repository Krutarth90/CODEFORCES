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
        check[0]=0;
        check[1]=0;
        for(int i = 2 ; i * i <=l ; i++)
        {
            if(check[i])
            {
                prime.pb(i);
                for(int j = i * i ; j<=l ; j+=i)
                    check[j]=0;
            }
        }
        for(int i=sqrt(l) + 1 ; i <=l ; i++)
            if(check[i])
                prime.pb(i);
    }

    static int MOD(int n)
    {
        if(n>=0)
            return n%((int)1e9 + 7) ;
        else
            return ((int)1e9 + 7) + n%((int)1e9 + 7) ;
    }
    static bool comp(pair<int,int>a,pair<int,int>b) 
    {
        if(a.first==b.first)
            return a.second>b.second;
        return a.first<b.first;
    }
    static int fact(int n)
    {
        int ans=1;
        while(n)
        {
            ans*=n;
            n--;
        }
        return ans;
    }
    static void solve()
    {
        int ans = 0;
        string s;
        cin >> s;
        int n = s.size();
        vector<int> f(n), b(n);
        f[0] = 0;
        b[n - 1] = 0;
        flp(1, n)
        {
            f[i] = f[i - 1];
            if( s[i] == 'v' && s[i - 1] == 'v')
                f[i] ++;
        }
        flm(0, n -1)
        {
            b[j] = b[j + 1];
            if(s[j] == 'v' && s[j + 1] == 'v')
                b[j] ++;
        }
        flp(0,n)
            if(s[i] == 'o')
                ans+=(f[i] * b[i]);
        cout << ans << endl;
    }
};

signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC=1 ;
    cin>>TC ;
    while(TC--)
        solution::solve() ;
}
