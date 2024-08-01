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



class solution
{
    public:
    static int MOD(int n)
    {
        if(n>=0)
            return n%((int)1e9 + 7);
        else
            return ((int)1e9 + 7) + n%((int)1e9 + 7);
    } 

    static void solve()
    {
        int n,k;
        cin>>n>>k; 
        string s;
        cin>>s;
        int c=k,ans=0;
        bool f=0;
        flp(0,n)
        {
            if(s[i]=='0')
                c++;
            else
            {
                c=0;
                f=1;
            }
            if(c>=2*k + 1 )
            {
                ans++;
                c=k;
            }
        }
        if(c>=k + 1 )
        {
            ans++;
            c=k;
        }
        cout<<ans<<endl;
    }
};

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC=1;
    cin>>TC;
    while(TC--)
        solution::solve();
}