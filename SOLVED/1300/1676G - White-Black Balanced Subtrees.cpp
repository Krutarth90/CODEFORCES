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
        int n;
        cin >> n;
        int a[n];
        vector<bool> f(n,true), vis(n, false);
        a[0] = -1;
        f[0] = false;
        flp(1,n)
        {
            cin >> a[i];
            f[a[i] - 1] = false;
        }

        string s;
        map<int, int> ma;
        cin >> s;
        if(s[0] == 'W')
            ma[0] ++;
        else
            ma[0] --;
        flp(0,n)
        {
            if(f[i] == false)
                continue;
            int ele = i, val = 0;
            while(1)
            {
                if(ele == 0)
                {
                    ma[0] += val;
                    break;
                }
                if(s[ele] == 'W' && vis[ele] == false)
                    val ++;
                else if(vis[ele] == false)
                    val --;
                ma[ele] += val;
                vis[ele] = true;
                ele = a[ele] - 1;
            }
        }
        int ans= 0;
        for(auto it : ma)
            if(it.second == 0)
                ans++;
        cout<<ans<<endl;
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