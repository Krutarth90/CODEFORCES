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

    static void solve()
    {
        int n;
        cin>>n;
        int p=0,z=0;
        vector<int>a;
        flp(0,n)
        {
            int x;
            cin>>x;
            if(x==0)
            {
                z++;
                if(z>2)
                    continue;
            }
            else if(x>0)
                p++;
            a.pb(x);
        }
        if(p>2 || (n-z-p)>2)
        {
            NO;
            return;
        }
        sort(a.begin(),a.end());
        flp(0,a.size())
        {
            for(int j=i+1;j<a.size();j++)
            {
                for(int k=j+1;k<a.size();k++)
                {
                    int q=a[i]+a[j]+a[k];
                    bool f=1;
                    for(int c=0;c<a.size() && f;c++)
                        if(a[c]==q)
                            f=0;
                    if(f)
                    {
                        NO;
                        return;
                    }
                }
            }
        }
        YES;
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