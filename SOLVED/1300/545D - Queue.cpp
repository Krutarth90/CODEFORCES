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
        int n;
        cin>>n;
        int a[n];
        flp(0,n)
            cin>>a[i];
        int ans=0,s=0;
        sort(a,a+n);
        flp(0,n)
        {
            if(s<=a[i])
            {
                s+=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
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