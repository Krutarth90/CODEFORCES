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

struct Item
{
    int value;
    int weight;
};

class solution
{
    public: 
    static void solve()
    {
        int n,w;
        cin>>n>>w;
        int a[n],b[n];
        flp(0,n)
            cin>>a[i];
        flp(0,n)
            cin>>b[i];
        Item it[n];
        flp(0,n)
        {
            it[i].value=a[i];
            it[i].weight=b[i];
        }
        solution::fractionalKnapsack(w, it, n) ;
    }

    static double fractionalKnapsack(int w, Item a[], int n) 
    {
        double ans=0;
        vector<pair<double,int>> pp(n);
        for(int i=0;i<n;i++)
        {
            pp[i]={ a[i].value/a[i].weight , a[i].weight };
        }
        sort(pp.begin(),pp.end());
        int i=n-1;
        while(w>0 && i>-1)
        {
            double temp(min(pp[i].second,w));
            w-=temp;
            ans+=(temp * pp[i].first);
            i--;
        }
        cout<<ans<<endl;
        return ans;
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