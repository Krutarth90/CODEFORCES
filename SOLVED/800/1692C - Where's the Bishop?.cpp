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
        string s[8];
        flp(0, 8)
            cin >> s[i];
        flp(1, 7)
        {
            for(int j = 1; j < 7; j ++)
            {
                if(s[i][j] != '#')
                    continue;
                bool f = 1;
                if(i)
                {
                    if(j)
                        if(s[i - 1][j - 1] != '#')
                            f = 0;
                    if(j < 7)
                        if(s[i - 1][j + 1] != '#')
                            f = 0;
                }
                if(i < 7)
                {
                    if(j)
                        if(s[i + 1][j - 1] != '#')
                            f = 0;
                    if(j < 7)
                        if(s[i + 1][j + 1] != '#')
                            f = 0;
                }
                if(f)
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    return;
                }
            }
        }
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
