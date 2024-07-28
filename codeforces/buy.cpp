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
        int n,k;
        cin>>n>>k;
        if(k%2 || k>(n*n)/2)
        {
            NO;
            return;
        }
        YES;
        vector<int>a(n+1,-1);
        int i=1,j=n;
        while(i<j)
        {
            if(i>=j)
            {
                if(i==j)
                    a[i]=j;
                break;
            }
            if(k>=2*(j-i))
            {
                a[j]=i;
                a[i]=j;
                k-=2*(j-i);
            }
                i++;
                j--;
        }
        if(k)
        {
            if(n%2==0)
            {
                NO;
                return;
            }
            for(int j=1;j<n;j++)
            {
                if(a[j]==-1 && a[j+1]==-1)
                {
                    a[j]=j+1;
                    a[j+1]=j;
                    break;
                }
            }
        }
        for(int j=1;j<=n;j++)
        {
            if(a[j]==-1)
                cout<<j<<' ';
            else
                cout<<a[j]<<' ';
        }
        NL;
    }
};

signed main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int TC=1;
    cin>>TC;
    while(TC--)
        solution::solve();
}