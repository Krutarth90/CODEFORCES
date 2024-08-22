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


const int MAX=2e5;
int a[MAX + 1], pre[MAX + 1]; 

int f(int i)
{
    int c=0;
    while(i)
    {
        i/=3;
        c++;
    }
    return c;
}

class solution
{
    public: 
    static bool toggle(bool f )
    {
        if(f)
            return false;
        return true;
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
        int l,r;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]+a[l]<<endl;
    }
};

signed main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int TC=1;
    cin>>TC;
    pre[0]=0;
    flp(1,MAX+1)
    {
        a[i]=f(i);
        pre[i]=pre[i-1]+a[i];
    }
    while(TC--)
        solution::solve();
}