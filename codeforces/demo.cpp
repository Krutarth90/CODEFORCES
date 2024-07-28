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
        int n;
        cin>>n;
        flp(2,(int)sqrt(n)+1)
            if(n%i==0)
            {
                cout<<n/i<<" "<<n-n/i<<endl;
                return;
            }
        cout<<1<<" "<<n-1<<endl;
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