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
    static void solve()
    {
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        int p1[n][26]={0},p2[n][26]={0};
        p1[0][a[0]-'a']=1;
        p2[0][b[0]-'a']=1;

        for(int i=1;i<n;i++)
        {
            p1[i][a[i]-'a']=p1[i-1][a[i]-'a']+1;
            p2[i][b[i]-'a']=p2[i-1][b[i]-'a']+1;
        }

        while(q--)
        {
            string s=a,t=b;
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            int ans=0;
            flp(0,26)
            {
                ans+=abs((p1[r+1][i]-p1[l][i])-(p2[r+1][i]-p2[l][i]));
            }
            cout<<ans/2<<endl;
        }
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