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

const int N = 1e5;
vector<int> a[N + 1];
vector<bool> vis(N + 1, false);
set<int> s1, s2;

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
    static void dfs(int i, bool f, int n)
    {
        if(vis[i])
            return;
        vis[i] = true;
        if(f)
            s1.insert(i);
        else
            s2.insert(i);
        f = !f;
        for(int j = 0;j < a[i].size(); j ++)
            dfs(a[i][j], f, n);
    }
    static void solve()
    {
        int n;
        cin >> n;
        
        flp(0,n - 1)
        {
            int u, v;
            cin >> u >> v;
            a[u].pb(v);
            a[v].pb(u);
        }
        bool f = false;
        dfs(1, f, n);
        cout << s1.size() * s2.size() - (n - 1) << endl;
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
