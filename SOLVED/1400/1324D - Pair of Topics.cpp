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
        while(n > 0)
        {
            ans*=n;
            n--;
        }
        return ans;
    }
    
    static void solve()
    {
        int n;
        cin >> n;
        int a[n], b[n];
        vector<int> c(n);
        flp(0, n)
            cin >> a[i];
        flp(0, n)
        {
            cin >> b[i];
            c[i] = (a[i] - b[i]);
        }
        sort(c.begin(), c.end());
        int i = 0, ans = 0;
        for(i = 0; i < n; i ++)
        {
            if(c[i] > 0 || (i == n - 1))
                break;
            int q = (-1 * c[i]);
            q ++;
            int index = lower_bound(c.begin() + i + 1, c.end(), q) - c.begin();
            ans += (n - index);
        }
        int rem = n - i;
        ans += (rem * (rem - 1)) / 2;
        cout << ans << endl;
    }
};

signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ;
    int TC=1 ;
    //cin>>TC ;
    while(TC--)
        solution::solve() ;
}
