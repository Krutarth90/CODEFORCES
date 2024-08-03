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
        int n,m;
        cin>>n>>m;
        int k[n];
        flp(0,n)
            cin>>k[i];
        int c[m];
        flp(0,m)
            cin>>c[i];
        sort(k,k+n);
        int ans=0,l=0;
        flm(0,n)
        {
            if(l<m && c[l]<=c[k[j]-1])
            {
                ans+=c[l];
                l++;
            }
            else
            {
                ans+=c[k[j]-1];
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
    cin>>TC;
    while(TC--)
        solution::solve();
}