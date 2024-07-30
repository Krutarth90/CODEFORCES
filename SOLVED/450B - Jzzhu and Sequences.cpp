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
        int x,y,n;
        cin>>x>>y>>n;
        int a[]={ MOD(x), MOD(y), MOD(y-x), MOD(-x), MOD(-y), MOD(x-y)};
        n--;
        int ans=MOD(n%6);
        ans=a[ans];
        cout<<MOD(ans)<<endl;
    }
};

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC=1;
    //cin>>TC;
    while(TC--)
        solution::solve();
}