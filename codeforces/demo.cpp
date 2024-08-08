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

    static void solve()
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        bool b[n]={0};
        flp(0,n)
        {
            cin>>a[i];
            if(i>1 && i<n-1)
            {
                if(a[i-1]>a[i-2] && a[i-1]>a[i])
                {
                    b[i-1]=1;
                }
            }
        }
        int pref[n];
        pref[0]=0;
        flp(1,n)
        {
            pref[i]=pref[i-1];
            if(b[i])
                pref[i]+=1;  
        }
        int ans=0,l=-1;
        for(int i=1;i<=n-k;i++)
        {
            if(pref[i+k-2]-pref[i]>ans)
            {
                ans=pref[i+k-2]-pref[i];
                l=i;
            }
        }
        cout<<ans+1<<" "<<l+1<<endl;
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