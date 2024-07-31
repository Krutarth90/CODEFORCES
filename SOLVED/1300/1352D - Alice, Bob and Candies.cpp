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
        bool f=1;
        int al=0,b=0,prev=0,l=0,r=n-1,mov=0;
        while(l<=r)
        {
            int cur=0;
            while(cur<=prev && l<=r)
            {
                if(f)
                {
                    cur+=a[l];
                    l++;
                }
                else
                {
                    cur+=a[r];
                    r--;
                }  
            }
            prev=cur;
            if(f)
            {
                f=0;
                al+=cur;
            }
            else
            {
                f=1;
                b+=cur;
            }
            mov++;
        }
        cout<<mov<<" "<<al<<" "<<b<<endl; 
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