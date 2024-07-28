#include <bits/stdc++.h>
using namespace std;
//#define flp(k,n)                            for(int i=k;i<n;i++)
#define flp(k,n,i)                          for(int i=k;i<n;i++)
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
        int n;
        cin>>n;
        string s[n];
        flp(0,n,i)
            cin>>s[i];
        flp(0,n,i)
        {
            flp(0,n,j)
            {
                if(s[i][j]=='1')
                {
                    if(!((i==n-1 || j==n-1) || (i<n-1 && s[i+1][j]=='1') || (j<n-1 && s[i][j+1]=='1')))
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
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC=1;
    cin>>TC;
    while(TC--)
        solution::solve();
}