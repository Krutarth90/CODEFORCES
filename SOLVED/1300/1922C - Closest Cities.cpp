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
        cin>>n;
        int a[n];
        flp(0,n)
            cin>>a[i];
        bool f[n]={false},r[n]={false};
        f[0]=true;
        r[n-1]=true;
        flp(1,n-1)
        {
            if(a[i]-a[i-1]>a[i+1]-a[i])
                f[i]=true;
            else
                r[i]=true;
        }
        int pref[n];
        pref[0]=0;
        flp(1,n)
        {
            pref[i]=pref[i-1];
            if(f[i-1])
                pref[i]++;
            else
                pref[i]+=(a[i]-a[i-1]);
        }
        int suf[n];
        suf[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=suf[i+1];
            if(r[i+1])
                suf[i]++;
            else
                suf[i]+=(a[i+1]-a[i]);
        }
        int m;
        cin>>m;
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            if(x<y)
                cout<<pref[y-1]-pref[x-1]<<endl;
            else
                cout<<suf[y-1]-suf[x-1]<<endl;
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