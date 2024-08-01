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
        string s;
        cin>>s;
        int f=-1;
        flp(0,s.size()-1)
        {
            if(((s[i]-'0')%2)==0)
            {
                if(s[i]<s[s.size()-1])
                {
                    swap(s[i],s[s.size()-1]);
                    cout<<s<<endl;
                    return;
                }   
                else
                {
                    f=i;
                } 
            }
        }
        if(f==-1)
            cout<<-1<<endl;   
        else
        {
            swap(s[f],s[s.size()-1]);
            cout<<s<<endl;
        }
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